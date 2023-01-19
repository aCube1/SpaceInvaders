include_guard()

set(SFML_VERSION 2.4.1)
set(SFML_COMPONENTS window graphics audio)

function(link_default_libraries target)
	find_package(SFML ${SFML_VERSION} COMPONENTS ${SFML_COMPONENTS} REQUIRED)

	target_link_libraries(${target}
		sfml-window
		sfml-graphics
		sfml-audio
		m
	)
endfunction()
