#include "component/Position.hpp"
#include "component/Sprite.hpp"
#include "system/system.hpp"

namespace {
	using namespace space::component;
}

namespace space {
	void system::draw(entt::registry& registry) {
		const auto view { registry.view<Sprite, Position>() };

		for (const auto e : view) {
			const auto& sprite { view.get<Sprite>(e) };
			const auto& position { view.get<Position>(e) };

			DrawTextureRec(
				sprite.texture, sprite.region, position.toVector(), sprite.color
			);
		}
	}
} // namespace space
