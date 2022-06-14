#include "../Reader.h"
#include "../Writer.h"
#include "../model/Accounts.h"
#include "../model/classes/Project.h"

#include "../extern/pybind11/include/pybind11/pybind11.h"
// to convert C++ STL containers to python list
#include "../extern/pybind11/include/pybind11/stl.h" 

namespace py = pybind11;
using namespace std;
PYBIND11_MODULE(xernative, m)
{

    py::class_<Reader>(m, "Reader")
        .def(py::init<>()) // constructor
        .def("parse", &Reader::parse);
    
    py::class_<Accounts>(m, "Accounts")
        .def(py::init<>())
        .def("add", &Accounts::add)
        .def("findById", &Accounts::findById)
        .def("getAll", &Accounts::getAll)
        .def("get_tsv", &Accounts::get_tsv);

    py::class_<Actvcodes>(m, "Actvcodes")
        .def(py::init<>())
        .def("add", &Actvcodes::add)
        .def("findById", &Actvcodes::findById)
        .def("getAll", &Actvcodes::getAll)
        .def("get_tsv", &Actvcodes::get_tsv);

    py::class_<Actvtypes>(m, "Actvtypes")
    .def(py::init<>())
        .def("add", &Actvtypes::add)
        .def("findById", &Actvtypes::findById)
        .def("getAll", &Actvtypes::getAll)
        .def("get_tsv", &Actvtypes::get_tsv);
    
    py::class_<Calendars>(m, "Calendars")
    .def(py::init<>())
        .def("add", &Calendars::add)
        .def("findById", &Calendars::findById)
        .def("getAll", &Calendars::getAll)
        .def("get_tsv", &Calendars::get_tsv);

    py::class_<Currtypes>(m, "Currtypes")
    .def(py::init<>())
        .def("add", &Currtypes::add)
        .def("findById", &Currtypes::findById)
        .def("getAll", &Currtypes::getAll)
        .def("get_tsv", &Currtypes::get_tsv);

    py::class_<Fintmpls>(m, "Fintmpls")
    .def(py::init<>())
        .def("add", &Fintmpls::add)
        .def("findById", &Fintmpls::findById)
        .def("getAll", &Fintmpls::getAll)
        .def("get_tsv", &Fintmpls::get_tsv);

    py::class_<NonWorks>(m, "Fintmpls")
    .def(py::init<>())
        .def("add", &NonWorks::add)
        .def("findById", &NonWorks::findById)
        .def("getAll", &NonWorks::getAll)
        .def("get_tsv", &NonWorks::get_tsv);

    py::class_<Obss>(m, "Obss")
    .def(py::init<>())
        .def("add", &Obss::add)
        .def("findById", &Obss::findById)
        .def("getAll", &Obss::getAll)
        .def("get_tsv", &Obss::get_tsv);

    py::class_<Fintmpls>(m, "Fintmpls")
    .def(py::init<>())
        .def("add", &Fintmpls::add)
        .def("findById", &Fintmpls::findById)
        .def("getAll", &Fintmpls::getAll)
        .def("get_tsv", &Fintmpls::get_tsv);

    py::class_<Pcattypes>(m, "Pcattypes")
    .def(py::init<>())
        .def("add", &Pcattypes::add)
        .def("findById", &Pcattypes::findById)
        .def("getAll", &Pcattypes::getAll)
        .def("get_tsv", &Pcattypes::get_tsv);

    py::class_<Pcatvals>(m, "Pcatvals")
        .def(py::init<>())
            .def("add", &Pcatvals::add)
            .def("findById", &Pcatvals::findById)
            .def("getAll", &Pcatvals::getAll)
            .def("getByTypeId", &Pcatvals::getByTypeId)
            .def("get_tsv", &Pcatvals::get_tsv);

    py::class_<Projects>(m, "Projects")
        .def(py::init<>())
        .def("add", &Projects::add)
        .def("findById", &Projects::findById)
        .def("getAll", &Projects::getAll)
        .def("get_tsv", &Projects::get_tsv);

    py::class_<Projpcats>(m, "Projpcats")
        .def(py::init<>())
        .def("add", &Projpcats::add)
        .def("findById", &Projpcats::findById)
        .def("getAll", &Projpcats::getAll)
        .def("getByProjectId", &Projpcats::getByProjectId)
        .def("getById", &Projpcats::getById)
        .def("get_tsv", &Projpcats::get_tsv);

    
    py::class_<RCatTypes>(m, "RCatTypes")
        .def(py::init<>())
        .def("add", &RCatTypes::add)
        .def("findById", &RCatTypes::findById)
        .def("getAll", &RCatTypes::getAll)
        .def("get_tsv", &RCatTypes::get_tsv);

    py::class_<RCatValues>(m, "RCatValues")
        .def(py::init<>())
        .def("add", &RCatValues::add)
        .def("findById", &RCatValues::findById)
        .def("getAll", &RCatValues::getAll)
        .def("get_tsv", &RCatValues::get_tsv);
    
    py::class_<RoleRates>(m, "RoleRates")
        .def(py::init<>())
        .def("add", &RoleRates::add)
        .def("findById", &RoleRates::findById)
        .def("findByRole", &RoleRates::findByRole)
        .def("getAll", &RoleRates::getAll)
        .def("get_tsv", &RoleRates::get_tsv);

    py::class_<Roles>(m, "RoleRates")
        .def(py::init<>())
        .def("add", &Roles::add)
        .def("findById", &Roles::findById)
        .def("getParent", static_cast<Role (Roles::*)(int)>(&Roles::getParent), "Get parent role using current role id")
        .def("getParent", static_cast<Role (Roles::*)(Role&)>(&Roles::getParent), "Get parent role using current role id")
        .def("getAll", &Roles::getAll)
        .def("get_tsv", &Roles::get_tsv);

    py::class_<Rsrccurvdatas>(m, "Rsrccurvdatas")
        .def(py::init<>())
        .def("add", &Rsrccurvdatas::add)
        .def("findById", &Rsrccurvdatas::findById)
        .def("getAll", &Rsrccurvdatas::getAll)
        .def("get_tsv", &Rsrccurvdatas::get_tsv);

    py::class_<Rsrcrates>(m, "Rsrcrates")
        .def(py::init<>())
        .def("add", &Rsrcrates::add)
        .def("findById", &Rsrcrates::findById)
        .def("getAll", &Rsrcrates::getAll)
        .def("getByRsrcId", &Rsrcrates::getByRsrcId)
        .def("get_tsv", &Rsrcrates::get_tsv);

    py::class_<Rsrcrcats>(m, "Rsrcrcats")
        .def(py::init<>())
        .def("add", &Rsrcrcats::add)
        .def("findById", &Rsrcrcats::findById)
        .def("getAll", &Rsrcrcats::getAll)
        .def("get_tsv", &Rsrcrcats::get_tsv);
    
    py::class_<Rsrcs>(m, "Rsrcs")
        .def(py::init<>())
        .def("add", &Rsrcs::add)
        .def("findById", &Rsrcs::findById)
        .def("getAll", &Rsrcs::getAll)
        .def("getChildren", &Rsrcs::getChildren)
        .def("get_tsv", &Rsrcs::get_tsv);

    py::class_<Schedoptions>(m, "Schedoptions")
        .def(py::init<>())
        .def("add", &Schedoptions::add)
        .def("findById", &Schedoptions::findById)
        .def("getAll", &Schedoptions::getAll)
        .def("get_tsv", &Schedoptions::get_tsv);

    py::class_<Taskactvs>(m, "Taskactvs")
        .def(py::init<>())
        .def("add", &Taskactvs::add)
        .def("findById", &Taskactvs::findById)
        .def("getAll", &Taskactvs::getAll)
        .def("get_tsv", &Taskactvs::get_tsv);

    py::class_<Taskpreds>(m, "Taskpreds")
        .def(py::init<>())
        .def("add", &Taskpreds::add)
        .def("findById", &Taskpreds::findById)
        .def("getAll", &Taskpreds::getAll)
        .def("get_tsv", &Taskpreds::get_tsv);
    
    py::class_<Taskprocs>(m, "Taskprocs")
        .def(py::init<>())
        .def("add", &Taskprocs::add)
        .def("findById", &Taskprocs::findById)
        .def("getAll", &Taskprocs::getAll)
        .def("get_tsv", &Taskprocs::get_tsv);

    py::class_<TaskRsrcs>(m, "TaskRsrcs")
        .def(py::init<>())
        .def("add", &TaskRsrcs::add)
        .def("findById", &TaskRsrcs::findById)
        .def("getAll", &TaskRsrcs::getAll)
        .def("getByRsrcId", &TaskRsrcs::getByRsrcId)
        .def("getByTaskId", &TaskRsrcs::getByTaskId)
        .def("get_tsv", &TaskRsrcs::get_tsv);

    py::class_<Tasks>(m, "Tasks")
        .def(py::init<>())
        .def("add", &Tasks::add)
        .def("findById", &Tasks::findById)
        .def("getAll", &Tasks::getAll)
        .def("getByWbs", &Tasks::getByWbs)
        .def("getByRsrc", static_cast<std::vector<Task> (Tasks::*)(int)>(&Tasks::getByRsrc),"get by id" )
        .def("getByRsrc", static_cast<std::vector<Task> (Tasks::*)(Rsrc)>(&Tasks::getByRsrc),"get by id" )
        .def("get_tsv", &Tasks::get_tsv);

    py::class_<Udfs>(m, "Udfs")
        .def(py::init<>())
        .def("add", &Udfs::add)
        .def("findById", &Udfs::findById)
        .def("getAll", &Udfs::getAll)
        .def("getByProject", &Udfs::getByProject)
        .def("getByTypeId", &Udfs::getByTypeId)
        .def("getByProjectId", &Udfs::getByProjectId)
        .def("getByTaskId", &Udfs::getByTaskId)
        .def("get_tsv", &Udfs::get_tsv);

    py::class_<UDFTypes>(m, "UDFTypes")
        .def(py::init<>())
        .def("add", &UDFTypes::add)
        .def("findById", &UDFTypes::findById)
        .def("getAll", &UDFTypes::getAll)
        .def("get_tsv", &UDFTypes::get_tsv);

    py::class_<Wbss>(m, "Wbss")
        .def(py::init<>())
        .def("add", &Wbss::add)
        .def("findById", &Wbss::findById)
        .def("getAll", &Wbss::getAll)
        .def("get_tsv", &Wbss::get_tsv);

    // Classes

    py::class_<Account>(m, "Account")
        .def(py::init<std::vector<std::string>, std::vector<std::string>, Reader *>())
        .def_property("acct_id", &Account::getAcctId, &Account::setAcctId)
        .def_property("acct_seq_id", &Account::getAcctSeqNum, &Account::setAcctSeqNum)
        .def_property("parent_acct_id", &Account::getParentAcctId, &Account::setParentAcctId)
        .def_property("acct_name", &Account::getAcctName, &Account::setAcctName)
        .def_property("acct_descr", &Account::getAcctDescr, &Account::setAcctDescr)
        .def_property("acct_short_name", &Account::getAcctShortName, &Account::setAcctShortName)
        .def("get_tsv", &Account::get_tsv);

    py::class_<Actvcode>(m, "Actvcode")
        .def(py::init<std::vector<std::string>, std::vector<std::string>, Reader *>())
        .def_property("actv_code_id", &Actvcode::getActvCodeId, &Actvcode::setActvCodeId)
        .def_property("actv_code_type_id", &Actvcode::getActvCodeTypeId, &Actvcode::setActvCodeTypeId)
        .def_property("parent_actv_code_id", &Actvcode::getParentActvCodeId, &Actvcode::setParentActvCodeId)
        .def_property("seq_num", &Actvcode::getSeqNum, &Actvcode::setSeqNum)
        .def_property("actv_code_name", &Actvcode::getActvCodeName, &Actvcode::setActvCodeName)
        .def_property("short_name", &Actvcode::getShortName, &Actvcode::setShortName)
        .def("get_tsv", &Actvcode::get_tsv)
        ;

    py::class_<Actvtype>(m, "Actvtype")
        .def(py::init<std::vector<std::string>, std::vector<std::string>, Reader *>())
        .def("get_tsv", &Actvtype::get_tsv)
        .def_property("actv_code_type_id", &Actvtype::getActvCodeTypeId, &Actvtype::setActvCodeTypeId)
        .def_property("prj_id", &Actvtype::getProjId, &Actvtype::setProjId)
        .def_property("seq_num", &Actvtype::getSeqNum, &Actvtype::setSeqNum)
        .def_property("short_name", &Actvtype::getActvShortLen, &Actvtype::setActvShortLen)
        .def_property("actv_code_type", &Actvtype::getActvCodeType, &Actvtype::setActvCodeType)
        .def_property("actv_code_type_scope", &Actvtype::getActvCodeTypeScope, &Actvtype::setActvCodeTypeScope)
        .def_property("super_flag", &Actvtype::getSuperFlag, &Actvtype::setSuperFlag);

    py::class_<Calendar>(m, "Calendar")
        .def(py::init<std::vector<std::string>, std::vector<std::string>, Reader *>())
        .def("get_tsv", &Calendar::get_tsv)
        .def_property("clndr_id", &Calendar::getClndrId, &Calendar::setClndrId)
        .def_property("day_hr_cnt", &Calendar::getDayHrCnt, &Calendar::setDayHrCnt)
        .def_property("mnth_hr_cnt", &Calendar::getMonthHrCnt, &Calendar::setMonthHrCnt)
        .def_property("year_hr_cnt", &Calendar::getYearHrCnt, &Calendar::setYearHrCnt)
        .def_property("base_clnr_id", &Calendar::getBaseClndrId, &Calendar::setBaseClndrId)
        .def_property("clndr_data", &Calendar::getClndrData, &Calendar::setClndrData)
        .def_property("name", &Calendar::getClndrName, &Calendar::setClndrName)
        .def_property("type", &Calendar::getClndrType, &Calendar::setClndrType)
        .def_property("default_flag", & Calendar::getDefaultFlag, &Calendar::setDefaultFlag)
        .def_property("last_change_date", &Calendar::getLastChangeDate, &Calendar::setLastChangeDate)
        .def_property("proj_id", &Calendar::getProjId,&Calendar::setProjId);

    py::class_<Currtype>(m, "Currtype")
        .def(py::init<std::vector<std::string>, std::vector<std::string>, Reader *>())
        .def("get_tsv", &Currtype::get_tsv)
        .def_property("curr_id", &Currtype::getCurrId, &Currtype::setCurrId)
        .def_property("decimal_digital_cnt", &Currtype::getDecimalDigitCnt, &Currtype::setDecimalDigitCnt)
        .def_property("base_exchange_rate", &Currtype::getBaseExchRate, &Currtype::setBaseExchRate)
        .def_property("curr_short_name", &Currtype::getCurrShortName, &Currtype::setCurrShortName)
        .def_property("curr_symbol", &Currtype::getCurrSymbol, &Currtype::setCurrSymbol)
        .def_property("curr_type", &Currtype::getCurrType, &Currtype::setCurrType)
        .def_property("decimal_symbol", &Currtype::getDecimalSymbol, &Currtype::setDecimalSymbol)
        .def_property("group_digit_cnt", &Currtype::getGroupDigitCnt, &Currtype::setGroupDigitCnt)
        .def_property("neg_fmt_type", &Currtype::getNegFmtType, &Currtype::setNegFmtType)
        .def_property("pos_curr_fmt_type", &Currtype::getPosCurrFmtType, &Currtype::setPosCurrFmtType);

    py::class_<Fintmpl>(m, "Fintmpl")
        .def(py::init<std::vector<std::string>, std::vector<std::string>, Reader *>())
        .def("get_tsv", &Fintmpl::get_tsv)
        .def_property("fin_tmpl_id", &Fintmpl::getFinTmplId, &Fintmpl::setFinTmplId)
        .def_property("fin_tmpl_name", &Fintmpl::getFintmplName, &Fintmpl::setFintmplName)
        .def_property("default_flag", &Fintmpl::getDefaultFlag, &Fintmpl::setDefaultFlag);

    py::class_<NonWork>(m, "NonWork")
        .def(py::init<std::vector<std::string>, std::vector<std::string>, Reader *>())
        .def("get_tsv", &NonWork::get_tsv)
        .def_property("nonwork_type_id", &NonWork::getNonworkTypeId, &NonWork::setNonworkTypeId)
        .def_property("seq_num", &NonWork::getSeqNum, &NonWork::setSeqNum)
        .def_property("nonwork_code", &NonWork::getNonworkCode, &NonWork::setNonworkCode)
        .def_property("nonwork_type", &NonWork::getNonworkType, &NonWork::setNonworkType);

    py::class_<Obs>(m, "Obs")
        .def(py::init<std::vector<std::string>, std::vector<std::string>, Reader *>())
        .def("get_tsv", &Obs::get_tsv)
        .def_property("obs_id", &Obs::getObsId, &Obs::setObsId)
        .def_property("guid", &Obs::getGuid, &Obs::setGuid)
        .def_property("obs_name", &Obs::getObsName, &Obs::setObsName)
        .def_property("parent_obs_id", &Obs::getParentObsId, &Obs::setParentObsId)
        .def_property("seq_num", &Obs::getSeqNum, &Obs::setSeqNum);

    py::class_<Pcattype>(m, "Pcattype")
        .def(py::init<std::vector<std::string>, std::vector<std::string>, Reader *>())
        .def("get_tsv", &Pcattype::get_tsv)
        .def_property("proj_catg_type_id", &Pcattype::getProjCatgType, &Pcattype::setProjCatgType)
        .def_property("seq_num", &Pcattype::getSeqNum, &Pcattype::setSeqNum)
        .def_property("proj_catg_type", &Pcattype::getProjCatgType, &Pcattype::setProjCatgType)
        .def_property("export_flag", &Pcattype::getExportFlag, &Pcattype::setExportFlag);

    py::class_<Pcatval>(m, "Pcatval")
        .def(py::init<std::vector<std::string>, std::vector<std::string>, Reader *>())
        .def("get_tsv", &Pcatval::get_tsv)
        .def_property("proj_catg_id", &Pcatval::getProjCatgId, &Pcatval::setProjCatgId)
        .def_property("parent_proj_catg_id", &Pcatval::getParentProjCatgId, &Pcatval::setParentProjCatgId)
        .def_property("seq_num", &Pcatval::getSeqNum, &Pcatval::setSeqNum)
        .def_property("proj_catg_short_name", &Pcatval::getProjCatgShortName, &Pcatval::setProjCatgShortName)
        .def_property("proj_catg_name", &Pcatval::getProjCatgName, &Pcatval::setProjCatgName);

    py::class_<Project>(m, "Project")
        .def(py::init<std::vector<std::string>, std::vector<std::string>, Reader *>())
        .def("get_tsv", &Project::get_tsv)
        .def_property("proj_id", &Project::getProjId, &Project::setProjId)
        .def_property("acct_id", &Project::getAcctId, &Project::setAcctId)
        .def_property("orig_proj_id", &Project::getOrigProjId, &Project::setOrigProjId)
        .def_property("source_proj_id", &Project::getSourceProjId, &Project::setSourceProjId)
        .def_property("base_type_id", &Project::getBaseTypeId, &Project::setBaseTypeId)
        .def_property("clndr_id", &Project::getClndrId, &Project::setClndrId)
        .def_property("sum_base_proj_id", &Project::getSumBaseProjId, &Project::setSumBaseProjId)
        .def_property("last_fin_dates_id", &Project::getLastFinDatesId, &Project::setLastFinDatesId)
        .def_property("fintmpl_id", &Project::getFintmplId, &Project::setFintmplId)
        .def_property("location_id", &Project::getLocationId, &Project::setLocationId)
        .def_property("new_fin_dates_id", &Project::getNewFinDatesId, &Project::setNewFinDatesId)
        .def_property("fy_start_month_num", &Project::getFyStartMonthNum, &Project::setFyStartMonthNum)
        .def_property("rsrc_self_add_flaf", &Project::getRsrcSelfAddFlag, &Project::setRsrcSelfAddFlag)
        .def_property("allow_complete_flag", &Project::getAllowCompleteFlag, &Project::setAllowCompleteFlag)
        .def_property("rsrc_multi_assign_flag", &Project::getRsrcMultiAssignFlag, &Project::setRsrcMultiAssignFlag)
        .def_property("checkout_flag", &Project::getCheckoutFlag, &Project::getCheckoutFlag)
        .def_property("project_flag", &Project::getProjectFlag, &Project::setProjectFlag)
        .def("getWbs, &Project::getWbs")
        ;
}
