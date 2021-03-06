cmake_minimum_required(VERSION 2.8.9)
project(blur)

cmake_policy(SET CMP0020 OLD)
  
set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5Widgets REQUIRED)
find_package( OpenCV REQUIRED )

include_directories (../../lenna)
  
file( GLOB_RECURSE blur_SOURCE "*.cpp"  "../../lenna/image.cpp")
file( GLOB_RECURSE blur_HEADERS "*.h" )
file( GLOB_RECURSE blur_UI "*.ui" )
file( GLOB_RECURSE blur_QRC "*.qrc" )
QT5_WRAP_UI( blur_UI_WRAPPED ${blur_UI} )
QT5_ADD_RESOURCES( blur_RES ${blur_QRC} )

add_library( blur SHARED
	${blur_SOURCE}
	${blur_HEADERS}
	${blur_UI_WRAPPED}
	${blur_RES}
)

qt5_use_modules(blur Widgets)
target_link_libraries( blur ${OpenCV_LIBS} )
