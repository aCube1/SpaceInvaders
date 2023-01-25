#include "core/AssetManager.hpp"

#include <SFML/Graphics/Rect.hpp>
#include <SFML/System/Vector2.hpp>
#include <stdexcept>
#include <string_view>

namespace {
	using namespace std::literals;

	const auto DEFAULT_ATLAS_FILEPATH { "assets/space-invaders.png"s };
} // namespace

namespace game {
	AssetManager::AssetManager() {
		if (!m_atlas.loadFromFile(DEFAULT_ATLAS_FILEPATH)) {
			throw std::runtime_error(
				"Unable to load sprite-sheet: " + DEFAULT_ATLAS_FILEPATH
			);
		}

		m_sprites.emplace(
			Sprites::defender, sf::Sprite(m_atlas, sf::IntRect(0, 0, 16, 16))
		);
	}
} // namespace game
