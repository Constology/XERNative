//
// Created by sorat on 12/05/2022.
//

#include "Taskpreds.h"

void Taskpreds::add(const Taskpred& taskpred){ taskpreds.emplace_back(taskpred); }

Taskpred Taskpreds::findById(int id){
	for(auto & taskpred : taskpreds){
		if(taskpred.task_pred_id == id){
			return taskpred;
		}
	}
	printf("Taskpred not found");
	exit(EXIT_FAILURE);
}

std::vector<Taskpred> Taskpreds::getAll(){
	return taskpreds;
}

std::string Taskpreds::get_tsv() const{
	std::string tsv;
	tsv.append("%T\tTASKPRED\n");
	tsv.append("%F\ttask_pred_id\ttask_id\tpred_task_id\tproj_id\tpred_proj_id\tpred_type\t"
						 "lag_hr_cnt\tcomments\tfloat_path\taref\tarls\n");
	for(auto & taskpred : taskpreds){
		tsv.append(taskpred.tsv);
	}
	return tsv;
}
