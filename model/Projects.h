//
// Created by sorat on 12/05/2022.
//

#ifndef XERPARSER_PROJECTS_H
#define XERPARSER_PROJECTS_H

#include <vector>

#include "classes/Project.h"

class Projects
{
public:
	void add(Project &project);

	Project findById(int id);
	std::vector<Project> getAll();

	std::string get_tsv();

private:
	std::vector<Project> projects;
};

#endif // XERPARSER_PROJECTS_H
