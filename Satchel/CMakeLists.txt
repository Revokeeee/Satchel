# CMakeList.txt : CMake project for Satchel

qt_add_executable (Satchel "main.cpp")

target_link_libraries(Satchel PRIVATE Qt6::Quick)
target_link_libraries(Satchel PRIVATE SatchelCore)
target_link_libraries(Satchel PRIVATE SatchelUI)
target_link_libraries(Satchel PRIVATE SatchelUIplugin)