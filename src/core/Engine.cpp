#include "core/Engine.hpp"

#include "utils.hpp"

#include <raylib.h>

namespace space {
	Engine::Engine() {
		// Init Window and set flags.
		SetConfigFlags(FLAG_VSYNC_HINT);
		InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE);

		// Load screen render texture.
		m_screen = LoadRenderTexture(SCREEN_WIDTH, SCREEN_HEIGHT);

		// Load default assets.
		m_assets = LoadTexture(SPRITE_FILEPATH);
	}

	Engine::~Engine() {
		// Deinit raylib.
		UnloadTexture(m_assets);
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
			EndTextureMode();

			BeginDrawing();
			ClearBackground(BLACK);
			DrawFPS(0, 0);
			DrawTexturePro(
				m_screen.texture, screen_src, screen_dest, Vector2 { 0.0, 0.0 }, 0.0,
				WHITE
			);
			EndDrawing();
		}
	}
} // namespace space
