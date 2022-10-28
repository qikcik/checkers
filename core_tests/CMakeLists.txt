#IMPORT
include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.12.1
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE) # For Windows: Prevent overriding the parent project's compiler/linker settings
FetchContent_MakeAvailable(googletest)

enable_testing()

#SOURCE
file(
        GLOB_RECURSE SOURCES LIST_DIRECTORIES true
        ${CMAKE_CURRENT_LIST_DIR}/*.cpp
        ${CMAKE_CURRENT_LIST_DIR}/include/*.h
        ${CMAKE_CURRENT_LIST_DIR}/include/*.hpp
)

enable_testing()

#TARGET
add_executable(
        ${CMAKE_PROJECT_NAME}_core_tests
        ${SOURCES}
)
target_link_libraries(
        ${CMAKE_PROJECT_NAME}_core_tests
        ${CMAKE_PROJECT_NAME}_core
        GTest::gtest_main
        GTest::gmock_main
)


#DISCOVER
include(
        GoogleTest
)

gtest_discover_tests(
        ${CMAKE_PROJECT_NAME}_core_tests
)