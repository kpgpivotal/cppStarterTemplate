cmake_minimum_required(VERSION 3.16)

project (Exodus)
add_subdirectory(src)

add_executable(${PROJECT_NAME} Exodus.cpp)

target_link_libraries(${PROJECT_NAME} 
  PRIVATE  exodus_lib)
