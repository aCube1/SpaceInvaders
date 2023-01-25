#ifndef _GAME_ENTITY_FACTORY_HPP_
#define _GAME_ENTITY_FACTORY_HPP_

#include "entt/entity/fwd.hpp"

namespace game::entity_factory {
	void create_defender(
		entt::registry& registry, const game::AssetManager& asset_manager
	);
}

#endif /* _GAME_ENTITY_FACTORY_HPP_ */
