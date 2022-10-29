#IMPORT
include(FetchContent)
FetchContent_Declare(
        raylib
        GIT_REPOSITORY https://github.com/raysan5/raylib
        GIT_TAG master
)

FetchContent_MakeAvailable(raylib)


#SOURCE
include_directories(${CMAKE_CURRENT_LIST_DIR}/include)

file(
        GLOB_RECURSE SOURCES LIST_DIRECTORIES true
        ${CMAKE_CURRENT_LIST_DIR}/*.cpp
        ${CMAKE_CURRENT_LIST_DIR}/include/*.h
        ${CMAKE_CURRENT_LIST_DIR}/include/*.hpp
)


#TARGET
add_executable(
        ${CMAKE_PROJECT_NAME}_raylib
        ${SOURCES}
)
target_link_libraries(
        ${CMAKE_PROJECT_NAME}_raylib
        ${CMAKE_PROJECT_NAME}_core
        raylib
)

#ASSET
file(REMOVE_RECURSE ${CMAKE_CURRENT_BINARY_DIR}/asset)
file(COPY ${CMAKE_CURRENT_LIST_DIR}/asset DESTINATION "${CMAKE_CURRENT_BINARY_DIR}")