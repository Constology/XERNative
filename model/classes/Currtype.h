//
// Created by Taraxtix on 07/05/2022.
//

#ifndef EXRPARSER_CURRTYPE_H
#define EXRPARSER_CURRTYPE_H

#include <iostream>

class Currtype{

public:
		int curr_id;
		int decimal_digit_cnt;
		float  base_exch_rate;
		std::string curr_short_name;
		std::string curr_symbol;
		std::string curr_type;
		std::string decimal_symbol;
		std::string digit_group_symbol;
		int group_digit_cnt;
		std::string neg_curr_fmt_type;
		std::string pos_curr_fmt_type;
		std::string get_tsv();

		std::string tsv;

		Currtype(const std::string *header, const std::string *params);
};


#endif //EXRPARSER_CURRTYPE_H
