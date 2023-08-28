const playButton = document.querySelector("#play");
playButton.addEventListener("click", playMedia);

function playMedia() {
	switch (playButton.innerHTML) {
		case "Play":
			playButton.innerHTML = "Pause";

			break;

		case "Pause":
			playButton.innerHTML = "Play";

			break;
	}

	return true;
}
