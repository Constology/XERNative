

#ifndef XERPARSER_TASKRSRCS_H
#define XERPARSER_TASKRSRCS_H

#include "classes/TaskRsrc.h"

#include <vector>

class TaskRsrcs
{
public:
	TaskRsrcs();
	void add(TaskRsrc &taskRsrc);

	TaskRsrc findById(int id);
	std::vector<TaskRsrc> getAll();
	std::vector<TaskRsrc> getByRsrcId(int id);
	std::vector<TaskRsrc> getByTaskId(int id);
	std::string get_tsv();

private:
	std::vector<TaskRsrc> taskrsrcs;
};

#endif // XERPARSER_TASKRSRCS_H
