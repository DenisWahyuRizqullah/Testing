const header = document.querySelector(".header-project");

window.addEventListener("scroll", () => {
    if (window.scrollY > 50) {
        header.classList.add("scrolled");
    } else {
        header.classList.remove("scrolled");
    }
});

function maintainAlert(){
    alert("The project is still under development. Some features may not work as expected. stay tuned for updates! :)");
}