#include "system/movement.hpp"

#include "component/Position.hpp"
#include "component/Velocity.hpp"
#include "utils.hpp"

#include <algorithm>

namespace {
	using namespace space::component;

	// Sides limits.
	constexpr auto LEFT_LIMIT { 0.0f };
	constexpr auto RIGHT_LIMIT { static_cast<float>(space::SCREEN_WIDTH - 16) };
} // namespace

namespace space {
	void system::movement(entt::registry& registry, float dt) {
		const auto view { registry.view<Position, Velocity>() };

		for (const auto e : view) {
			auto& velocity { view.get<Velocity>(e) };
			auto& position { view.get<Position>(e) };

			position.x += velocity.speed * dt * velocity.motion;
			velocity.motion = 0;

			position.x = std::clamp(position.x, LEFT_LIMIT, RIGHT_LIMIT);
		}
	}
} // namespace space
