setTimeout(() => {
  // Fade out text
  document.getElementById("introText").style.opacity = "0";
}, 1500);

setTimeout(() => {
  // Slide main page up
  document.getElementById("main").style.top = "0";
}, 2500);

setTimeout(() => {
  // Remove intro screen
  document.getElementById("intro").style.display = "none";
  document.body.style.overflow = "auto";
}, 3700);