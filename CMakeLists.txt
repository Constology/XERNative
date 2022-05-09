cmake_minimum_required(VERSION 3.16)
project(xerParser)

set(CMAKE_CXX_STANDARD 14)

add_library(models
        model/Accounts.cpp
        model/Actvcodes.cpp
        model/Actvtypes.cpp
        model/Calendars.cpp
        model/Currtypes.cpp
        model/Udfs.cpp
<<<<<<< HEAD
        model/Wbss.cpp
        model/RCatTypes.cpp)
=======
        model/Wbss.cpp)
>>>>>>> d48cf2950c3d5b9690fc797981306ee062674295

add_library(classes
        model/classes/Account.cpp
        model/classes/Actvcode.cpp
        model/classes/Actvtype.cpp
        model/classes/Calendar.cpp
        model/classes/Currtype.cpp
        model/classes/Udf.cpp
<<<<<<< HEAD
        model/classes/Wbs.cpp
        model/classes/RCatType.cpp
        Date/Date.cpp)

add_library(xerParser Reader.cpp )
=======
        model/classes/Wbs.cpp)

add_library(xerParser Reader.cpp Date/Date.cpp)
>>>>>>> d48cf2950c3d5b9690fc797981306ee062674295

add_executable(main main.cpp)
target_link_libraries(main xerParser models classes)
