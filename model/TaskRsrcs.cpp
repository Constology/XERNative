

#include "TaskRsrcs.h"

TaskRsrcs::TaskRsrcs()
{
	taskrsrcs.clear();
}

void TaskRsrcs::add(TaskRsrc &taskRsrc) { taskrsrcs.emplace_back(taskRsrc); }

TaskRsrc TaskRsrcs::findById(int id)
{
	for (auto &taskRsrc : taskrsrcs)
	{
		if (taskRsrc.taskrsrc_id == id)
		{
			return taskRsrc;
		}
	}
	printf("TaskRsrc not found");
	exit(EXIT_FAILURE);
}

std::vector<TaskRsrc> TaskRsrcs::getAll()
{
	return taskrsrcs;
}

std::string TaskRsrcs::get_tsv()
{
	std::string tsv;
	tsv.append("%T\tTASKRSRC\n");
	tsv.append("%F\ttaskrsrc_id\ttask_id\tproj_id\tcost_qty_link_flag\trole_id\tacct_id\t"
			   "rsrc_id\tpobs_id\tskill_level\tremain_qty\ttarget_qty\tremain_qty_per_hour\t"
			   "target_lag_drtn_hr_cnt\ttarget_qty_per_hour\tact_ot_qty\tact_reg_qty\t"
			   "relag_drtn_hr_cnt\tot_factor\tcost_per_qty\ttarget_cost\tact_reg_cost\t"
			   "act_ot_cost\tremain_cost\tact_start_date\tact_end_date\trestart_date\t"
			   "reend_date\ttarget_start_date\ttarget_end_date\trem_late_start_date\t"
			   "rem_late_end_date\trollup_dates_flag\ttarget_crv\tremain_crv\tactual_crv\t"
			   "ts_pend_act_end_flag\tguid\trate_type\tact_this_per_cost\tact_this_per_qty\t"
			   "curv_id\trsrc_type\tcost_per_qty_source_type\tcreate_user\tcreate_date\t"
			   "cbs_id\thas_rsrchours\ttaskrsrc_sum_id\n");
	for (auto &taskRsrc : taskrsrcs)
	{
		tsv.append(taskRsrc.tsv);
	}
	return tsv;
}

std::vector<TaskRsrc> TaskRsrcs::getByRsrcId(int id)
{
	std::vector<TaskRsrc> toReturn;
	for (auto &tr : taskrsrcs)
	{
		if (tr.rsrc_id == id)
		{
			toReturn.emplace_back(tr);
		}
	}
	return toReturn;
}

std::vector<TaskRsrc> TaskRsrcs::getByTaskId(int id)
{
	std::vector<TaskRsrc> toReturn;
	for (auto &tr : taskrsrcs)
	{
		if (tr.task_id == id)
		{
			toReturn.emplace_back(tr);
		}
	}
	return toReturn;
}