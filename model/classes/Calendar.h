//
// Created by Taraxtix on 07/05/2022.
//

#ifndef EXRPARSER_CALENDAR_H
#define EXRPARSER_CALENDAR_H

#include <iostream>

class Calendar{
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

		std::string tsv;

		Calendar(const std::string *header, const std::string *params);
};


#endif //EXRPARSER_CALENDAR_H
