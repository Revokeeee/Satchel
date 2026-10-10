# CMakeList.txt : CMake project for Satchel

qt_add_executable (SatchelApplication
	"main.cpp"
	"IApplication.h"
	"QmlApplication.h"
	"QmlApplication.cpp"

)


target_link_libraries(SatchelApplication PRIVATE SatchelCore)
target_link_libraries(SatchelApplication PRIVATE Qt6::Quick)
target_link_libraries(SatchelApplication PRIVATE SatchelUI)
target_link_libraries(SatchelApplication PRIVATE SatchelUIplugin)
