#ifndef _SYSTEM_RENDER_HPP_
#define _SYSTEM_RENDER_HPP_

#include <SFML/Graphics/RenderWindow.hpp>
#include <entt/entity/fwd.hpp>

namespace game::system {
	void render(entt::registry& registry, sf::RenderWindow& window);
}

#endif /* _SYSTEM_RENDER_HPP_ */
