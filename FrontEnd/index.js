const button = document.querySelector("#button");
button.addEventListener("click", test);

function test() {
	if (button.innerHTML === "Tested!") {
		button.innerHTML = `Rotate!`;
	} else {
		button.innerHTML = `Tested!`;
	}

	return true;
}
