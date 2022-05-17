
#ifndef XERPARSER_RSRCCURVDATA_H
#define XERPARSER_RSRCCURVDATA_H

#include <iostream>
#include <vector>
#include <string>
class Reader;

class Rsrccurvdata
{
public:
	int curv_id;
	std::string curv_name;
	std::string default_flag;
	std::string pct_usage_0;
	std::string pct_usage_1;
	std::string pct_usage_2;
	std::string pct_usage_3;
	std::string pct_usage_4;
	std::string pct_usage_5;
	std::string pct_usage_6;
	std::string pct_usage_7;
	std::string pct_usage_8;
	std::string pct_usage_9;
	std::string pct_usage_10;
	std::string pct_usage_11;
	std::string pct_usage_12;
	std::string pct_usage_13;
	std::string pct_usage_14;
	std::string pct_usage_15;
	std::string pct_usage_16;
	std::string pct_usage_17;
	std::string pct_usage_18;
	std::string pct_usage_19;
	std::string pct_usage_20;

	std::string tsv;
	std::string get_tsv();

	Rsrccurvdata(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj);

private:
	Reader *reader;
	void update_tsv();
};

#endif // XERPARSER_RSRCCURVDATA_H
