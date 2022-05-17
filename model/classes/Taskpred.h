

#ifndef XERPARSER_TASKPRED_H
#define XERPARSER_TASKPRED_H

#include <iostream>
#include <vector>
#include <string>
class Reader;

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

	std::string get_tsv();

	Taskpred(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj);

private:
	Reader *reader;
	std::string tsv;
	void update_tsv();
	std::string task_pred_id_str;
	std::string task_id_str;
	std::string pred_task_id_str;
	std::string proj_id_str;
	std::string pred_proj_id_str;
};

#endif // XERPARSER_TASKPRED_H
