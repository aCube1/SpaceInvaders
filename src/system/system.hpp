#ifndef _SPACE_SYSTEM_HPP_
#define _SPACE_SYSTEM_HPP_

#include <entt/entity/registry.hpp>

namespace space::system {
	void movement(entt::registry& registry, float dt);
	void draw(entt::registry& registry);
} // namespace space::system

#endif /* _SPACE_SYSTEM_DRAW_HPP_ */
