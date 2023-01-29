#ifndef _SPACE_COMPONENT_POSITION_HPP_
#define _SPACE_COMPONENT_POSITION_HPP_

namespace space::component {
	struct Position {
		public:
			Position(Vector2 position) : x { position.x }, y { position.y } {};

			Vector2 toVector() const {
				return Vector2 { x, y };
			};

			float x {};
			float y {};
	};
} // namespace space::component

#endif /* _SPACE_COMPONENT_POSITION_HPP_ */
