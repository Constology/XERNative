//
// Created by sorat on 12/05/2022.
//

#ifndef XERPARSER_SCHEDOPTION_H
#define XERPARSER_SCHEDOPTION_H

#include <iostream>

class Schedoption{
public:
		int schedoptions_id;
		int proj_id;
		std::string sched_outer_depend_type;
		std::string sched_open_critical_flag;
		std::string sched_lag_early_start_flag;
		std::string sched_retained_logic;
		std::string sched_setplantoforecast;
		std::string sched_float_type;
		std::string sched_calendar_on_relationship_lag;
		std::string sched_use_expect_end_flag;
		std::string sched_progress_override;
		std::string level_float_hrs_cnt;
		std::string level_outer_assign_flag;
		std::string level_outer_assign_priority;
		std::string level_over_alloc_pct;
		std::string level_within_float_flag;
		std::string level_keep_sched_date_flag;
		std::string level_all_rsrc_flag;
		std::string sched_use_project_end_date_for_float;
		std::string enable_multiple_longest_path_calc;
		std::string limit_multiple_longest_path_calc;
		std::string max_multiple_longest_path;
		std::string use_total_float_multiple_longest_paths;
		std::string key_activity_for_multiple_longest_paths;
		std::string LevelPriorityList;

		std::string tsv;

		Schedoption(const std::string *header, const std::string *params);
};


#endif //XERPARSER_SCHEDOPTION_H
