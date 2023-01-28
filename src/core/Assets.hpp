#ifndef _SPACE_ASSETS_HPP_
#define _SPACE_ASSETS_HPP_

#include "component/Sprite.hpp"

#include <raylib.h>
#include <unordered_map>

namespace space {
	class Assets {
		public:
			Assets();
			~Assets() = default;

			// Load texture from default filepath.
			void load();
			// Unload and destroy texture.
			void unload();

			void drawSprite(
				const SpriteRegion& region, Vector2 position, Color color = WHITE
			);

		private:
			Texture2D m_texture;

			std::unordered_map<SpriteRegion, Rectangle> m_regions;
	};
} // namespace space

#endif /* _SPACE_ASSETS_HPP_ */
