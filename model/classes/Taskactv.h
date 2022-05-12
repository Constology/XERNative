//
// Created by sorat on 12/05/2022.
//

#ifndef XERPARSER_TASKACTV_H
#define XERPARSER_TASKACTV_H

#include <iostream>

class Taskactv{
public:
		int task_id;
		int actv_code_type_id;
		int actv_code_id;
		int proj_id;

		std::string tsv;

		Taskactv(const std::string *header, const std::string *params);
};


#endif //XERPARSER_TASKACTV_H
