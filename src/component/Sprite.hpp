#ifndef _SPACE_COMPONENT_SPRITE_HPP_
#define _SPACE_COMPONENT_SPRITE_HPP_

namespace space::component {
	struct Sprite {
		public:
			Texture2D& texture;
			Rectangle region;
	};
} // namespace space::component

#endif /* _SPACE_COMPONENT_SPRITE_HPP_ */
