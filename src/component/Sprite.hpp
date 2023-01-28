#ifndef _SPACE_COMPONENT_SPRITE_HPP_
#define _SPACE_COMPONENT_SPRITE_HPP_

namespace space {
	enum class SpriteRegion {
		defender,
	};
}

namespace space::component {
	struct Sprite {
		public:
			SpriteRegion defender {};
	};
} // namespace space::component

#endif /* _SPACE_COMPONENT_SPRITE_HPP_ */
