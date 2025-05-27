const apiKey = '71ca7effce57d27043283ce4b719abab';
const baseUrl = 'https://api.themoviedb.org/3';
const jsonServerUrl = 'http://localhost:3000';

async function carregarSériesPopulares() {
  try {
    const response = await fetch(`${baseUrl}/tv/popular?api_key=${apiKey}`);
    if (!response.ok) {
      throw new Error('Erro ao buscar as séries populares');
    }
    const data = await response.json();
    const series = data.results;
    exibirSériesCarrossel(series, 'carousel-populares');
  } catch (error) {
    console.error('Erro:', error);
  }
}

async function carregarSériesNovas() {
  try {
    const response = await fetch(`${baseUrl}/tv/on_the_air?api_key=${apiKey}`);
    if (!response.ok) {
      throw new Error('Erro ao buscar as séries recentes');
    }
    const data = await response.json();
    const series = data.results;
    exibirSeries(series, 'novas-series');
  } catch (error) {
    console.error('Erro:', error);
  }
}

async function carregarFavoritas() {
  try {
    const response = await fetch(`${jsonServerUrl}/favoritas`);
    if (!response.ok) {
      throw new Error('Erro ao buscar séries favoritas');
    }
    const series = await response.json();
    exibirSeries(series, 'favoritas-series');
  } catch (error) {
    console.error('Erro:', error);
  }
}

function exibirSériesCarrossel(series, containerId) {
  const container = document.getElementById(containerId);
  container.innerHTML = '';

  series.forEach((serie, index) => {
    const isActiveClass = index === 0 ? 'active' : ''; 

    const item = `
      <div class="carousel-item ${isActiveClass}">
        <img src="https://image.tmdb.org/t/p/w500${serie.poster_path}" class="d-block w-100" alt="${serie.name}">
        <div class="carousel-caption d-none d-md-block">
          <h5>${serie.name}</h5>
          <p>${serie.overview}</p>
          <a href="detalhes.html?id=${serie.id}" class="btn btn-primary">Ver Detalhes</a>
        </div>
      </div>
    `;
    container.innerHTML += item;
  });
}

function exibirSeries(series, containerId) {
  const container = document.getElementById(containerId);
  container.innerHTML = '';
  series.forEach(serie => {
    const item = `
      <div class="col-md-4 mb-4">
        <div class="card">
          <img src="https://image.tmdb.org/t/p/w500${serie.poster_path}" class="card-img-top" alt="${serie.name}">
          <div class="card-body">
            <h5 class="card-title">${serie.name}</h5>
            <p class="card-text">${serie.overview}</p>
            <a href="detalhes.html?id=${serie.id}" class="btn btn-primary">Ver Detalhes</a>
          </div>
        </div>
      </div>
    `;
    container.innerHTML += item;
  });
}

async function carregarInformacoesAutor() {
  try {
    const response = await fetch(`${jsonServerUrl}/autor`);
    const autor = await response.json();

    if (autor.length > 0) {
      const dadosAutor = autor[0];
      document.getElementById('nome-autor').textContent = dadosAutor.nome;
      document.getElementById('curso').textContent = dadosAutor.curso;
      document.getElementById('minibio').textContent = dadosAutor.mini_bio;
      document.getElementById('link-facebook').href = dadosAutor.facebook;
      document.getElementById('link-instagram').href = dadosAutor.instagram;
      document.getElementById('avatar').src = dadosAutor.avatar || 'default-avatar.jpg'; // Coloque um caminho padrão se não houver avatar
    } else {
      console.error('Autor não encontrado.');
    }
  } catch (error) {
    console.error('Erro ao carregar as informações do autor:', error);
  }
}

document.addEventListener('DOMContentLoaded', () => {
  carregarSériesPopulares();
  carregarSériesNovas();
  carregarFavoritas();
  carregarInformacoesAutor();
});
