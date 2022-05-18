
#ifndef XERPARSER_RSRCCURVDATA_H
#define XERPARSER_RSRCCURVDATA_H

#include <iostream>
#include <vector>
#include <string>
class Reader;

class Rsrccurvdata
{
public:
		std::string tsv;
	std::string get_tsv();

	int getCurvId();
	void setCurvId(int value);
	std::string getCurvName();
	void setCurvName(std::string value);
	std::string getDefaultFlag();
	void setDefaultFlag(std::string value);
	std::string getPctUsage0();
	void setPctUsage0(std::string value);
	std::string getPctUsage1();
	void setPctUsage1(std::string value);
	std::string getPctUsage2();
	void setPctUsage2(std::string value);
	std::string getPctUsage3();
	void setPctUsage3(std::string value);
	std::string getPctUsage4();
	void setPctUsage4(std::string value);
	std::string getPctUsage5();
	void setPctUsage5(std::string value);
	std::string getPctUsage6();
	void setPctUsage6(std::string value);
	std::string getPctUsage7();
	void setPctUsage7(std::string value);
	std::string getPctUsage8();
	void setPctUsage8(std::string value);
	std::string getPctUsage9();
	void setPctUsage9(std::string value);
	std::string getPctUsage10();
	void setPctUsage10(std::string value);
	std::string getPctUsage11();
	void setPctUsage11(std::string value);
	std::string getPctUsage12();
	void setPctUsage12(std::string value);
	std::string getPctUsage13();
	void setPctUsage13(std::string value);
	std::string getPctUsage14();
	void setPctUsage14(std::string value);
	std::string getPctUsage15();
	void setPctUsage15(std::string value);
	std::string getPctUsage16();
	void setPctUsage16(std::string value);
	std::string getPctUsage17();
	void setPctUsage17(std::string value);
	std::string getPctUsage18();
	void setPctUsage18(std::string value);
	std::string getPctUsage19();
	void setPctUsage19(std::string value);
	std::string getPctUsage20();
	void setPctUsage20(std::string value);

	Rsrccurvdata(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj);

private:
	int curv_id;
	std::string curv_id_str;

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

	Reader *reader;
	void update_tsv();
};

#endif // XERPARSER_RSRCCURVDATA_H
