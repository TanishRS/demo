const loader = document.getElementById("loader");
const box = document.getElementById("weatherBox");

async function getWeather() {
  loader.style.display = "block";
  box.classList.add("hidden");

  try {
    const res = await fetch(
      "https://api.open-meteo.com/v1/forecast?latitude=19.07&longitude=72.87&current_weather=true"
    );

    const data = await res.json();

    document.getElementById("temp").innerText =
      data.current_weather.temperature + " °C";

    document.getElementById("wind").innerText =
      "Wind: " + data.current_weather.windspeed + " km/h";

  } catch (e) {
    alert("Weather fetch failed");
  }

  loader.style.display = "none";
  box.classList.remove("hidden");
}

getWeather();