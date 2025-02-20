
set(GEOMETRY_SOURCES
	Point2D.cpp
	Pose2D.cpp)

add_library(geometry STATIC ${GEOMETRY_SOURCES})
target_link_libraries(geometry Eigen3::Eigen)
target_include_directories(geometry PUBLIC "${CMAKE_SOURCE_DIR}/include")

