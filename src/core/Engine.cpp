#include "core/Engine.hpp"

#include "core/EntityFactory.hpp"
#include "system/input.hpp"
#include "system/render.hpp"

#include <stdexcept>

namespace {
	constexpr auto WINDOW_TITLE { "SpaceInvaders" };
	constexpr auto WINDOW_WIDTH { 768 };
	constexpr auto WINDOW_HEIGHT { 672 };

	constexpr auto SCREEN_WIDTH { 256.0 };
	constexpr auto SCREEN_HEIGHT { 224.0 };
} // namespace

namespace game {
	Engine::Engine() {
		// Set default camera.
		m_camera.reset(sf::FloatRect(0.0, 0.0, SCREEN_WIDTH, SCREEN_HEIGHT));

		// Initialize RenderWindow and apply default configuration.
		m_window.create(
			sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE,
			sf::Style::Titlebar | sf::Style::Close
		);
		m_window.setVerticalSyncEnabled(true);
		m_window.setView(m_camera);

		// Create entities.
		entity_factory::create_defender(m_registry, m_asset_manager);
	}

	void Engine::run() {
		auto clock { sf::Clock() };

		while (m_running && m_window.isOpen()) {
			const auto delta_time { clock.restart() };

			process_events();
			update(delta_time);
			render();
		}
	}

	void Engine::process_events() {
		sf::Event event {};

		while (m_window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				m_window.close();
			}
		}
	}

	void Engine::update(const sf::Time& dt) {
		(void)dt;
		system::input(m_registry);
	}

	void Engine::render() {
		m_window.clear();
		system::render(m_registry, m_window);
		m_window.display();
	}
} // namespace game
