const button = document.querySelector("#button");
const disc = document.querySelector("#disc");
button.addEventListener("click", test);

function test() {
	if (button.innerHTML === "Rotate") {
		button.innerHTML = `Pause`;
		disc.style.cssText = "transform: rotate(180deg)";

		return true;
	} else {
		button.innerHTML = `Rotate`;

		return false;
	}
}
