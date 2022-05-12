//
// Created by sorat on 12/05/2022.
//

#include "Taskactvs.h"

void Taskactvs::add(const Taskactv& taskactv){ taskactvs.emplace_back(taskactv); }

Taskactv Taskactvs::findById(int id){
	for(auto & taskactv : taskactvs){
		if(taskactv.task_id == id){
			return taskactv;
		}
	}
	printf("Taskactv not found");
	exit(EXIT_FAILURE);
}

std::vector<Taskactv> Taskactvs::getAll(){
	return taskactvs;
}

std::string Taskactvs::get_tsv() const{
	std::string tsv;
	tsv.append("%T\tTASKACTV\n");
	tsv.append("%F\ttask_id\tactv_code_type_id\tactv_code_id\tproj_id\n");
	for(auto & taskactv : taskactvs){
		tsv.append(taskactv.tsv);
	}
	return tsv;
}
