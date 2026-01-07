cmake_minimum_required(VERSION 3.22.1)
project(Cmake VERSION 1.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# --- GoogleTest via system packages ---
find_package(GTest REQUIRED)  # <-- discovers GTest::gtest and GTest::gtest_main


add_executable(${PROJECT_NAME} src/main.cpp src/Student.cpp)

target_include_directories(Cmake PRIVATE ${CMAKE_SOURCE_DIR}/include)

# add_library(cmakelib cmakelib.cpp)

# target_link_libraries(Cmake public cmakelib)

enable_testing()

add_executable(student_test
    ${CMAKE_SOURCE_DIR}/src/Student.cpp
    ${CMAKE_SOURCE_DIR}/tests/student_test.cpp
)


target_include_directories(student_test
    PRIVATE
        ${CMAKE_SOURCE_DIR}/include
)

target_link_libraries(student_test
    PRIVATE
        # cmakelib
        GTest::gtest
        GTest::gtest_main
)
# add_test(NAME student_test COMMAND $<TARGET_FILE:student_test>)

