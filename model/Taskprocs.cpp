//
// Created by sorat on 12/05/2022.
//

#include "Taskprocs.h"

void Taskprocs::add(Taskproc &taskproc) { taskprocs.emplace_back(taskproc); }

Taskproc Taskprocs::findById(int id)
{
	for (auto &taskproc : taskprocs)
	{
		if (taskproc.getProcId() == id)
		{
			return taskproc;
		}
	}
	printf("Taskproc not found");
	exit(EXIT_FAILURE);
}

std::vector<Taskproc> Taskprocs::getAll()
{
	return taskprocs;
}

std::string Taskprocs::get_tsv()
{
	std::string tsv;
	tsv.append("%T\tTASKPROC\n");
	tsv.append("%F\tproc_id\ttask_id\tproj_id\tseq_num\tproc_name\tcomplete_flag\tproc_wt\t"
			   "complete_pct\tproc_descr\n");
	for (auto &taskproc : taskprocs)
	{
		tsv.append(taskproc.get_tsv());
	}
	return tsv;
}
