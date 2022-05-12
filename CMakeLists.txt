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
        model/Fintmpls.cpp
        model/Pcattypes.cpp
        model/Pcatvals.cpp model/Taskpreds.cpp model/Taskpreds.h model/Projpcats.cpp model/Projpcats.h model/Projects.cpp model/Projects.h model/Rsrcs.cpp model/Rsrcs.h model/Rsrcrcats.cpp model/Rsrcrcats.h model/Rsrccurvdatas.cpp model/Rsrccurvdatas.h model/Rsrcrates.cpp model/Rsrcrates.h model/Schedoptions.cpp model/Schedoptions.h model/Taskactvs.cpp model/Taskactvs.h)

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
        model/classes/Fintmpl.cpp
        model/classes/Pcattype.cpp
        model/classes/Pcatval.cpp model/classes/Taskpred.cpp model/classes/Taskpred.h model/classes/Projpcat.cpp model/classes/Projpcat.h model/classes/Project.cpp model/classes/Project.h model/classes/Rsrc.cpp model/classes/Rsrc.h model/classes/Rsrcrcat.cpp model/classes/Rsrcrcat.h model/classes/Rsrccurvdata.cpp model/classes/Rsrccurvdata.h model/classes/Rsrcrate.cpp model/classes/Rsrcrate.h model/classes/Schedoption.cpp model/classes/Schedoption.h model/classes/Taskactv.cpp model/classes/Taskactv.h)

add_library(xerParser Reader.cpp Writer.cpp Date/Date.cpp)

add_executable(main main.cpp)
target_link_libraries(main xerParser models classes)
