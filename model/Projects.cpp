//
// Created by sorat on 12/05/2022.
//

#include "Projects.h"

void Projects::add(const Project& project){ projects.emplace_back(project); }

Project Projects::findById(int id){
	for(auto & project : projects){
		if(project.proj_id == id){
			return project;
		}
	}
	printf("Project not found");
	exit(EXIT_FAILURE);
}

std::vector<Project> Projects::getAll(){
	return projects;
}

std::string Projects::get_tsv() const{
	std::string tsv;
	tsv.append("%T\tPROJECT\n");
	tsv.append("%F\tproj_id\tacct_id\torig_proj_id\tsource_proj_id\tbase_type_id\tclndr_id\t"
						 "sum_base_proj_id\tlast_fin_dates_id\tfintmpl_id\tlocation_id\tnew_fin_dates_id\t"
						 "fy_start_month_num\trsrc_self_add_flag\tallow_complete_flag\trsrc_multi_assign_flag\t"
						 "checkout_flag\tproject_flag\tstep_complete_flag\tcost_qty_recalc_flag\t"
						 "batch_sum_flag\tname_sep_char\tdef_complete_pct_type\tproj_short_name\t"
						 "task_code_base\ttask_code_step\tpriority_num\twbs_max_sum_level\t"
						 "strgy_priority_num\tlast_checksum\tcritical_drtn_hr_cnt\tdef_cost_per_qty\t"
						 "last_recalc_date\tplan_start_date\tplan_end_date\tscd_end_date\tadd_date\t"
						 "last_tasksum_date\tfcst_start_date\tdef_duration_type\ttask_code_prefix\tguid\t"
						 "def_qty_type\tadd_by_name\tweb_local_root_path\tproj_url\tdef_rate_type\t"
						 "add_act_remain_flag\tact_this_per_link_flag\tdef_task_type\tact_pct_link_flag\t"
						 "critical_path_type\ttask_code_prefix_flag\tdef_rollup_dates_flag\tuse_project_baseline_flag\t"
						 "rem_target_link_flag\treset_planned_flag\tallow_neg_act_flag\tsum_assign_level\t"
						 "last_baseline_update_date\tcr_external_key\tapply_actuals_date\tloaded_scope_level\t"
						 "export_flag\tbaselines_to_export\tbaseline_names_to_export\tnext_data_date\t"
						 "close_period_flag\tsum_refresh_date\ttrsrcsum_loaded\tsumtask_loaded\n"
						 );
	for(auto & project : projects){
		tsv.append(project.tsv);
	}
	return tsv;
}
