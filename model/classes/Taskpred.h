

#ifndef XERPARSER_TASKPRED_H
#define XERPARSER_TASKPRED_H

#include <iostream>
#include <vector>
#include <string>
class Reader;

class Taskpred
{
public:
	int getTaskPredId();
	void setTaskPredId(int value);
	int getTaskId();
	void setTaskId(int value);
	int getPredTaskId();
	void setPredTaskId(int value);
	int getProjId();
	void setProjId(int value);
	int getPredProjId();
	void setPredProjId(int value);
	std::string getPredType();
	void setPredType(std::string value);
	std::string getLagHrCnt();
	void setLagHrCnt(std::string value);
	std::string getComments();
	void setComments(std::string value);
	std::string getFloatPath();
	void setFloatPath(std::string value);
	std::string getAref();
	void setAref(std::string value);
	std::string getArls();
	void setArls(std::string value);

	std::string get_tsv();

	Taskpred(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj);

private:
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
