
set(PIPELINE_SOURCES
	PipelineStage.cpp
	Pipeline.cpp)

add_library(pipeline STATIC ${PIPELINE_SOURCES})
target_link_libraries(common)

target_include_directories(pipeline PUBLIC "${CMAKE_SOURCE_DIR}/include")

