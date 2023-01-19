#include "engine.hpp"

#include <cstdlib>

int main() {
	auto engine { game::Engine() };

	while (engine.is_running()) {
		engine.process_events();
		engine.update();
		engine.render();
	}

	return EXIT_SUCCESS;
}
