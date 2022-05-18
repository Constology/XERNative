
#include "Project.h"

#include "../../Reader.h"

Project::Project( std::vector<std::string> header,
                  std::vector<std::string> params,
                 Reader *readerObj)
{
    tsv = "";
    for (int i = 0; i < params.size(); i++)
    {
        if (header.at(i) == "proj_id")
        {
            if (!params.at(i).empty())
            {
                proj_id = stoi(params.at(i));
                proj_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "acct_id")
        {
            if (!params.at(i).empty())
            {
                acct_id = stoi(params.at(i));
                acct_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "orig_proj_id")
        {
            if (!params.at(i).empty())
            {
                orig_proj_id = stoi(params.at(i));
                orig_proj_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "source_proj_id")
        {
            if (!params.at(i).empty())
            {
                source_proj_id = stoi(params.at(i));
                source_proj_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "base_type_id")
        {
            if (!params.at(i).empty())
            {
                base_type_id = stoi(params.at(i));
                base_type_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "clndr_id")
        {
            if (!params.at(i).empty())
            {
                clndr_id = stoi(params.at(i));
                clndr_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "sum_base_proj_id")
        {
            if (!params.at(i).empty())
            {
                sum_base_proj_id = stoi(params.at(i));
                sum_base_proj_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "last_fin_dates_id")
        {
            if (!params.at(i).empty())
            {
                last_fin_dates_id = stoi(params.at(i));
                last_fin_dates_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "fintmpl_id")
        {
            if (!params.at(i).empty())
            {
                fintmpl_id = stoi(params.at(i));
                fintmpl_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "location_id")
        {
            if (!params.at(i).empty())
            {
                location_id = stoi(params.at(i));
                location_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "new_fin_dates_id")
        {
            if (!params.at(i).empty())
            {
                new_fin_dates_id = stoi(params.at(i));
                new_fin_dates_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "fy_start_month_num")
        {
            fy_start_month_num = params.at(i);
        }
        else if (header.at(i) == "rsrc_self_add_flag")
        {
            rsrc_self_add_flag = params.at(i);
        }
        else if (header.at(i) == "allow_complete_flag")
        {
            allow_complete_flag = params.at(i);
        }
        else if (header.at(i) == "rsrc_multi_assign_flag")
        {
            rsrc_multi_assign_flag = params.at(i);
        }
        else if (header.at(i) == "checkout_flag")
        {
            checkout_flag = params.at(i);
        }
        else if (header.at(i) == "project_flag")
        {
            project_flag = params.at(i);
        }
        else if (header.at(i) == "step_complete_flag")
        {
            step_complete_flag = params.at(i);
        }
        else if (header.at(i) == "cost_qty_recalc_flag")
        {
            cost_qty_recalc_flag = params.at(i);
        }
        else if (header.at(i) == "batch_sum_flag")
        {
            batch_sum_flag = params.at(i);
        }
        else if (header.at(i) == "name_sep_char")
        {
            name_sep_char = params.at(i);
        }
        else if (header.at(i) == "def_complete_pct_type")
        {
            def_complete_pct_type = params.at(i);
        }
        else if (header.at(i) == "proj_short_name")
        {
            proj_short_name = params.at(i);
        }
        else if (header.at(i) == "task_code_base")
        {
            task_code_base = params.at(i);
        }
        else if (header.at(i) == "task_code_step")
        {
            task_code_step = params.at(i);
        }
        else if (header.at(i) == "priority_num")
        {
            priority_num = params.at(i);
        }
        else if (header.at(i) == "wbs_max_sum_level")
        {
            wbs_max_sum_level = params.at(i);
        }
        else if (header.at(i) == "strgy_priority_num")
        {
            strgy_priority_num = params.at(i);
        }
        else if (header.at(i) == "last_checksum")
        {
            last_checksum = params.at(i);
        }
        else if (header.at(i) == "critical_drtn_hr_cnt")
        {
            critical_drtn_hr_cnt = params.at(i);
        }
        else if (header.at(i) == "def_cost_per_qty")
        {
            def_cost_per_qty = params.at(i);
        }
        else if (header.at(i) == "last_recalc_date")
        {
            last_recalc_date = params.at(i);
        }
        else if (header.at(i) == "plan_start_date")
        {
            plan_start_date = params.at(i);
        }
        else if (header.at(i) == "plan_end_date")
        {
            plan_end_date = params.at(i);
        }
        else if (header.at(i) == "scd_end_date")
        {
            scd_end_date = params.at(i);
        }
        else if (header.at(i) == "add_date")
        {
            add_date = params.at(i);
        }
        else if (header.at(i) == "last_tasksum_date")
        {
            last_tasksum_date = params.at(i);
        }
        else if (header.at(i) == "fcst_start_date")
        {
            fcst_start_date = params.at(i);
        }
        else if (header.at(i) == "def_duration_type")
        {
            def_duration_type = params.at(i);
        }
        else if (header.at(i) == "task_code_prefix")
        {
            task_code_prefix = params.at(i);
        }
        else if (header.at(i) == "guid")
        {
            guid = params.at(i);
        }
        else if (header.at(i) == "def_qty_type")
        {
            def_qty_type = params.at(i);
        }
        else if (header.at(i) == "add_by_name")
        {
            add_by_name = params.at(i);
        }
        else if (header.at(i) == "web_local_root_path")
        {
            web_local_root_path = params.at(i);
        }
        else if (header.at(i) == "proj_url")
        {
            proj_url = params.at(i);
        }
        else if (header.at(i) == "def_rate_type")
        {
            def_rate_type = params.at(i);
        }
        else if (header.at(i) == "add_act_remain_flag")
        {
            add_act_remain_flag = params.at(i);
        }
        else if (header.at(i) == "act_this_per_link_flag")
        {
            act_this_per_link_flag = params.at(i);
        }
        else if (header.at(i) == "def_task_type")
        {
            def_task_type = params.at(i);
        }
        else if (header.at(i) == "act_pct_link_flag")
        {
            act_pct_link_flag = params.at(i);
        }
        else if (header.at(i) == "critical_path_type")
        {
            critical_path_type = params.at(i);
        }
        else if (header.at(i) == "task_code_prefix_flag")
        {
            task_code_prefix_flag = params.at(i);
        }
        else if (header.at(i) == "def_rollup_dates_flag")
        {
            def_rollup_dates_flag = params.at(i);
        }
        else if (header.at(i) == "use_project_baseline_flag")
        {
            use_project_baseline_flag = params.at(i);
        }
        else if (header.at(i) == "rem_target_link_flag")
        {
            rem_target_link_flag = params.at(i);
        }
        else if (header.at(i) == "reset_planned_flag")
        {
            reset_planned_flag = params.at(i);
        }
        else if (header.at(i) == "allow_neg_act_flag")
        {
            allow_neg_act_flag = params.at(i);
        }
        else if (header.at(i) == "sum_assign_level")
        {
            sum_assign_level = params.at(i);
        }
        else if (header.at(i) == "last_baseline_update_date")
        {
            last_baseline_update_date = params.at(i);
        }
        else if (header.at(i) == "cr_external_key")
        {
            cr_external_key = params.at(i);
        }
        else if (header.at(i) == "apply_actuals_date")
        {
            apply_actuals_date = params.at(i);
        }
        else if (header.at(i) == "loaded_scope_level")
        {
            loaded_scope_level = params.at(i);
        }
        else if (header.at(i) == "export_flag")
        {
            export_flag = params.at(i);
        }
        else if (header.at(i) == "baselines_to_export")
        {
            baselines_to_export = params.at(i);
        }
        else if (header.at(i) == "baseline_names_to_export")
        {
            baseline_names_to_export = params.at(i);
        }
        else if (header.at(i) == "next_data_date")
        {
            next_data_date = params.at(i);
        }
        else if (header.at(i) == "close_period_flag")
        {
            close_period_flag = params.at(i);
        }
        else if (header.at(i) == "sum_refresh_date")
        {
            sum_refresh_date = params.at(i);
        }
        else if (header.at(i) == "trsrcsum_loaded")
        {
            trsrcsum_loaded = params.at(i);
        }
        else if (header.at(i) == "sumtask_loaded")
        {
            sumtask_loaded = params.at(i);
        }
    }
    update_tsv();
    reader = readerObj;
}

void Project::update_tsv()
{
    tsv = "%R\t";
    tsv.append("\t")
        .append(proj_id_str)
        .append("\t")
        .append(fy_start_month_num)
        .append("\t")
        .append(rsrc_self_add_flag)
        .append("\t")
        .append(allow_complete_flag)
        .append("\t")
        .append(rsrc_multi_assign_flag)
        .append("\t")
        .append(checkout_flag)
        .append("\t")
        .append(project_flag)
        .append("\t")
        .append(step_complete_flag)
        .append("\t")
        .append(cost_qty_recalc_flag)
        .append("\t")
        .append(batch_sum_flag)
        .append("\t")
        .append(name_sep_char)
        .append("\t")
        .append(def_complete_pct_type)
        .append("\t")
        .append(proj_short_name)
        .append("\t")
        .append(acct_id_str)
        .append("\t")
        .append(orig_proj_id_str)
        .append("\t")
        .append(source_proj_id_str)
        .append("\t")
        .append(base_type_id_str)
        .append("\t")
        .append(clndr_id_str)
        .append("\t")
        .append(sum_base_proj_id_str)
        .append("\t")
        .append(task_code_base)
        .append("\t")
        .append(task_code_step)
        .append("\t")
        .append(priority_num)
        .append("\t")
        .append(wbs_max_sum_level)
        .append("\t")
        .append(strgy_priority_num)
        .append("\t")
        .append(last_checksum)
        .append("\t")
        .append(critical_drtn_hr_cnt)
        .append("\t")
        .append(def_cost_per_qty)
        .append("\t")
        .append(last_recalc_date)
        .append("\t")
        .append(plan_start_date)
        .append("\t")
        .append(plan_end_date)
        .append("\t")
        .append(scd_end_date)
        .append("\t")
        .append(add_date)
        .append("\t")
        .append(last_tasksum_date)
        .append("\t")
        .append(fcst_start_date)
        .append("\t")
        .append(def_duration_type)
        .append("\t")
        .append(task_code_prefix)
        .append("\t")
        .append(guid)
        .append("\t")
        .append(def_qty_type)
        .append("\t")
        .append(add_by_name)
        .append("\t")
        .append(web_local_root_path)
        .append("\t")
        .append(proj_url)
        .append("\t")
        .append(def_rate_type)
        .append("\t")
        .append(add_act_remain_flag)
        .append("\t")
        .append(act_this_per_link_flag)
        .append("\t")
        .append(def_task_type)
        .append("\t")
        .append(act_pct_link_flag)
        .append("\t")
        .append(critical_path_type)
        .append("\t")
        .append(task_code_prefix_flag)
        .append("\t")
        .append(def_rollup_dates_flag)
        .append("\t")
        .append(use_project_baseline_flag)
        .append("\t")
        .append(rem_target_link_flag)
        .append("\t")
        .append(reset_planned_flag)
        .append("\t")
        .append(allow_neg_act_flag)
        .append("\t")
        .append(sum_assign_level)
        .append("\t")
        .append(last_fin_dates_id_str)
        .append("\t")
        .append(last_baseline_update_date)
        .append("\t")
        .append(cr_external_key)
        .append("\t")
        .append(apply_actuals_date)
        .append("\t")
        .append(fintmpl_id_str)
        .append("\t")
        .append(location_id_str)
        .append("\t")
        .append(loaded_scope_level)
        .append("\t")
        .append(export_flag)
        .append("\t")
        .append(new_fin_dates_id_str)
        .append("\t")
        .append(baselines_to_export)
        .append("\t")
        .append(baseline_names_to_export)
        .append("\t")
        .append(next_data_date)
        .append("\t")
        .append(close_period_flag)
        .append("\t")
        .append(sum_refresh_date)
        .append("\t")
        .append(trsrcsum_loaded)
        .append("\t")
        .append(sumtask_loaded)
        .append("\n");
}

std::vector<Wbs> Project::getWbs() { return reader->wbss.getByProjectId(proj_id); }

std::vector<Projpcat> Project::getProjectCodes()
{
    return reader->projpcats.getByProjectId(proj_id);
}

std::string Project::get_tsv()
{
    update_tsv();
    return tsv;
}

int Project::getProjId() { return proj_id; }
void Project::setProjId(int value)
{
    if (value > 0)
    {
        proj_id = value;
        proj_id_str = std::to_string(value);
    }
}
int Project::getAcctId() { return acct_id; }
void Project::setAcctId(int value)
{
    if (value > 0)
    {
        acct_id = value;
        acct_id_str = std::to_string(value);
    }
}
int Project::getOrigProjId() { return orig_proj_id; }
void Project::setOrigProjId(int value)
{
    if (value > 0)
    {
        orig_proj_id = value;
        orig_proj_id_str = std::to_string(value);
    }
}
int Project::getSourceProjId() { return source_proj_id; }
void Project::setSourceProjId(int value)
{
    if (value > 0)
    {
        source_proj_id = value;
        source_proj_id_str = std::to_string(value);
    }
}
int Project::getBaseTypeId() { return base_type_id; }
void Project::setBaseTypeId(int value)
{
    if (value > 0)
    {
        base_type_id = value;
        base_type_id_str = std::to_string(value);
    }
}
int Project::getClndrId() { return clndr_id; }
void Project::setClndrId(int value)
{
    if (value > 0)
    {
        clndr_id = value;
        clndr_id_str = std::to_string(value);
    }
}
int Project::getSumBaseProjId() { return sum_base_proj_id; }
void Project::setSumBaseProjId(int value)
{
    if (value > 0)
    {
        sum_base_proj_id = value;
        sum_base_proj_id_str = std::to_string(value);
    }
}
int Project::getLastFinDatesId() { return last_fin_dates_id; }
void Project::setLastFinDatesId(int value)
{
    if (value > 0)
    {
        last_fin_dates_id = value;
        last_fin_dates_id_str = std::to_string(value);
    }
}
int Project::getFintmplId() { return fintmpl_id; }
void Project::setFintmplId(int value)
{
    if (value > 0)
    {
        fintmpl_id = value;
        fintmpl_id_str = std::to_string(value);
    }
}
int Project::getLocationId() { return location_id; }
void Project::setLocationId(int value)
{
    if (value > 0)
    {
        location_id = value;
        location_id_str = std::to_string(value);
    }
}
int Project::getNewFinDatesId() { return new_fin_dates_id; }
void Project::setNewFinDatesId(int value)
{
    if (value > 0)
    {
        new_fin_dates_id = value;
        new_fin_dates_id_str = std::to_string(value);
    }
}
std::string Project::getFyStartMonthNum() { return fy_start_month_num; }
void Project::setFyStartMonthNum(std::string value)
{
    if (!value.empty())
    {
        fy_start_month_num = value;
    }
}
std::string Project::getRsrcSelfAddFlag() { return rsrc_self_add_flag; }
void Project::setRsrcSelfAddFlag(std::string value)
{
    if (!value.empty())
    {
        rsrc_self_add_flag = value;
    }
}
std::string Project::getAllowCompleteFlag() { return allow_complete_flag; }
void Project::setAllowCompleteFlag(std::string value)
{
    if (!value.empty())
    {
        allow_complete_flag = value;
    }
}
std::string Project::getRsrcMultiAssignFlag() { return rsrc_multi_assign_flag; }
void Project::setRsrcMultiAssignFlag(std::string value)
{
    if (!value.empty())
    {
        rsrc_multi_assign_flag = value;
    }
}
std::string Project::getCheckoutFlag() { return checkout_flag; }
void Project::setCheckoutFlag(std::string value)
{
    if (!value.empty())
    {
        checkout_flag = value;
    }
}
std::string Project::getProjectFlag() { return project_flag; }
void Project::setProjectFlag(std::string value)
{
    if (!value.empty())
    {
        project_flag = value;
    }
}
std::string Project::getStepCompleteFlag() { return step_complete_flag; }
void Project::setStepCompleteFlag(std::string value)
{
    if (!value.empty())
    {
        step_complete_flag = value;
    }
}
std::string Project::getCostQtyRecalcFlag() { return cost_qty_recalc_flag; }
void Project::setCostQtyRecalcFlag(std::string value)
{
    if (!value.empty())
    {
        cost_qty_recalc_flag = value;
    }
}
std::string Project::getBatchSumFlag() { return batch_sum_flag; }
void Project::setBatchSumFlag(std::string value)
{
    if (!value.empty())
    {
        batch_sum_flag = value;
    }
}
std::string Project::getNameSepChar() { return name_sep_char; }
void Project::setNameSepChar(std::string value)
{
    if (!value.empty())
    {
        name_sep_char = value;
    }
}
std::string Project::getDefCompletePctType() { return def_complete_pct_type; }
void Project::setDefCompletePctType(std::string value)
{
    if (!value.empty())
    {
        def_complete_pct_type = value;
    }
}
std::string Project::getProjShortName() { return proj_short_name; }
void Project::setProjShortName(std::string value)
{
    if (!value.empty())
    {
        proj_short_name = value;
    }
}
std::string Project::getTaskCodeBase() { return task_code_base; }
void Project::setTaskCodeBase(std::string value)
{
    if (!value.empty())
    {
        task_code_base = value;
    }
}
std::string Project::getTaskCodeStep() { return task_code_step; }
void Project::setTaskCodeStep(std::string value)
{
    if (!value.empty())
    {
        task_code_step = value;
    }
}
std::string Project::getPriorityNum() { return priority_num; }
void Project::setPriorityNum(std::string value)
{
    if (!value.empty())
    {
        priority_num = value;
    }
}
std::string Project::getWbsMaxSumLevel() { return wbs_max_sum_level; }
void Project::setWbsMaxSumLevel(std::string value)
{
    if (!value.empty())
    {
        wbs_max_sum_level = value;
    }
}
std::string Project::getStrgyPriorityNum() { return strgy_priority_num; }
void Project::setStrgyPriorityNum(std::string value)
{
    if (!value.empty())
    {
        strgy_priority_num = value;
    }
}
std::string Project::getLastChecksum() { return last_checksum; }
void Project::setLastChecksum(std::string value)
{
    if (!value.empty())
    {
        last_checksum = value;
    }
}
std::string Project::getCriticalDrtnHrCnt() { return critical_drtn_hr_cnt; }
void Project::setCriticalDrtnHrCnt(std::string value)
{
    if (!value.empty())
    {
        critical_drtn_hr_cnt = value;
    }
}
std::string Project::getDefCostPerQty() { return def_cost_per_qty; }
void Project::setDefCostPerQty(std::string value)
{
    if (!value.empty())
    {
        def_cost_per_qty = value;
    }
}
std::string Project::getLastRecalcDate() { return last_recalc_date; }
void Project::setLastRecalcDate(std::string value)
{
    if (!value.empty())
    {
        last_recalc_date = value;
    }
}
std::string Project::getPlanStartDate() { return plan_start_date; }
void Project::setPlanStartDate(std::string value)
{
    if (!value.empty())
    {
        plan_start_date = value;
    }
}
std::string Project::getPlanEndDate() { return plan_end_date; }
void Project::setPlanEndDate(std::string value)
{
    if (!value.empty())
    {
        plan_end_date = value;
    }
}
std::string Project::getScdEndDate() { return scd_end_date; }
void Project::setScdEndDate(std::string value)
{
    if (!value.empty())
    {
        scd_end_date = value;
    }
}
std::string Project::getAddDate() { return add_date; }
void Project::setAddDate(std::string value)
{
    if (!value.empty())
    {
        add_date = value;
    }
}
std::string Project::getLastTasksumDate() { return last_tasksum_date; }
void Project::setLastTasksumDate(std::string value)
{
    if (!value.empty())
    {
        last_tasksum_date = value;
    }
}
std::string Project::getFcstStartDate() { return fcst_start_date; }
void Project::setFcstStartDate(std::string value)
{
    if (!value.empty())
    {
        fcst_start_date = value;
    }
}
std::string Project::getDefDurationType() { return def_duration_type; }
void Project::setDefDurationType(std::string value)
{
    if (!value.empty())
    {
        def_duration_type = value;
    }
}
std::string Project::getTaskCodePrefix() { return task_code_prefix; }
void Project::setTaskCodePrefix(std::string value)
{
    if (!value.empty())
    {
        task_code_prefix = value;
    }
}
std::string Project::getGuid() { return guid; }
void Project::setGuid(std::string value)
{
    if (!value.empty())
    {
        guid = value;
    }
}
std::string Project::getDefQtyType() { return def_qty_type; }
void Project::setDefQtyType(std::string value)
{
    if (!value.empty())
    {
        def_qty_type = value;
    }
}
std::string Project::getAddByName() { return add_by_name; }
void Project::setAddByName(std::string value)
{
    if (!value.empty())
    {
        add_by_name = value;
    }
}
std::string Project::getWebLocalRootPath() { return web_local_root_path; }
void Project::setWebLocalRootPath(std::string value)
{
    if (!value.empty())
    {
        web_local_root_path = value;
    }
}
std::string Project::getProjUrl() { return proj_url; }
void Project::setProjUrl(std::string value)
{
    if (!value.empty())
    {
        proj_url = value;
    }
}
std::string Project::getDefRateType() { return def_rate_type; }
void Project::setDefRateType(std::string value)
{
    if (!value.empty())
    {
        def_rate_type = value;
    }
}
std::string Project::getAddActRemainFlag() { return add_act_remain_flag; }
void Project::setAddActRemainFlag(std::string value)
{
    if (!value.empty())
    {
        add_act_remain_flag = value;
    }
}
std::string Project::getActThisPerLinkFlag() { return act_this_per_link_flag; }
void Project::setActThisPerLinkFlag(std::string value)
{
    if (!value.empty())
    {
        act_this_per_link_flag = value;
    }
}
std::string Project::getDefTaskType() { return def_task_type; }
void Project::setDefTaskType(std::string value)
{
    if (!value.empty())
    {
        def_task_type = value;
    }
}
std::string Project::getActPctLinkFlag() { return act_pct_link_flag; }
void Project::setActPctLinkFlag(std::string value)
{
    if (!value.empty())
    {
        act_pct_link_flag = value;
    }
}
std::string Project::getCriticalPathType() { return critical_path_type; }
void Project::setCriticalPathType(std::string value)
{
    if (!value.empty())
    {
        critical_path_type = value;
    }
}
std::string Project::getTaskCodePrefixFlag() { return task_code_prefix_flag; }
void Project::setTaskCodePrefixFlag(std::string value)
{
    if (!value.empty())
    {
        task_code_prefix_flag = value;
    }
}
std::string Project::getDefRollupDatesFlag() { return def_rollup_dates_flag; }
void Project::setDefRollupDatesFlag(std::string value)
{
    if (!value.empty())
    {
        def_rollup_dates_flag = value;
    }
}
std::string Project::getUseProjectBaselineFlag() { return use_project_baseline_flag; }
void Project::setUseProjectBaselineFlag(std::string value)
{
    if (!value.empty())
    {
        use_project_baseline_flag = value;
    }
}
std::string Project::getRemTargetLinkFlag() { return rem_target_link_flag; }
void Project::setRemTargetLinkFlag(std::string value)
{
    if (!value.empty())
    {
        rem_target_link_flag = value;
    }
}
std::string Project::getResetPlannedFlag() { return reset_planned_flag; }
void Project::setResetPlannedFlag(std::string value)
{
    if (!value.empty())
    {
        reset_planned_flag = value;
    }
}
std::string Project::getAllowNegActFlag() { return allow_neg_act_flag; }
void Project::setAllowNegActFlag(std::string value)
{
    if (!value.empty())
    {
        allow_neg_act_flag = value;
    }
}
std::string Project::getSumAssignLevel() { return sum_assign_level; }
void Project::setSumAssignLevel(std::string value)
{
    if (!value.empty())
    {
        sum_assign_level = value;
    }
}
std::string Project::getLastBaselineUpdateDate() { return last_baseline_update_date; }
void Project::setLastBaselineUpdateDate(std::string value)
{
    if (!value.empty())
    {
        last_baseline_update_date = value;
    }
}
std::string Project::getCrExternalKey() { return cr_external_key; }
void Project::setCrExternalKey(std::string value)
{
    if (!value.empty())
    {
        cr_external_key = value;
    }
}
std::string Project::getApplyActualsDate() { return apply_actuals_date; }
void Project::setApplyActualsDate(std::string value)
{
    if (!value.empty())
    {
        apply_actuals_date = value;
    }
}
std::string Project::getLoadedScopeLevel() { return loaded_scope_level; }
void Project::setLoadedScopeLevel(std::string value)
{
    if (!value.empty())
    {
        loaded_scope_level = value;
    }
}
std::string Project::getExportFlag() { return export_flag; }
void Project::setExportFlag(std::string value)
{
    if (!value.empty())
    {
        export_flag = value;
    }
}
std::string Project::getBaselinesToExport() { return baselines_to_export; }
void Project::setBaselinesToExport(std::string value)
{
    if (!value.empty())
    {
        baselines_to_export = value;
    }
}
std::string Project::getBaselineNamesToExport() { return baseline_names_to_export; }
void Project::setBaselineNamesToExport(std::string value)
{
    if (!value.empty())
    {
        baseline_names_to_export = value;
    }
}
std::string Project::getNextDataDate() { return next_data_date; }
void Project::setNextDataDate(std::string value)
{
    if (!value.empty())
    {
        next_data_date = value;
    }
}
std::string Project::getClosePeriodFlag() { return close_period_flag; }
void Project::setClosePeriodFlag(std::string value)
{
    if (!value.empty())
    {
        close_period_flag = value;
    }
}
std::string Project::getSumRefreshDate() { return sum_refresh_date; }
void Project::setSumRefreshDate(std::string value)
{
    if (!value.empty())
    {
        sum_refresh_date = value;
    }
}
std::string Project::getTrsrcsumLoaded() { return trsrcsum_loaded; }
void Project::setTrsrcsumLoaded(std::string value)
{
    if (!value.empty())
    {
        trsrcsum_loaded = value;
    }
}
std::string Project::getSumtaskLoaded() { return sumtask_loaded; }
void Project::setSumtaskLoaded(std::string value)
{
    if (!value.empty())
    {
        sumtask_loaded = value;
    }
}