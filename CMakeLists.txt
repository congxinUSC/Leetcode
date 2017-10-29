cmake_minimum_required( VERSION 3.8 )
project( Leetcode )
set( CMAKE_CXX_STANDARD 11 )

set( CMAKE_BUILD_TYPE DEBUG )

set( CMAKE_C_FLAGS_DEBUG "-g -Wall")

# Download and unpack googletest at configure time
configure_file(CMakeLists.txt.in googletest-download/CMakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/googletest-download )
if(result)
    message(FATAL_ERROR "CMake step for googletest failed: ${result}")
endif()
execute_process(COMMAND ${CMAKE_COMMAND} --build .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/googletest-download )
if(result)
    message(FATAL_ERROR "Build step for googletest failed: ${result}")
endif()

# Prevent overriding the parent project's compiler/linker
# settings on Windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Add googletest directly to our build. This defines
# the gtest and gtest_main targets.
add_subdirectory(${CMAKE_BINARY_DIR}/googletest-src
        ${CMAKE_BINARY_DIR}/googletest-build
        EXCLUDE_FROM_ALL)

# The gtest/gtest_main targets carry header search path
# dependencies automatically when using CMake 2.8.11 or
# later. Otherwise we have to add them here ourselves.
if (CMAKE_VERSION VERSION_LESS 2.8.11)
    include_directories("${gtest_SOURCE_DIR}/include")
endif()

file( GLOB SOLUTION_SOURCES
        solutions/*.h
        solutions/*.cpp
        )
file( GLOB TEST_SOURCES
        Tests/*.h
        Tests/*.cpp
        )


set( SOURCE_FILES
        main.cpp
        ${SOLUTION_SOURCES}
        ${TEST_SOURCES}
        )

# Now simply link against gtest or gtest_main as needed. Eg
include_directories(cmake-build-debug/googletest-src/googletest/include)
include_directories(cmake-build-debug/googletest-src/googlemock/include)

add_executable( Leetcode.out ${SOURCE_FILES} )
target_link_libraries(Leetcode.out gtest_main)
add_test(NAME example_test COMMAND Leetcode.out)



