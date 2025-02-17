
set(DATA_ASSOC_SOURCES
	DataAssociation.cpp)

add_library(data_assoc STATIC ${DATA_ASSOC_SOURCES})
target_link_libraries(common)

target_include_directories(data_assoc PUBLIC "${CMAKE_SOURCE_DIR}/include")

