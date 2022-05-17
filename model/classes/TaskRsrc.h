
#ifndef XERPARSER_TASKRSRC_H
#define XERPARSER_TASKRSRC_H

#include <iostream>
#include <vector>
#include <string>

class Reader;

class TaskRsrc
{
public:
	int taskrsrc_id;
	int task_id;
	int proj_id;
	std::string cost_qty_link_flag;
	int role_id;
	int acct_id;
	int rsrc_id;
	int pobs_id;
	std::string skill_level;
	float remain_qty;
	float target_qty;
	float remain_qty_per_hour;
	float target_lag_drtn_hr_cnt;
	float target_qty_per_hour;
	std::string act_ot_qty;
	std::string act_reg_qty;
	std::string relag_drtn_hr_cnt;
	std::string ot_factor;
	std::string cost_per_qty;
	std::string target_cost;
	std::string act_reg_cost;
	std::string act_ot_cost;
	std::string remain_cost;
	std::string act_start_date;
	std::string act_end_date;
	std::string restart_date;
	std::string reend_date;
	std::string target_start_date;
	std::string target_end_date;
	std::string rem_late_start_date;
	std::string rem_late_end_date;
	std::string rollup_dates_flag;
	std::string target_crv;
	std::string remain_crv;
	std::string actual_crv;
	std::string ts_pend_act_end_flag;
	std::string guid;
	std::string rate_type;
	std::string act_this_per_cost;
	std::string act_this_per_qty;
	std::string curv_id;
	std::string rsrc_type;
	std::string cost_per_qty_source_type;
	std::string create_user;
	std::string create_date;
	std::string cbs_id;
	std::string has_rsrchours;
	std::string taskrsrc_sum_id;

	std::string get_tsv();

	TaskRsrc(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj);

private:
	Reader *reader;
	void update_tsv();
	std::string tsv;

	std::string taskrsrc_id_str;
	std::string task_id_str;
	std::string proj_id_str;
	std::string role_id_str;
	std::string acct_id_str;
	std::string rsrc_id_str;
	std::string pobs_id_str;

	std::string remain_qty_str;
	std::string target_qty_str;
	std::string remain_qty_per_hour_str;
	std::string target_lag_drtn_hr_cnt_str;
	std::string target_qty_per_hour_str;
};

#endif // XERPARSER_TASKRSRC_H
