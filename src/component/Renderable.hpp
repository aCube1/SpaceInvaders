#ifndef _COMPONENT_RENDERABLE_HPP_
#define _COMPONENT_RENDERABLE_HPP_

#include <SFML/Graphics/Sprite.hpp>

namespace game::component {
	struct Renderable {
		public:
			sf::Sprite sprite;
	};
} // namespace game::component

#endif /* _COMPONENT_RENDERABLE_HPP_ */
