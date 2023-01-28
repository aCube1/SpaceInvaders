#include "core/Engine.hpp"

#include <cstdlib>
#include <iostream>

int main() {
	try {
		auto engine { space::Engine() };

		engine.run();
	} catch (const std::exception& e) {
		std::cerr << "ERROR: " << e.what() << std::endl;
	}

	return EXIT_SUCCESS;
}
