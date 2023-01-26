#ifndef _COMPONENT_TAG_HPP_
#define _COMPONENT_TAG_HPP_

#include <entt/core/hashed_string.hpp>
#include <entt/core/type_traits.hpp>

namespace game::component {
	namespace {
		using namespace entt::literals;
	}

	using DefenderTag = entt::tag<"defender"_hs>;
} // namespace game::component

#endif /* _COMPONENT_TAG_HPP_ */
