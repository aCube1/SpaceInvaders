#include "system/input.hpp"

#include "component/Direction.hpp"
#include "component/Tag.hpp"

#include <iostream>

namespace {
	using namespace game::component;

	constexpr auto DIRECTION_LEFT { -1 };
	constexpr auto DIRECTION_RIGHT { 1 };
} // namespace

auto is_right_pressed() -> bool {
	return sf::Keyboard::isKeyPressed(sf::Keyboard::D) ||
		   sf::Keyboard::isKeyPressed(sf::Keyboard::Right);
}

auto is_left_pressed() -> bool {
	return sf::Keyboard::isKeyPressed(sf::Keyboard::A) ||
		   sf::Keyboard::isKeyPressed(sf::Keyboard::Left);
}

namespace game::system {
	void input(entt::registry& registry) {
		const auto& view { registry.view<DefenderTag, Direction>() };

		for (const auto entity : view) {
			auto& motion { view.get<Direction>(entity).motion };

			if (is_right_pressed()) {
				motion = DIRECTION_RIGHT;
			} else if (is_left_pressed()) {
				motion = DIRECTION_LEFT;
			} else {
				motion = 0; // No direction.
			}

			std::cout << static_cast<int>(motion) << "\n";
		}
	}
} // namespace game::system
