#include "core/Engine.hpp"

#include "utils.hpp"

#include <raylib.h>

namespace space {
	Engine::Engine() {
		// Init Window and set flags.
		SetConfigFlags(FLAG_VSYNC_HINT);
		InitWindow(space::WINDOW_WIDTH, space::WINDOW_HEIGHT, space::WINDOW_TITLE);

		// Load screen render texture.
		m_screen = LoadRenderTexture(space::SCREEN_WIDTH, space::SCREEN_HEIGHT);

		// Load default assets.
		m_assets.load();
	}

	Engine::~Engine() {
		m_assets.unload();

		// Deinit raylib.
		UnloadRenderTexture(m_screen);
		CloseWindow();
	}

	void Engine::run() {
		auto is_running { true };

		// clang-format off
		constexpr Rectangle screen_src {
			0.0, 0.0,
			static_cast<float>(SCREEN_WIDTH), static_cast<float>(-SCREEN_HEIGHT)
		};
		constexpr Rectangle screen_dest {
			0.0, 0.0,
			static_cast<float>(WINDOW_WIDTH), static_cast<float>(WINDOW_HEIGHT)
		};
		// clnag-format on

		while (is_running && !WindowShouldClose()) {
			BeginTextureMode(m_screen);
			ClearBackground(BLANK);
			DrawFPS(0, 0);
			m_assets.drawSprite(SpriteRegion::defender, Vector2{20, 20});
			EndTextureMode();

			BeginDrawing();
			ClearBackground(BLACK);
			DrawTexturePro(
				m_screen.texture, screen_src, screen_dest, Vector2 { 0.0, 0.0 }, 0.0,
				WHITE
			);
			EndDrawing();
		}
	}
} // namespace space
