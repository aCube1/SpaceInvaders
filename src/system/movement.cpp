#include "component/Position.hpp"
#include "component/Velocity.hpp"
#include "system/system.hpp"
#include "utils.hpp"

#include <algorithm>

namespace {
	using namespace space::component;
}

namespace space {
	void system::movement(entt::registry& registry, float dt) {
		const auto view { registry.view<Position, Velocity>() };

		for (const auto e : view) {
			auto& velocity { view.get<Velocity>(e) };
			auto& position { view.get<Position>(e) };

			position.x += velocity.speed * dt * velocity.motion;
			velocity.motion = 0;

			std::clamp<float>(position.x, 0.0, static_cast<float>(SCREEN_WIDTH));
		}
	}
} // namespace space
