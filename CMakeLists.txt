project(sqlite-viewer-qt)

cmake_minimum_required(VERSION 2.8)
find_package(Qt4 REQUIRED)


find_path(SQLITE3_INCLUDE_DIR sqlite3.h)
find_library(SQLITE3_LIBRARY sqlite3)
if(NOT SQLITE3_INCLUDE_DIR)
  message(SEND_ERROR "Failed to find sqlite3.h")
endif()
if(NOT SQLITE3_LIBRARY)
  message(SEND_ERROR "Failed to find the sqlite3 library")
endif()



include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_AUTOMOC TRUE)

set(svq_SRCS main.cpp dbutils.cpp guishell.cpp widget.cpp tableview.cpp)

# //qt4_automoc(${svq_SRCS})
add_executable(sqlite-viewer-qt ${svq_SRCS})

target_link_libraries(sqlite-viewer-qt ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY} "sqlite3")