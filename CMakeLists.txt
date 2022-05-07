cmake_minimum_required(VERSION 3.16)
project(exrParser)

set(CMAKE_CXX_STANDARD 14)

add_library(exrParser Reader.cpp model/classes/Account.cpp model/Accounts.cpp model/Accounts.h model/classes/Actvcode.cpp model/classes/Actvcode.h model/Actvcodes.cpp model/Actvcodes.h)

add_executable(main main.cpp)
target_link_libraries(main exrParser)
