//
// Created by sorat on 12/05/2022.
//

#ifndef XERPARSER_TASKPROCS_H
#define XERPARSER_TASKPROCS_H

#include <vector>

#include "classes/Taskproc.h"

class Taskprocs{
public:
		void add(const Taskproc& taskproc);

		Taskproc findById(int id);
		std::vector<Taskproc> getAll();


		std::string get_tsv() const;


private:
		std::vector<Taskproc> taskprocs;
};


#endif //XERPARSER_TASKPROCS_H
