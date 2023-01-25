#ifndef _GAME_ASSETMANAGER_HPP_
#define _GAME_ASSETMANAGER_HPP_

#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <unordered_map>

namespace game {
	enum class Sprites {
		defender,
	};

	class AssetManager {
		public:
			AssetManager();
			~AssetManager() = default;

			const sf::Sprite& get_sprite(Sprites sprite) const {
				return m_sprites.at(sprite);
			}

		private:
			sf::Texture m_atlas {};
			std::unordered_map<Sprites, sf::Sprite> m_sprites {};
	};
} // namespace game

#endif /* _GAME_ASSETMANAGER_HPP_ */