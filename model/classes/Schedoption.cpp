//
// Created by sorat on 12/05/2022.
//

#include "Schedoption.h"

Schedoption::Schedoption(const std::string *header, const std::string *params){
	tsv = "";
	for(int i = 0; i < params->length(); i++){
		if(header[i] == "schedoptions_id"){ schedoptions_id = stoi(params[i]); }
		else if(header[i] == "proj_id"){ proj_id = stoi(params[i]); }
		else if(header[i] == "sched_outer_depend_type"){ sched_outer_depend_type = stoi(params[i]); }
		else if(header[i] == "sched_open_critical_flag"){ sched_open_critical_flag = stoi(params[i]); }
		else if(header[i] == "sched_lag_early_start_flag"){ sched_lag_early_start_flag = stoi(params[i]); }
		else if(header[i] == "sched_retained_logic"){ sched_retained_logic = stoi(params[i]); }
		else if(header[i] == "sched_setplantoforecast"){ sched_setplantoforecast = stoi(params[i]); }
		else if(header[i] == "sched_float_type"){ sched_float_type = stoi(params[i]); }
		else if(header[i] == "sched_calendar_on_relationship_lag"){ sched_calendar_on_relationship_lag = stoi(params[i]); }
		else if(header[i] == "sched_use_expect_end_flag"){ sched_use_expect_end_flag = stoi(params[i]); }
		else if(header[i] == "sched_progress_override"){ sched_progress_override = stoi(params[i]); }
		else if(header[i] == "level_float_hrs_cnt"){ level_float_hrs_cnt = stoi(params[i]); }
		else if(header[i] == "level_outer_assign_flag"){ level_outer_assign_flag = stoi(params[i]); }
		else if(header[i] == "level_outer_assign_priority"){ level_outer_assign_priority = stoi(params[i]); }
		else if(header[i] == "level_over_alloc_pct"){ level_over_alloc_pct = stoi(params[i]); }
		else if(header[i] == "level_within_float_flag"){ level_within_float_flag = stoi(params[i]); }
		else if(header[i] == "level_keep_sched_date_flag"){ level_keep_sched_date_flag = stoi(params[i]); }
		else if(header[i] == "level_all_rsrc_flag"){ level_all_rsrc_flag = stoi(params[i]); }
		else if(header[i] == "sched_use_project_end_date_for_float"){ sched_use_project_end_date_for_float = stoi(params[i]); }
		else if(header[i] == "enable_multiple_longest_path_calc"){ enable_multiple_longest_path_calc = stoi(params[i]); }
		else if(header[i] == "limit_multiple_longest_path_calc"){ limit_multiple_longest_path_calc = stoi(params[i]); }
		else if(header[i] == "max_multiple_longest_path"){ max_multiple_longest_path = stoi(params[i]); }
		else if(header[i] == "use_total_float_multiple_longest_paths"){ use_total_float_multiple_longest_paths = stoi(params[i]); }
		else if(header[i] == "key_activity_for_multiple_longest_paths"){ key_activity_for_multiple_longest_paths = stoi(params[i]); }
		else if(header[i] == "LevelPriorityList"){ LevelPriorityList = stoi(params[i]); }
	}
	tsv.append(std::to_string(schedoptions_id)).append("\t")
	.append(std::to_string(proj_id)).append("\t")
	.append(sched_outer_depend_type).append("\t")
	.append(sched_open_critical_flag).append("\t")
	.append(sched_lag_early_start_flag).append("\t")
	.append(sched_retained_logic).append("\t")
	.append(sched_setplantoforecast).append("\t")
	.append(sched_float_type).append("\t")
	.append(sched_calendar_on_relationship_lag).append("\t")
	.append(sched_use_expect_end_flag).append("\t")
	.append(sched_progress_override).append("\t")
	.append(level_float_hrs_cnt).append("\t")
	.append(level_outer_assign_flag).append("\t")
	.append(level_outer_assign_priority).append("\t")
	.append(level_over_alloc_pct).append("\t")
	.append(level_within_float_flag).append("\t")
	.append(level_keep_sched_date_flag).append("\t")
	.append(level_all_rsrc_flag).append("\t")
	.append(sched_use_project_end_date_for_float).append("\t")
	.append(enable_multiple_longest_path_calc).append("\t")
	.append(limit_multiple_longest_path_calc).append("\t")
	.append(max_multiple_longest_path).append("\t")
	.append(use_total_float_multiple_longest_paths).append("\t")
	.append(key_activity_for_multiple_longest_paths).append("\t")
	.append(LevelPriorityList).append("\n");
}
