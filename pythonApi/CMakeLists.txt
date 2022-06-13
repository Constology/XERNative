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
        model/UDFTypes.cpp
        model/Wbss.cpp
        model/RCatTypes.cpp
        model/RCatValues.cpp
        model/Roles.cpp
        model/RoleRates.cpp
        model/TaskRsrcs.cpp
        model/Obss.cpp
        model/NonWorks.cpp
        model/Fintmpls.cpp
        model/Pcattypes.cpp
        model/Pcatvals.cpp
        model/Taskpreds.cpp
        model/Projpcats.cpp
        model/Projects.cpp
        model/Rsrcs.cpp
        model/Rsrcrcats.cpp
        model/Rsrccurvdatas.cpp
        model/Rsrcrates.cpp
        model/Schedoptions.cpp
        model/Taskactvs.cpp model/Taskprocs.cpp model/Taskprocs.h model/Tasks.cpp model/Tasks.h)

add_library(classes
        model/classes/Account.cpp
        model/classes/Actvcode.cpp
        model/classes/Actvtype.cpp
        model/classes/Calendar.cpp
        model/classes/Currtype.cpp
        model/classes/Udf.cpp
        model/classes/UDFType.cpp
        model/classes/Wbs.cpp
        model/classes/RCatType.cpp
        model/classes/RCatValue.cpp
        model/classes/Role.cpp
        model/classes/RoleRate.cpp
        model/classes/TaskRsrc.cpp
        model/classes/Obs.cpp
        model/classes/NonWork.cpp
        model/classes/Fintmpl.cpp
        model/classes/Pcattype.cpp
        model/classes/Pcatval.cpp
        model/classes/Taskpred.cpp
        model/classes/Projpcat.cpp
        model/classes/Project.cpp
        model/classes/Rsrc.cpp
        model/classes/Rsrcrcat.cpp
        model/classes/Rsrccurvdata.cpp
        model/classes/Rsrcrate.cpp
        model/classes/Schedoption.cpp
        model/classes/Taskactv.cpp
        model/classes/Taskproc.cpp model/classes/Task.cpp model/classes/Task.h)

add_library(date Date/Date.cpp)
target_link_libraries(classes  date)

add_library(xerParser Reader.cpp Writer.cpp )
target_link_libraries(xerParser models classes )

add_subdirectory(extern/pybind11)
pybind11_add_module(pythonApi/hassan.cpp xerParser )

