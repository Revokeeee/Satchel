# CMakeList.txt : SatchelBase CMake project file

add_library(SatchelBase STATIC 	
	"Log.h"
	"LogEngine.h"
	"LogEngine.cpp"

)

target_include_directories(SatchelBase PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/..)

target_link_libraries(SatchelBase PUBLIC Qt6::Core)

