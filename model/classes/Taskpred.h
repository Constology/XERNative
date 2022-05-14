//
// Created by sorat on 12/05/2022.
//

#ifndef XERPARSER_TASKPRED_H
#define XERPARSER_TASKPRED_H

#include <iostream>
#include <vector>
#include <string>

class Taskpred
{
public:
	int task_pred_id;
	int task_id;
	int pred_task_id;
	int proj_id;
	int pred_proj_id;
	std::string pred_type;
	std::string lag_hr_cnt;
	std::string comments;
	std::string float_path;
	std::string aref;
	std::string arls;

	std::string tsv;

	Taskpred(const std::vector<std::string> header, const std::vector<std::string> params);
};

#endif // XERPARSER_TASKPRED_H
