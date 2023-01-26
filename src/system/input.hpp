#ifndef _COMPONENT_INPUT_HPP_
#define _COMPONENT_INPUT_HPP_

#include <SFML/Window/Event.hpp>
#include <entt/entity/fwd.hpp>

namespace game::system {
	void input(entt::registry& registry);
}

#endif /* _COMPONENT_INPUT_HPP_ */
