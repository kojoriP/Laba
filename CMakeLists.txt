cmake_minimum_required(VERSION 3.21)

project(Lab)

add_executable(main main.cpp Initializations.cpp)

add_subdirectory(Funcs)
add_subdirectory(MyTest)
add_subdirectory(googletest-main)

target_link_libraries(main Funcs)

#target_include_directories(main PUBLIC "D:/Lab/boost_1_77_0")
#target_link_directories(main PUBLIC "D:/Lab/boost_1_77_0/stage/lib")

