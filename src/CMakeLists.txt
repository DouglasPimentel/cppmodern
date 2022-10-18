add_executable(main_build main.cpp)

add_subdirectory(helloworld)

target_link_libraries(main_build
  PRIVATE
    helloworld
  )