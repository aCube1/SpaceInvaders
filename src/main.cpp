#include "core/Engine.hpp"

#include <cstdlib>
#include <iostream>

int main() {
	try {
		auto engine { space::Engine() };

		engine.run();
	} catch (const std::exception& e) {
		std::cout << "ERROR: " << e.what() << std::endl;
	}

	return EXIT_SUCCESS;
}
