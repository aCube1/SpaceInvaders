#include "core/EntityFactory.hpp"

#include "component/Renderable.hpp"
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

		// NOTE: Placeholder position
		const auto position { sf::Vector2f(0.0, 0.0) };

		// Add components
		registry.emplace<Transform>(e, position);
		registry.emplace<Renderable>(
			e, asset_manager.get_sprite(game::Sprites::defender)
		);
	}
} // namespace game::entity_factory
