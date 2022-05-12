//
// Created by sorat on 12/05/2022.
//

#ifndef XERPARSER_TASKPROC_H
#define XERPARSER_TASKPROC_H

#include <iostream>

class Taskproc{
public:
		int proc_id;
		int task_id;
		int proj_id;
		int seq_num;
		std::string proc_name;
		std::string complete_flag;
		std::string proc_wt;
		std::string complete_pct;
		std::string proc_descr;

		std::string tsv;

		Taskproc(const std::string *header, const std::string *params);
};


#endif //XERPARSER_TASKPROC_H
