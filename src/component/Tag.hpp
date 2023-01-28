#ifndef _SPACE_COMPONENT_TAG_HPP_
#define _SPACE_COMPONENT_TAG_HPP_

#include <entt/core/hashed_string.hpp>
#include <entt/core/type_traits.hpp>

namespace space::component {
	namespace {
		using namespace entt::literals;
	}

	using DefenderTag = entt::tag<"defender"_hs>;
} // namespace space::component

#endif /* _SPACE_COMPONENT_TAG_HPP_ */
