const btn = document.getElementById("themeBtn");
const body = document.body;

body.classList.add("Light");

btn.addEventListener("click",() => {
    body.classList.toggle("dark");
    body.classList.toggle("Light");
    if (body.classList.contains("dark")){
        btn.innerText = "😂 Light Mode";
    }else{
        btn.innerText = "🥶 Dark Mode"
    }
})