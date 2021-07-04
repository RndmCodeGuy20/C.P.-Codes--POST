let currentSlide = 0;

function moveSlide(direction) {
  currentSlide = currentSlide + direction;

  const slides = document.querySelectorAll(".slide");

  slides.forEach((slide) => (slide.style.display = "none"));

  slides[currentSlide].style.display = "flex";
}
