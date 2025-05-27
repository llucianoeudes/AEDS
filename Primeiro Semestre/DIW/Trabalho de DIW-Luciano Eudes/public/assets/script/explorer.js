function pesquisarSeries() {
    const searchInput = document.getElementById('searchInput').value;
    if (!searchInput) {
        alert('Por favor, digite um texto para pesquisar.');
        return;
    }

    fetch(`https://api.themoviedb.org/3/search/tv?api_key=b5c3ce4b1190c3c4fd6211fe25c9d38a&query=${searchInput}&language=pt-BR`)
        .then(response => response.json())
        .then(data => {
            const resultsContainer = document.getElementById('resultsContainer');
            resultsContainer.innerHTML = '';
            data.results.forEach(serie => {
                resultsContainer.innerHTML += `
            <div class="col-md-3 mb-4">
              <div class="card">
                <img src="https://image.tmdb.org/t/p/w500${serie.poster_path}" class="card-img-top" alt="${serie.name}">
                <div class="card-body">
                  <h5 class="card-title">${serie.name}</h5>
                  <a href="detalhes.html?id=${serie.id}" class="btn btn-primary">Ver Detalhes</a>
                </div>
              </div>
            </div>
          `;
            });
        })
        .catch(error => console.error('Erro ao buscar séries:', error));
}
