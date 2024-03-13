 

const contact = document.getElementById('contact-form');
    contact.addEventListener('submit', () => {
        alert('Form submitted! This is just a template; the data is not actually sent.');
        // You can add AJAX code to handle form submission on the server.
    });
    let section = document.querySelector("section"),
icons = document.querySelector(".icons");

icons.onclick = ()=>{
section.classList.toggle("home");
}