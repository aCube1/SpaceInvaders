#ifndef _COMPONENT_DIRECTION_HPP_
#define _COMPONENT_DIRECTION_HPP_

namespace game::component {
	// NOTE: All entities only move horizontally.
	struct Direction {
		public:
			int motion {};
	};
} // namespace game::component

#endif /* _COMPONENT_DIRECTION_HPP_ */
