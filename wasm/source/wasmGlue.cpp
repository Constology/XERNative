
#include "wasmGlue.h"

#include <glue/class.h>
#include <glue/value.h>
#include <glue/enum.h>
#include <glue/array.h>
#include "XERNative/Reader.h"
#include "XERNative/Writer.h"

#include "XERNative/model/Tasks.h"
#include "XERNative/model/classes/Task.h"

glue::MapValue wasmGlue() {
  using namespace std;

  auto inner = glue::createAnyMap();

  auto lib = glue::createAnyMap();
  lib["Writer"] = glue::createClass<Writer>()
      .addConstructor()
      .addMethod("writeXER", &Writer::writeXER);

  lib["TaskArray"] = glue::createArrayClass<std::vector<Task>>()
      .addConstructor();
  lib["Tasks"] = glue::createClass<Tasks>()
      .addConstructor()
      .addMethod("getAll", &Tasks::getAll)
      .addMethod("get_tsv", &Tasks::get_tsv);


  lib["Reader"] = glue::createClass<Reader>()
    .addConstructor<>()
    .addMethod(glue::keys::operators::tostring,[](const Reader& r) {return "Reader";} )
    .addMethod<>("parse", &Reader::parse)
    .addMethod("checkParse", &Reader::getTaskSize)
    .addMember("wbss", &Reader::wbss)
    .addMember("udfs", &Reader::udfs)
    .addMember("udfypes", &Reader::udftypes)
    .addMember("accounts", &Reader::accounts)
    .addMember("actvcodes", &Reader::actvcodes)
    .addMember("actvtypes", &Reader::actvtypes)
    .addMember("calendars", &Reader::calendars)
    .addMember("roles", &Reader::roles)
    .addMember("currencies", &Reader::currencies)
    .addMember("rCatTypes", &Reader::rCatTypes)
    .addMember("roleRates", &Reader::roleRates)
    .addMember("taskRsrcs", &Reader::taskRsrcs)
    .addMember("obss", &Reader::obss)
    .addMember("nonWorks", &Reader::nonWorks)
    .addMember("fintmpls", &Reader::fintmpls)
    .addMember("pcattypes", &Reader::pcattypes)
    .addMember("pcatvals", &Reader::pcatvals)
    .addMember("taskpreds", &Reader::taskpreds)
    .addMember("projpcats", &Reader::projpcats)
    .addMember("projects", &Reader::projects)
    .addMember("currtypes", &Reader::currtypes)
    .addMember("rsrcs", &Reader::rsrcs)
    .addMember("rsrcrcats", &Reader::rsrcrcats)
    .addMember("rsrccurvdatas", &Reader::rsrccurvdatas)
    .addMember("rsrcrates", &Reader::rsrcrates)
    .addMember("schedoptions", &Reader::schedoptions)
    .addMember("taskactvs", &Reader::taskactvs)
    .addMember("taskprocs", &Reader::taskprocs)
    .addMember("tasks", &Reader::tasks);

  return lib;
}
