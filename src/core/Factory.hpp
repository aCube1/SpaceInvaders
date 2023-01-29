#ifndef _SPACE_CORE_FACTORY_HPP_
#define _SPACE_CORE_FACTORY_HPP_

namespace space {
	class Factory {
		public:
			static void createDefender(entt::registry& registry, Texture2D& assets);
	};
} // namespace space

#endif /* _SPACE_CORE_FACTORY_HPP_ */
