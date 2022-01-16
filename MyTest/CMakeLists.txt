add_executable(testing pch.cpp myTest.cpp)

enable_testing()
target_link_libraries(testing Funcs gtest_main)


#target_include_directories(testing PUBLIC "D:/lab/googletest-main/googletest/include")

#target_link_directories(testing PUBLIC "D:/lab/googletest-main/build/lib/Debug")
