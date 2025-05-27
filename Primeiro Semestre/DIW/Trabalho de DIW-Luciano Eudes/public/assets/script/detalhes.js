const apiKey = '71ca7effce57d27043283ce4b719abab'; 
const serieId = new URLSearchParams(window.location.search).get('id');
const serieDetalhesElement = document.getElementById('serieDetalhes');
const elencoContainer = document.getElementById('elencoContainer');

function carregarDetalhesSerie() {
    fetch(`https://api.themoviedb.org/3/tv/${serieId}?api_key=${apiKey}&language=pt-BR`)
        .then(response => response.json())
        .then(serie => {
            const detalhesHtml = `
                <h2>${serie.name}</h2>
                <img src="https://image.tmdb.org/t/p/w500${serie.poster_path}" class="img-fluid" alt="${serie.name}">
                <p><strong>Sinopse:</strong> ${serie.overview}</p>
                <p><strong>Lançamento:</strong> ${serie.first_air_date}</p>
                <p><strong>Popularidade:</strong> ${serie.popularity}</p>
                <p><strong>Gêneros:</strong> ${serie.genres.map(genre => genre.name).join(', ')}</p>
                <button class="btn btn-success mt-3" onclick="adicionarFavorita(${serie.id})">Adicionar aos Favoritos</button>
            `;
            serieDetalhesElement.innerHTML = detalhesHtml;
            carregarElenco(serieId);
        })
        .catch(error => {
            console.error('Erro ao carregar detalhes da série:', error);
            alert('Ocorreu um erro ao carregar os detalhes da série.');
        });
}

function carregarElenco(serieId) {
    fetch(`https://api.themoviedb.org/3/tv/${serieId}/credits?api_key=${apiKey}`)
        .then(response => response.json())
        .then(elenco => {
            const elencoHtml = elenco.cast.map(actor => `
                <div class="card col-md-3">
                    <img src="https://image.tmdb.org/t/p/w500${actor.profile_path}" class="card-img-top" alt="${actor.name}">
                    <div class="card-body">
                        <h5 class="card-title">${actor.name}</h5>
                        <p class="card-text">${actor.character}</p>
                    </div>
                </div>
            `).join('');
            elencoContainer.innerHTML = `<h3>Elenco</h3><div class="row">${elencoHtml}</div>`;
        })
        .catch(error => {
            console.error('Erro ao carregar elenco:', error);
            alert('Ocorreu um erro ao carregar o elenco.');
        });
}

function adicionarFavorita(serieId) {
    fetch(`https://api.themoviedb.org/3/tv/${serieId}?api_key=${apiKey}&language=pt-BR`)
        .then(response => response.json())
        .then(serie => {
            const favorita = {
                id: serie.id,
                name: serie.name,
                poster_path: serie.poster_path,
                overview: serie.overview
            };

            fetch('http://localhost:3000/favoritas', {
                method: 'POST',
                headers: {
                    'Content-Type': 'application/json'
                },
                body: JSON.stringify(favorita)
            })
                .then(response => response.json())
                .then(() => {
                    alert('Série adicionada aos favoritos com sucesso!');
                })
                .catch(error => {
                    console.error('Erro ao salvar série favorita:', error);
                    alert('Ocorreu um erro ao salvar a série como favorita.');
                });
        })
        .catch(error => {
            console.error('Erro ao carregar série para adicionar aos favoritos:', error);
            alert('Ocorreu um erro ao carregar os detalhes da série.');
        });
}

document.addEventListener('DOMContentLoaded', carregarDetalhesSerie);
