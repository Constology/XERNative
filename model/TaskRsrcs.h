//
// Created by Taraxtix on 10/05/2022.
//

#ifndef XERPARSER_TASKRSRCS_H
#define XERPARSER_TASKRSRCS_H

#include "classes/TaskRsrc.h"

#include <vector>

class TaskRsrcs
{
public:
	void add(const TaskRsrc &taskRsrc);

	TaskRsrc findById(int id);
	std::vector<TaskRsrc> getAll();
	std::vector<TaskRsrc> getByRsrcId(int id);

	std::string get_tsv() const;

private:
	std::vector<TaskRsrc> taskRsrcs;
};

#endif // XERPARSER_TASKRSRCS_H
