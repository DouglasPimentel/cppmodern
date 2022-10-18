add_library(helloworld "")

target_sources(helloworld
  PRIVATE
    helloworld.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/helloworld.h
  )

target_include_directories(helloworld
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )