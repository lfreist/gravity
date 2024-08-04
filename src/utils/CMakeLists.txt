add_library(utils timer.cpp)
target_include_directories(utils PUBLIC $<BUILD_INTERFACE:${GRAVITY_INCLUDE_DIR}> $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)
set_target_properties(utils PROPERTIES OUTPUT_NAME "gravity_utils")