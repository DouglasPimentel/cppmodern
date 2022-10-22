add_executable(cpp_test test.cpp)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

target_link_libraries(cpp_test GTest::gtest_main)
target_link_libraries(cpp_test helloworld)
target_link_libraries(cpp_test fibonacci)

add_test(NAME test_helloworld COMMAND $<TARGET_FILE:cpp_test>)
add_test(NAME test_fibonacci COMMAND $<TARGET_FILE:cpp_test>)  

include(GoogleTest)
gtest_discover_tests(cpp_test)
