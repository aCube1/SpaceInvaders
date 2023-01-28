include_guard()

set(LIBS_DIR ${PROJECT_SOURCE_DIR}/ext)

function(link_default_libraries target)
	# TODO: Option to build local raylib.
	find_package(raylib 4.2 REQUIRED)

	add_subdirectory(${LIBS_DIR}/entt)

	target_link_libraries(${target}
		raylib
		EnTT::EnTT
	)
endfunction()
