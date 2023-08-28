const playButton = document.querySelector("#playButton");
playButton.addEventListener("click", playMedia);
const modeChecker = document.querySelector("#modeChecker");
const playIcon = document.querySelectorAll(".playIcon");
modeChecker.addEventListener("change", () => {
	document.body.classList.toggle("dark");
});

function playMedia() {
	switch (playButton.innerHTML) {
		case "Play":
			playButton.innerHTML = "Pause";
			for (let i in playIcon) {
				playIcon[i].style = `transform: rotate(180deg)`;
			}

			break;

		case "Pause":
			playButton.innerHTML = "Play";
			for (let i in playIcon) {
				playIcon[i].style = `transform: rotate(0deg)`;
			}

			break;

		default:
			alert("Error");
	}

	return true;
}
