
set(DSA_SOURCES
	Tree.cpp)

add_library(dsa STATIC ${DSA_SOURCES})
# target_link_libraries(dsa)

target_include_directories(dsa PUBLIC "${CMAKE_SOURCE_DIR}/include")