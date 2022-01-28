cmake_minimum_required(VERSION 3.19)

project(Geometry)

add_library(Geometry
	${CMAKE_CURRENT_LIST_DIR}/src/point.cpp
	${CMAKE_CURRENT_LIST_DIR}/src/vector.cpp
)

target_include_directories(Geometry
PUBLIC
	${CMAKE_CURRENT_LIST_DIR}/include/Geometry/
)