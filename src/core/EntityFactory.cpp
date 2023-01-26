#include "core/EntityFactory.hpp"

#include "component/Direction.hpp"
#include "component/Renderable.hpp"
#include "component/Tag.hpp"
#include "component/Transform.hpp"

#include <SFML/System/Vector2.hpp>

namespace {
	using namespace game::component;
} // namespace

namespace game::entity_factory {
	void create_defender(
		entt::registry& registry, const game::AssetManager& asset_manager
	) {
		const auto e { registry.create() };

		const auto position { sf::Vector2f(0.0, 0.0) }; // NOTE: Placeholder position

		// Add components
		registry.emplace<DefenderTag>(e);
		registry.emplace<Transform>(e, position);
		registry.emplace<Direction>(e);
		registry.emplace<Renderable>(
			e, asset_manager.get_sprite(game::Sprites::defender)
		);
	}
} // namespace game::entity_factory
