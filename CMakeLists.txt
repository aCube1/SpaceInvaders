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
)

target_sources(
	${PROJECT_NAME}
	PRIVATE
		src/main.cpp

		src/core/AssetManager.cpp
		src/core/Engine.cpp
		src/core/EntityFactory.cpp

		src/system/render.cpp
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

		src/core/AssetManager.hpp
		src/core/Engine.hpp
		src/core/EntityFactory.hpp

		src/system/render.hpp

		src/component/Renderable.hpp
		src/component/Transform.hpp
)

set_default_warnings(${PROJECT_NAME})

link_default_libraries(${PROJECT_NAME})
