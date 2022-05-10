//
// Created by Taraxtix on 10/05/2022.
//

#include "TaskRsrcs.h"

void TaskRsrcs::add(const TaskRsrc& taskRsrc){ taskRsrcs.emplace_back(taskRsrc); }

TaskRsrc TaskRsrcs::findById(int id){
	for(auto & taskRsrc : taskRsrcs){
		if(taskRsrc.taskrsrc_id == id){
			return taskRsrc;
		}
	}
	printf("TaskRsrc not found");
	exit(EXIT_FAILURE);
}

std::vector<TaskRsrc> TaskRsrcs::getAll(){
	return taskRsrcs;
}

std::string TaskRsrcs::get_tsv() const{
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
	for(auto & taskRsrc : taskRsrcs){
		tsv.append(taskRsrc.tsv);
	}
	return tsv;
}
