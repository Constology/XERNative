//
// Created by sorat on 13/05/2022.
//

#include "Tasks.h"

void Tasks::add(const Task& task){ tasks.emplace_back(task); }

Task Tasks::findById(int id){
	for(auto & task : tasks){
		if(task.task_id == id){
			return task;
		}
	}
	printf("Task not found");
	exit(EXIT_FAILURE);
}

std::vector<Task> Tasks::getAll(){
	return tasks;
}

std::string Tasks::get_tsv() const{
	std::string tsv;
	tsv.append("%T\tTASK\n");
	tsv.append("%F\ttask_id\tproj_id\twbs_id\tclndr_id\trsrc_id\tlocation_id\ttotal_float_hr_cnt\t"
						 "free_float_hr_cnt\tremain_drtn_hr_cnt\tfloat_path\tfloat_path_order\t"
						 "phys_complete_pct\trev_fdbk_flag\test_wt\tlock_plan_flag\tauto_compute_act_flag\t"
						 "complete_pct_type\ttask_type\tduration_type\tstatus_code\ttask_code\t"
						 "task_name\tact_work_qty\tremain_work_qty\ttarget_work_qty\ttarget_drtn_hr_cnt\t"
						 "target_equip_qty\tact_equip_qty\tremain_equip_qty\tcstr_type\tpriority_type\t"
						 "guid\ttmpl_guid\tcstr_type2\tdriving_path_flag\tact_this_per_work_qty\t"
						 "act_this_per_equip_qty\tcreate_user\tupdate_user\tcstr_date\tact_start_date\t"
						 "act_end_date\tlate_start_date\tlate_end_date\texpect_end_date\tearly_start_date\t"
						 "early_end_date\trestart_date\treend_date\ttarget_start_date\ttarget_end_date\t"
						 "rem_late_start_date\trem_late_end_date\tsuspend_date\tresume_date\tcstr_date2\t"
						 "external_early_start_date\texternal_late_end_date\tcreate_date\tupdate_date\n");
	for(auto & task : tasks){
		tsv.append(task.tsv);
	}
	return tsv;
}
