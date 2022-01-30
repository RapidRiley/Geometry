cmake_minimum_required(VERSION 3.19)

project(Geometry)

add_library(Geometry
	${CMAKE_CURRENT_LIST_DIR}/src/point.cpp
	${CMAKE_CURRENT_LIST_DIR}/src/vector.cpp
	${CMAKE_CURRENT_LIST_DIR}/src/Shape/shape.cpp
	${CMAKE_CURRENT_LIST_DIR}/src/Shape/rectangle.cpp
)

target_include_directories(Geometry
PUBLIC
	${CMAKE_CURRENT_LIST_DIR}/include/Geometry/
	${CMAKE_CURRENT_LIST_DIR}/include/Geometry/Shape/
)