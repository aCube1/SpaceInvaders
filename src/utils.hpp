#ifndef _UTILS_HPP_
#define _UTILS_HPP_

#include <bitset>
#include <cstdint>

namespace game {
	inline constexpr auto SCREEN_WIDTH { 256 };
	inline constexpr auto SCREEN_HEIGHT { 224 };

	using uint16 = std::uint16_t;
	using uint32 = std::uint32_t;
	using int16 = std::int16_t;
	using int32 = std::int32_t;
} // namespace game

#endif /* _UTILS_HPP_ */
