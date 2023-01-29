cmake_minimum_required(VERSION 3.21)
project(SpaceInvaders CXX)

include(cmake/base.cmake)
include(cmake/warnings.cmake)
include(cmake/libraries.cmake)

add_executable(${PROJECT_NAME})

target_compile_features(
	${PROJECT_NAME}
	PUBLIC
		cxx_std_20
		cxx_std_17
)

target_sources(
	${PROJECT_NAME}
	PRIVATE
		src/main.cpp

		src/core/Engine.cpp
		src/core/Factory.cpp
		src/core/Game.cpp

		src/system/draw.cpp
)

target_include_directories(
	${PROJECT_NAME}
	PRIVATE
		${PROJECT_SOURCE_DIR}/src
)

target_precompile_headers(
	${PROJECT_NAME}
	PRIVATE
		src/utils.hpp

		src/core/Engine.hpp
		src/core/Factory.hpp
		src/core/Game.hpp

		src/system/system.hpp

		src/component/Position.hpp
		src/component/Sprite.hpp
		src/component/Tag.hpp
)

set_default_warnings(${PROJECT_NAME})

link_default_libraries(${PROJECT_NAME})
