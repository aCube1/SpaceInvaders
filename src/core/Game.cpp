#include "core/Game.hpp"

#include "core/Factory.hpp"
#include "system/system.hpp"

namespace space {
	void Game::init() {
		Factory::createDefender(m_registry, m_assets);
	}

	void Game::update() {}

	void Game::render() {
		system::draw(m_registry);
	}
} // namespace space
