#ifndef _GAME_ENGINE_HPP_
#define _GAME_ENGINE_HPP_

#include "core/AssetManager.hpp"

#include <SFML/Graphics.hpp>
#include <entt/entity/registry.hpp>

namespace game {
	class Engine {
		public:
			Engine();
			~Engine() = default;

			void run();

		private:
			void process_events();
			void update(const sf::Time& time);
			void render();

			sf::RenderWindow m_window {};
			sf::View m_camera {};
			entt::registry m_registry {};

			AssetManager m_asset_manager {};

			bool m_running { true };
	};
} // namespace game

#endif /* _GAME_ENGINE_HPP_ */
