//
// Created by sorat on 12/05/2022.
//

#ifndef XERPARSER_TASKPROC_H
#define XERPARSER_TASKPROC_H

#include <iostream>
#include <vector>
#include <string>

class Reader;

class Taskproc
{
public:
	int getProcId();
	void setProcId(int value);
	int getTaskId();
	void setTaskId(int value);
	int getProjId();
	void setProjId(int value);
	int getSeqNum();
	void setSeqNum(int value);
	std::string getProcName();
	void setProcName(std::string value);
	std::string getCompleteFlag();
	void setCompleteFlag(std::string value);
	std::string getProcWt();
	void setProcWt(std::string value);
	std::string getCompletePct();
	void setCompletePct(std::string value);
	std::string getProcDescr();
	void setProcDescr(std::string value);

	std::string get_tsv();

	Taskproc(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj);

private:
	int proc_id;
	int task_id;
	int proj_id;
	int seq_num;
	std::string proc_name;
	std::string complete_flag;
	std::string proc_wt;
	std::string complete_pct;
	std::string proc_descr;

	Reader *reader;
	std::string tsv;
	void update_tsv();
	std::string proc_id_str;
	std::string task_id_str;
	std::string proj_id_str;
	std::string seq_num_str;
};

#endif // XERPARSER_TASKPROC_H
