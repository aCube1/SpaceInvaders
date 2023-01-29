#ifndef _SPACE_COMPONENT_VELOCITY_HPP_
#define _SPACE_COMPONENT_VELOCITY_HPP_

namespace space::component {
	struct Velocity {
		public:
			Velocity(float speed_) : speed { speed_ } {};

			// All entities only move horizontally
			int motion {};
			float speed {};
	};
} // namespace space::component

#endif /* _SPACE_COMPONENT_VELOCITY_HPP_ */
