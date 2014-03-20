project(sqlite-viewer-qt)

cmake_minimum_required(VERSION 2.6)
find_package(Qt4 REQUIRED)

include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(svq_SRCS main.cpp)

qt4_automoc(${svq_SRCS})
add_executable(sqlite-viewer-qt ${svq_SRCS})

target_link_libraries(sqlite-viewer-qt ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY})