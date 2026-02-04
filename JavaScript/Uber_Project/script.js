document.getElementById("year").textContent = new Date().getFullYear();

const aboutBtn = document.getElementById("aboutBtn");
const aboutOptions = document.getElementById("aboutOptions");

aboutBtn.addEventListener("click", () => {
  aboutOptions.style.display =
    aboutOptions.style.display === "block" ? "none" : "block";
});

const city = document.getElementById("city");
const changeCity = document.getElementById("changeCity");

localStorage.getItem("userCity") && (city.textContent = localStorage.getItem("userCity"));

changeCity.addEventListener("click", () => {
  const newCity = prompt("Enter your city:");
  if (newCity) {
    city.textContent = newCity;
    localStorage.setItem("userCity", newCity);
  }
});

// Handle ride form submission
const rideForm = document.getElementById("rideForm");
const successMessage = document.getElementById("successMessage");

rideForm.addEventListener("submit", async (e) => {
  e.preventDefault();

  const userData = {
    name: document.getElementById("name").value,
    age: parseInt(document.getElementById("age").value),
    city: city.textContent,
    pickup: document.getElementById("pickup").value,
    destination: document.getElementById("destination").value,
    email: document.getElementById("email").value,
    phone: document.getElementById("phone").value,
    timestamp: new Date().toISOString(),
  };

  // Save to localStorage for immediate access
  localStorage.setItem("lastRideRequest", JSON.stringify(userData));

  // Try to save to data.json (Node.js backend required)
  try {
    const response = await fetch("data.json", {
      method: "POST",
      headers: {
        "Content-Type": "application/json",
      },
      body: JSON.stringify(userData),
    });

    if (response.ok) {
      console.log("Data saved to data.json");
    }
  } catch (error) {
    console.log("Saving to localStorage only (server not available)");
  }

  // Show success message
  successMessage.style.display = "block";
  setTimeout(() => {
    successMessage.style.display = "none";
  }, 3000);

  // Reset form
  rideForm.reset();

  // Log the data
  console.log("User data saved:", userData);
});
