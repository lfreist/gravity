add_subdirectory(utils)
add_subdirectory(engine)

add_library(game STATIC game.cpp)
target_include_directories(game PUBLIC $<BUILD_INTERFACE:${GRAVITY_INCLUDE_DIR}> $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)
target_link_libraries(game PRIVATE sfml-graphics sfml-window sfml-system)