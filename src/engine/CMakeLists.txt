add_library(engine component.cpp engine.cpp entity.cpp input_manager.cpp renderer.cpp scene.cpp)
target_include_directories(engine PUBLIC $<BUILD_INTERFACE:${GRAVITY_INCLUDE_DIR}> $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)
target_link_libraries(engine PRIVATE sfml-graphics sfml-window sfml-system)
set_target_properties(engine PROPERTIES OUTPUT_NAME "gravity_engine")