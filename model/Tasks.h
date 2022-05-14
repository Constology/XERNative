//
// Created by sorat on 13/05/2022.
//

#ifndef XERPARSER_TASKS_H
#define XERPARSER_TASKS_H

#include <vector>

#include "classes/Task.h"

class Tasks
{
public:
	void add(const Task &task);

	Task findById(int id);
	std::vector<Task> getAll();
	std::vector<Task> getByWbs(int id);

	std::string get_tsv() const;

private:
	std::vector<Task> tasks;
};

#endif // XERPARSER_TASKS_H
