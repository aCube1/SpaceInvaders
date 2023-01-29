#include "component/Position.hpp"
#include "component/Sprite.hpp"
#include "system/system.hpp"

namespace {
	using namespace space::component;
}

namespace space::system {
	void draw(entt::registry& registry) {
		const auto view { registry.view<Sprite, Position>() };

		for (const auto entity : view) {
			const auto& sprite { view.get<Sprite>(entity) };
			const auto& position { view.get<Position>(entity) };

			DrawTextureRec(
				sprite.texture, sprite.region, position.toVector(), sprite.color
			);
		}
	}
} // namespace space::system
