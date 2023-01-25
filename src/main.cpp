#include "core/Engine.hpp"

#include <iostream>

auto main() -> int {
	try {
		auto engine { game::Engine() };
		engine.run();
	} catch (std::exception& exception) {
		std::cerr << "An error occurred: " << exception.what() << "\n";
	}

	return EXIT_SUCCESS;
}
