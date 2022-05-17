
#include "Taskactvs.h"

void Taskactvs::add(Taskactv &taskactv) { taskactvs.emplace_back(taskactv); }

Taskactv Taskactvs::findById(int id)
{
	for (auto &taskactv : taskactvs)
	{
		if (taskactv.task_id == id)
		{
			return taskactv;
		}
	}
	printf("Taskactv not found");
	exit(EXIT_FAILURE);
}

std::vector<Taskactv> Taskactvs::getAll()
{
	return taskactvs;
}

std::string Taskactvs::get_tsv()
{
	std::string tsv;
	tsv.append("%T\tTASKACTV\n");
	tsv.append("%F\ttask_id\tactv_code_type_id\tactv_code_id\tproj_id\n");
	for (auto &taskactv : taskactvs)
	{
		tsv.append(taskactv.get_tsv());
	}
	return tsv;
}
