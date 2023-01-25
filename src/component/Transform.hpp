#ifndef _COMPONENT_TRANSFORM_HPP_
#define _COMPONENT_TRANSFORM_HPP_

#include <SFML/System/Vector2.hpp>

namespace game::component {
	struct Transform {
		public:
			sf::Vector2f position {};
	};
} // namespace game::component

#endif /* _COMPONENT_TARNSFORM_HPP_ */
