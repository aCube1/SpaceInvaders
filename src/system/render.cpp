#include "system/render.hpp"

#include "component/Renderable.hpp"
#include "component/Transform.hpp"

namespace {
	using namespace game::component;
}

namespace game::system {
	void render(entt::registry& registry, sf::RenderWindow& window) {
		const auto view { registry.view<Renderable, Transform>() };

		view.each([&](auto& renderable, const auto& transform) {
			auto& sprite { renderable.sprite };
			sprite.setPosition(transform.position);

			window.draw(sprite);
		});
	}
} // namespace game::system
