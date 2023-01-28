#include "core/Assets.hpp"

#include <iostream>

namespace {
	constexpr auto SPRITE_FILEPATH { "assets/space-invaders.png" };

	constexpr auto SPRITE_WIDTH { 16.0 };
	constexpr auto SPRITE_HEIGHT { 16.0 };
} // namespace

namespace space {
	Assets::Assets() {
		m_regions.emplace(
			SpriteRegion::defender, Rectangle { 0.0, 0.0, SPRITE_WIDTH, SPRITE_HEIGHT }
		);
	}

	void Assets::unload() {
		UnloadTexture(m_texture);
	}

	void Assets::load() {
		m_texture = LoadTexture(SPRITE_FILEPATH);
	}

	void Assets::drawSprite(const SpriteRegion& region, Vector2 position, Color color) {
		const auto& src_rect { m_regions.at(region) };

		DrawTextureRec(m_texture, src_rect, position, color);
	}
} // namespace space
