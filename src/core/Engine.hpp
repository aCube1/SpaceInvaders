#ifndef _SPACE_CORE_ENGINE_HPP_
#define _SPACE_CORE_ENGINE_HPP_

#include "core/Game.hpp"

#include <entt/entity/registry.hpp>
#include <raylib.h>

namespace space {
	class Engine {
		public:
			Engine();
			~Engine();

			void run();

		private:
			entt::registry m_registry {};
			Texture2D m_assets {};
			RenderTexture2D m_screen {};

			Game m_game { m_registry, m_assets };
	};
} // namespace space

#endif /* _CORE_ENGINE_HPP_ */
