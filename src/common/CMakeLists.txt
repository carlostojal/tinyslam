
set(COMMON_SOURCES
	Landmark.cpp
	LandmarkManager.cpp
	PointLandmark.cpp
	Measurement.cpp
	State.cpp)

add_library(common STATIC ${COMMON_SOURCES})
target_link_libraries(common geometry)

target_include_directories(common PUBLIC "${CMAKE_SOURCE_DIR}/include")

