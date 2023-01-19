#ifndef _GAME_ENGINE_HPP_
#define _GAME_ENGINE_HPP_

#include <SFML/Graphics.hpp>

namespace game {
	class Engine {
		public:
			Engine();
			~Engine();

			void process_events();
			void update();
			void render();

			inline bool is_running(void) {
				return this->running;
			}

		private:
			sf::RenderWindow window;

			bool running { true };
	};
}  // namespace game

#endif	// _GAME_ENGINE_HPP_
