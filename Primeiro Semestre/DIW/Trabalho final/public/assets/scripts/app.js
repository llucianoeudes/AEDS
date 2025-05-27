const API_KEY = "71ca7effce57d27043283ce4b719abab";
const BASE_URL = "https://api.themoviedb.org/3";
const IMAGE_BASE_URL = "https://image.tmdb.org/t/p/w500";
const JSON_SERVER_URL = "http://localhost:3000";

// Fetch popular series
async function fetchPopularSeries() {
  try {
    const response = await fetch(`${BASE_URL}/tv/popular?api_key=${API_KEY}`);
    const data = await response.json();
    displayPopularSeries(data.results);
  } catch (error) {
    console.error("Error fetching popular series:", error);
  }
}

// Display series in carousel
function displayPopularSeries(series) {
  const carousel = document.getElementById("series-carousel");
  carousel.innerHTML = ""; // Clear previous content
  series.slice(0, 5).forEach((serie, index) => {
    carousel.innerHTML += `
      <div class="carousel-item ${index === 0 ? "active" : ""}">
        <img src="${IMAGE_BASE_URL}${serie.poster_path}" alt="${serie.name}" class="d-block w-100">
        <div class="carousel-caption">
          <h5>${serie.name}</h5>
          <p>${serie.overview}</p>
        </div>
      </div>
    `;
  });
}

// Fetch user details from JSON Server
async function fetchUserDetails() {
  try {
    const response = await fetch(`${JSON_SERVER_URL}/aluno`);
    const data = await response.json();
    displayUserDetails(data);
  } catch (error) {
    console.error("Error fetching user details:", error);
  }
}

// Display user details
function displayUserDetails(user) {
  const userSection = document.getElementById("user-details");
  userSection.innerHTML = `
    <img src="${user.foto}" alt="${user.nome}" class="user-photo">
    <h3>${user.nome}</h3>
    <p>${user.miniBio}</p>
    <ul>
      <li>Curso: ${user.curso}</li>
      <li>Turma: ${user.turma}</li>
      <li>Redes sociais: ${user.redesSociais.join(", ")}</li>
    </ul>
  `;
}

// Initialize the app
document.addEventListener("DOMContentLoaded", () => {
  fetchPopularSeries();
  fetchUserDetails();
});
