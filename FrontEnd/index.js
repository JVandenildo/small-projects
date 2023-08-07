const button = document.querySelector("#button");
const card = document.querySelector(".card");

button.addEventListener("click", test);

function test() {
	card.innerHTML = `Tested!`;

	return true;
}
