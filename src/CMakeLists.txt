cmake_minimum_required(VERSION 3.16)

add_library (exodus_lib soldier.cpp)
target_include_directories(exodus_lib PUBLIC ../include)
message("Library created")
