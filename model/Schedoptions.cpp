//
// Created by sorat on 12/05/2022.
//

#include "Schedoptions.h"

void Schedoptions::add(Schedoption &schedoption) { schedoptions.emplace_back(schedoption); }

Schedoption Schedoptions::findById(int id)
{
	for (auto &schedoption : schedoptions)
	{
		if (schedoption.schedoptions_id == id)
		{
			return schedoption;
		}
	}
	printf("Schedoption not found");
	exit(EXIT_FAILURE);
}

std::vector<Schedoption> Schedoptions::getAll()
{
	return schedoptions;
}

std::string Schedoptions::get_tsv()
{
	std::string tsv;
	tsv.append("%T\tSCHEDOPTION\n");
	tsv.append("%F\tschedoptions_id\tproj_id\tsched_outer_depend_type\tsched_open_critical_flag\t"
			   "sched_lag_early_start_flag\tsched_retained_logic\tsched_setplantoforecast\t"
			   "sched_float_type\tsched_calendar_on_relationship_lag\tsched_use_expect_end_flag\t"
			   "sched_progress_override\tlevel_float_hrs_cnt\tlevel_outer_assign_flag\t"
			   "level_outer_assign_priority\tlevel_over_alloc_pct\tlevel_within_float_flag\t"
			   "level_keep_sched_date_flag\tlevel_all_rsrc_flag\tsched_use_project_end_date_for_float\t"
			   "enable_multiple_longest_path_calc\tlimit_multiple_longest_path_calc\tmax_multiple_longest_path\t"
			   "use_total_float_multiple_longest_paths\tkey_activity_for_multiple_longest_paths"
			   "\tLevelPriorityList\n");
	for (auto &schedoption : schedoptions)
	{
		tsv.append(schedoption.get_tsv());
	}
	return tsv;
}
