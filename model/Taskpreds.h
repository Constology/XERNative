//
// Created by sorat on 12/05/2022.
//

#ifndef XERPARSER_TASKPREDS_H
#define XERPARSER_TASKPREDS_H


#include <vector>

#include "classes/Taskpred.h"

class Taskpreds{
public:
		void add(const Taskpred& taskpred);

		Taskpred findById(int id);
		std::vector<Taskpred> getAll();


		std::string get_tsv() const;


private:
		std::vector<Taskpred> taskpreds;
};


#endif //XERPARSER_TASKPREDS_H
