# CMakeList.txt : SatchelUI CMake project file

qt_add_qml_module(SatchelUI 
	STATIC
	URI Satchel.UI
	VERSION 1.0
	QML_FILES
	"Main.qml"
)

target_include_directories(SatchelUI PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/..)

target_link_libraries(SatchelUI PUBLIC Qt6::Quick)
target_link_libraries(SatchelUI PUBLIC SatchelCore)
