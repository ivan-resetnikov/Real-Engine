#include "real/engine.hpp"

using namespace engine;



int main () {
	render::Window window(640, 480, "Real Engine window");

	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

	while (window.opened()) {
		window.clear();

		window.update();
	}

	window.terminate();

	return 0;
}