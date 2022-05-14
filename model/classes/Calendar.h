//
// Created by Taraxtix on 07/05/2022.
//

#ifndef EXRPARSER_CALENDAR_H
#define EXRPARSER_CALENDAR_H

#include <iostream>
#include <vector>

class Calendar
{
public:
	int clndr_id;
	float day_hr_cnt;
	float week_hr_cnt;
	float month_hr_cnt;
	float year_hr_cnt;
	std::string base_clndr_id;
	std::string clndr_data;
	std::string clndr_name;
	std::string clndr_type;
	std::string default_flag;
	std::string last_chng_date;
	std::string proj_id;

	std::string get_tsv();
	std::string tsv;

	Calendar(const std::vector<std::string> header, const std::vector<std::string> params);

private:
};

#endif // EXRPARSER_CALENDAR_H
