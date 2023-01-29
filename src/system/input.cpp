#include "system/input.hpp"

#include "component/Tag.hpp"
#include "component/Velocity.hpp"

#include <algorithm>
#include <raylib.h>

namespace {
	using namespace space::component;
}

namespace space {
	void system::input(entt::registry& registry) {
		const auto view { registry.view<DefenderTag, Velocity>() };

		for (const auto e : view) {
			auto& motion { view.get<Velocity>(e).motion };

			if (IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT)) {
				motion -= 1;
			}

			if (IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT)) {
				motion += 1;
			}

			std::clamp(motion, -1, 1);
		}
	}
} // namespace space
