cmake_minimum_required(VERSION 3.16)
project(xerParser)

set(CMAKE_CXX_STANDARD 14)

add_library(models model/Accounts.cpp model/Actvcodes.cpp model/Actvtypes.cpp model/Calendars.cpp model/WBSs.cpp model/UDFs.cpp)
add_library(classes model/classes/Account.cpp model/classes/Actvcode.cpp model/classes/Actvtype.cpp model/classes/Calendar.cpp model/classes/wbs.cpp model/classes/udf.cpp)
add_library(xerParser Reader.cpp)

add_executable(main main.cpp)
target_link_libraries(main xerParser models classes)
