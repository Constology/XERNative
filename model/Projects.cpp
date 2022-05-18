//
// Created by sorat on 12/05/2022.
//

#include "Projects.h"

void Projects::add(Project &project) { projects.emplace_back(project); }

Project Projects::findById(int id)
{
    for (auto &project : projects)
    {
        if (project.getProjId() == id)
        {
            return project;
        }
    }
    printf("Project not found");
    exit(EXIT_FAILURE);
}

std::vector<Project> Projects::getAll() { return projects; }

std::string Projects::get_tsv()
{
    std::string tsv;
    tsv.append("%T\tPROJECT\n");

    tsv.append(
        "%F\tproj_id\tfy_start_month_num\trsrc_self_add_flag\tallow_complete_flag\trsrc_multi_"
        "assign_flag\tcheckout_flag\tproject_flag\tstep_complete_flag\tcost_qty_recalc_"
        "flag\tbatch_sum_flag\tname_sep_char\tdef_complete_pct_type\tproj_short_name\tacct_"
        "id\torig_proj_id\tsource_proj_id\tbase_type_id\tclndr_id\tsum_base_proj_id\ttask_code_"
        "base\ttask_code_step\tpriority_num\twbs_max_sum_level\tstrgy_priority_num\tlast_"
        "checksum\tcritical_drtn_hr_cnt\tdef_cost_per_qty\tlast_recalc_date\tplan_start_"
        "date\tplan_end_date\tscd_end_date\tadd_date\tlast_tasksum_date\tfcst_start_date\tdef_"
        "duration_type\ttask_code_prefix\tguid\tdef_qty_type\tadd_by_name\tweb_local_root_"
        "path\tproj_url\tdef_rate_type\tadd_act_remain_flag\tact_this_per_link_flag\tdef_task_"
        "type\tact_pct_link_flag\tcritical_path_type\ttask_code_prefix_flag\tdef_rollup_dates_"
        "flag\tuse_project_baseline_flag\trem_target_link_flag\treset_planned_flag\tallow_neg_act_"
        "flag\tsum_assign_level\tlast_fin_dates_id\tlast_baseline_update_date\tcr_external_"
        "key\tapply_actuals_date\tfintmpl_id\tlocation_id\tloaded_scope_level\texport_flag\tnew_"
        "fin_dates_id\tbaselines_to_export\tbaseline_names_to_export\tnext_data_date\tclose_"
        "period_flag\tsum_refresh_date\ttrsrcsum_loaded\tsumtask_loaded\n");
    for (auto &project : projects)
    {
        tsv.append(project.get_tsv());
    }
    return tsv;
}
