//
// Created by sorat on 12/05/2022.
//

#include "Schedoption.h"
#include "../../Reader.h"

Schedoption::Schedoption(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj)
{
	reader = readerObj;
	tsv = "";
	for (int i = 0; i < params.size(); i++)
	{
		if (header.at(i) == "schedoptions_id")
		{
			if (!params.at(i).empty())
			{
				schedoptions_id = stoi(params.at(i));
				schedoptions_id_str = params.at(i);
			}
		}
		else if (header.at(i) == "proj_id")
		{
			if (!params.at(i).empty())
			{
				proj_id = stoi(params.at(i));
				proj_id_str = params.at(i);
			}
		}
		else if (header.at(i) == "sched_outer_depend_type")
		{
			if (!params.at(i).empty())
			{
				sched_outer_depend_type = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "sched_open_critical_flag")
		{
			if (!params.at(i).empty())
			{
				sched_open_critical_flag = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "sched_lag_early_start_flag")
		{
			if (!params.at(i).empty())
			{
				sched_lag_early_start_flag = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "sched_retained_logic")
		{
			if (!params.at(i).empty())
			{
				sched_retained_logic = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "sched_setplantoforecast")
		{
			if (!params.at(i).empty())
			{
				sched_setplantoforecast = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "sched_float_type")
		{
			if (!params.at(i).empty())
			{
				sched_float_type = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "sched_calendar_on_relationship_lag")
		{
			if (!params.at(i).empty())
			{
				sched_calendar_on_relationship_lag = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "sched_use_expect_end_flag")
		{
			if (!params.at(i).empty())
			{
				sched_use_expect_end_flag = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "sched_progress_override")
		{
			if (!params.at(i).empty())
			{
				sched_progress_override = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "level_float_hrs_cnt")
		{
			if (!params.at(i).empty())
			{
				level_float_hrs_cnt = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "level_outer_assign_flag")
		{
			if (!params.at(i).empty())
			{
				level_outer_assign_flag = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "level_outer_assign_priority")
		{
			if (!params.at(i).empty())
			{
				level_outer_assign_priority = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "level_over_alloc_pct")
		{
			if (!params.at(i).empty())
			{
				level_over_alloc_pct = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "level_within_float_flag")
		{
			if (!params.at(i).empty())
			{
				level_within_float_flag = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "level_keep_sched_date_flag")
		{
			if (!params.at(i).empty())
			{
				level_keep_sched_date_flag = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "level_all_rsrc_flag")
		{
			if (!params.at(i).empty())
			{
				level_all_rsrc_flag = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "sched_use_project_end_date_for_float")
		{
			if (!params.at(i).empty())
			{
				sched_use_project_end_date_for_float = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "enable_multiple_longest_path_calc")
		{
			if (!params.at(i).empty())
			{
				enable_multiple_longest_path_calc = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "limit_multiple_longest_path_calc")
		{
			if (!params.at(i).empty())
			{
				limit_multiple_longest_path_calc = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "max_multiple_longest_path")
		{
			if (!params.at(i).empty())
			{
				max_multiple_longest_path = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "use_total_float_multiple_longest_paths")
		{
			if (!params.at(i).empty())
			{
				use_total_float_multiple_longest_paths = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "key_activity_for_multiple_longest_paths")
		{
			if (!params.at(i).empty())
			{
				key_activity_for_multiple_longest_paths = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "LevelPriorityList")
		{
			if (!params.at(i).empty())
			{
				LevelPriorityList = stoi(params.at(i));
			}
		}
	}
	update_tsv();
}

void Schedoption::update_tsv(){
	tsv = "%R\t";
	tsv.append(schedoptions_id_str).append("\t")
	.append(proj_id_str).append("\t")
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
	.append(sched_use_project_end_date_for_float)
	.append("\t").append(enable_multiple_longest_path_calc)
	.append("\t").append(limit_multiple_longest_path_calc)
	.append("\t").append(max_multiple_longest_path).append("\t")
	.append(use_total_float_multiple_longest_paths).append("\t")
	.append(key_activity_for_multiple_longest_paths).append("\t")
	.append(LevelPriorityList).append("\n");
}

std::string Schedoption::get_tsv(){
	update_tsv();
	return tsv;
}