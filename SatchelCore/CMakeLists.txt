# CMakeList.txt : SatchelCore CMake project file

add_library(SatchelCore STATIC 	
	"Satchel.cpp"
	"Satchel.h"

)

target_include_directories(SatchelCore PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/..)

target_link_libraries(SatchelCore PUBLIC Qt6::Core)

