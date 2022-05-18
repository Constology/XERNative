
#ifndef XERPARSER_TASKACTV_H
#define XERPARSER_TASKACTV_H

#include <iostream>
#include <vector>
#include <string>

class Reader;

class Taskactv
{
public:
	int getTaskId();
	void setTaskId(int value);
	int getActvCodeTypeId();
	void setActvCodeTypeId(int value);
	int getActvCodeId();
	void setActvCodeId(int value);
	int getProjId();
	void setProjId(int value);

	std::string get_tsv();
	Taskactv(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj);

private:
	int task_id;
	int actv_code_type_id;
	int actv_code_id;
	int proj_id;

	Reader *reader;
	std::string task_id_str;
	std::string actv_code_type_id_str;
	std::string actv_code_id_str;
	std::string proj_id_str;
	void update_tsv();
	std::string tsv;
};

#endif // XERPARSER_TASKACTV_H
