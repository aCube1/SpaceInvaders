#ifndef _SPACE_CORE_GAME_HPP_
#define _SPACE_CORE_GAME_HPP_

#include <entt/entity/registry.hpp>
#include <raylib.h>

namespace space {
	class Game {
		public:
			Game(entt::registry& registry, Texture2D& assets)
				: m_registry { registry }, m_assets { assets } {};

			~Game() = default;

			void init();
			void update();
			void render();

		private:
			entt::registry& m_registry;
			Texture2D& m_assets;
	};
} // namespace space

#endif /* _SPACE_CORE_GAME_HPP_ */
