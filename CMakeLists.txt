cmake_minimum_required(VERSION 3.21)
project(SpaceInvaders CXX)

include(cmake/base.cmake)
include(cmake/warnings.cmake)
include(cmake/libraries.cmake)

add_executable(${PROJECT_NAME})

target_sources(
	${PROJECT_NAME}
	PRIVATE
		src/main.cpp
		include/constants.hpp

		src/engine.cpp
		include/engine.hpp
)

target_compile_features(
	${PROJECT_NAME}
	PUBLIC
		cxx_std_20
)

set_default_warnings(${PROJECT_NAME})

target_include_directories(
	${PROJECT_NAME}
	PRIVATE
		${PROJECT_SOURCE_DIR}/include
)

link_default_libraries(${PROJECT_NAME})
