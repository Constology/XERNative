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
        model/Wbss.cpp
        model/RCatTypes.cpp
        model/RCatValues.cpp
        model/RoleRates.cpp
        model/TaskRsrcs.cpp
        model/Obss.cpp
        model/NonWorks.cpp
        model/Fintmpls.cpp)

add_library(classes
        model/classes/Account.cpp
        model/classes/Actvcode.cpp
        model/classes/Actvtype.cpp
        model/classes/Calendar.cpp
        model/classes/Currtype.cpp
        model/classes/Udf.cpp
        model/classes/Wbs.cpp
        model/classes/RCatType.cpp
        model/classes/RCatValue.cpp
        model/classes/RoleRate.cpp
        model/classes/TaskRsrc.cpp
        model/classes/Obs.cpp
        model/classes/NonWork.cpp
        model/classes/Fintmpl.cpp)

add_library(xerParser Reader.cpp Writer.cpp Date/Date.cpp)

add_executable(main main.cpp)
target_link_libraries(main xerParser models classes)
