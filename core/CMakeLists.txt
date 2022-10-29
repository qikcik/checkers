#SOURCE
include_directories(${CMAKE_CURRENT_LIST_DIR}/include)

file(
        GLOB_RECURSE SOURCES LIST_DIRECTORIES true
        ${CMAKE_CURRENT_LIST_DIR}/*.cpp
        ${CMAKE_CURRENT_LIST_DIR}/*.hpp
)

#TARGETS
add_library(
        ${CMAKE_PROJECT_NAME}_core
        STATIC
        ${SOURCES}
        source/checker.cpp)
#add_executable(
#        ${CMAKE_PROJECT_NAME}_exec
#        ${SOURCES}
#)