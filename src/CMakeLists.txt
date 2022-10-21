add_executable(main_build main.cpp)

add_subdirectory(helloworld)
add_subdirectory(fibonacci)

target_link_libraries(main_build
  PRIVATE
    helloworld
    fibonacci
  )