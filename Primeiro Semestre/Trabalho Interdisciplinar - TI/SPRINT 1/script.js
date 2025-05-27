async function fetchCarData() {
    try {
        const response = await fetch('carros.json');
        const data = await response.json();
        displayCars(data.carros);
    } catch (error) {
        console.error('Erro ao carregar os dados dos carros:', error);
    }
}

function displayCars(cars) {
    const carList = document.getElementById('carList');
    carList.innerHTML = '';

    cars.forEach(car => {
        const carElement = document.createElement('div');
        carElement.className = 'car';
        carElement.innerHTML = `
            <img src="${car.imagem}" alt="${car.nome}">
            <h2>${car.nome}</h2>
            <p>Preço: ${car.preco}</p>
            <p>Ano: ${car.ano}</p>
            <p>Marca: ${car.marca}</p>
            <p>Modelo: ${car.modelo}</p>
            <p>Tipo: ${car.tipo}</p>
            <a href="${car.link_venda}" class="details-button" target="_blank">+</a>
        `;
        carList.appendChild(carElement);
    });
}

function searchCar() {
    const searchInput = document.getElementById('searchInput').value.toLowerCase();
    fetchCarData().then(data => {
        const filteredCars = data.filter(car =>
            car.nome.toLowerCase().includes(searchInput) ||
            car.marca.toLowerCase().includes(searchInput) ||
            car.ano.toString().includes(searchInput)
        );
        displayCars(filteredCars);
    });
}

document.getElementById('searchInput').addEventListener('input', searchCar);
fetchCarData();
