#include "core/Factory.hpp"

#include "component/Position.hpp"
#include "component/Sprite.hpp"
#include "component/Tag.hpp"
#include "utils.hpp"

namespace {
	using namespace space::component;

	// Player initial position.
	constexpr auto PLAYER_X { (space::SCREEN_WIDTH - 16) / 2 };
	constexpr auto PLAYER_Y { space::SCREEN_HEIGHT - 48 };
} // namespace

namespace space {
	void Factory::createDefender(entt::registry& registry, Texture2D& assets) {
		const auto e { registry.create() };

		// Add components.
		registry.emplace<DefenderTag>(e);
		registry.emplace<Position>(e, Vector2 { PLAYER_X, PLAYER_Y });
		registry.emplace<Sprite>(e, assets, Rectangle { 0.0, 0.0, 16.0, 16.0 });
	}
} // namespace space
