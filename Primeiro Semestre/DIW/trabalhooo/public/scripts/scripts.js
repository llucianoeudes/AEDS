document.addEventListener('DOMContentLoaded', function () {
    fetch('http://localhost:3000/author')
        .then(response => response.json())
        .then(data => {
            document.querySelector('#author').innerHTML = `
                <h2>${data.name}</h2>
                <p>${data.bio}</p>
            `;
        });

    fetch('http://localhost:3000/favorites')
        .then(response => response.json())
        .then(data => {
            const favoritesList = document.querySelector('#favorites');
            data.forEach(favorite => {
                favoritesList.innerHTML += `
                    <div>
                        <h3>${favorite.title}</h3>
                        <p>${favorite.description}</p>
                    </div>
                `;
            });
        });
});
