//
// Created by sorat on 13/05/2022.
//

#ifndef XERPARSER_TASK_H
#define XERPARSER_TASK_H

#include <iostream>
#include <vector>
#include <string>

#include "../../Date/Date.h"

class Task
{
public:
	int task_id;
	int proj_id;
	int wbs_id;
	int clndr_id;
	int rsrc_id;
	int location_id;
	float total_float_hr_cnt;
	float free_float_hr_cnt;
	float remain_drtn_hr_cnt;
	float float_path;
	float float_path_order;
	std::string phys_complete_pct;
	std::string rev_fdbk_flag;
	std::string est_wt;
	std::string lock_plan_flag;
	std::string auto_compute_act_flag;
	std::string complete_pct_type;
	std::string task_type;
	std::string duration_type;
	std::string status_code;
	std::string task_code;
	std::string task_name;
	std::string act_work_qty;
	std::string remain_work_qty;
	std::string target_work_qty;
	std::string target_drtn_hr_cnt;
	std::string target_equip_qty;
	std::string act_equip_qty;
	std::string remain_equip_qty;
	std::string cstr_type;
	std::string priority_type;
	std::string guid;
	std::string tmpl_guid;
	std::string cstr_type2;
	std::string driving_path_flag;
	std::string act_this_per_work_qty;
	std::string act_this_per_equip_qty;
	std::string create_user;
	std::string update_user;
	Date cstr_date;
	Date act_start_date;
	Date act_end_date;
	Date late_start_date;
	Date late_end_date;
	Date expect_end_date;
	Date early_start_date;
	Date early_end_date;
	Date restart_date;
	Date reend_date;
	Date target_start_date;
	Date target_end_date;
	Date rem_late_start_date;
	Date rem_late_end_date;
	Date suspend_date;
	Date resume_date;
	Date cstr_date2;
	Date external_early_start_date;
	Date external_late_end_date;
	Date create_date;
	Date update_date;

	std::string tsv;

	Task(std::vector<std::string> header, std::vector<std::string> params);
};

#endif // XERPARSER_TASK_H
