//
// Created by Taraxtix on 07/05/2022.
//

#include "Currtype.h"

Currtype::Currtype(const std::string header[], const std::string params[]){
	std::string curr_id_str;
	std::string decimal_digit_cnt_str;
	std::string base_exch_rate_str;

	tsv = "";

	for(uint i = 0; i < header->length(); i++){
		if(header[i].empty()) break;

		if(header[i] == "curr_id"){
			curr_id = stoi(params[i]);
			curr_id_str = params[i];
		}
		if(header[i] == "decimal_digit_cnt"){
			decimal_digit_cnt = stoi(params[i]);
			decimal_digit_cnt_str = params[i];
		}
		if(header[i] == "base_exch_rate_str"){
			base_exch_rate = stof(params[i]);
			base_exch_rate_str = params[i];
		}
		else if(header[i] == "curr_short_name"){ curr_short_name = params[i]; }
		else if(header[i] == "curr_symbol"){ curr_symbol = params[i]; }
		else if(header[i] == "decimal_symbol"){ decimal_symbol = params[i]; }
		else if(header[i] == "digit_group_symbol"){ digit_group_symbol = params[i]; }
		else if(header[i] == "group_digit_cnt"){ group_digit_cnt = params[i]; }
		else if(header[i] == "neg_curr_fmt_type"){ neg_curr_fmt_type = params[i]; }
		else if(header[i] == "pos_curr_fmt_type"){ pos_curr_fmt_type = params[i]; }

		tsv.append(curr_id_str).append("\t")
						.append(decimal_digit_cnt_str).append("\t")
						.append(base_exch_rate_str).append("\t")
						.append(curr_short_name).append("\t")
						.append(curr_symbol).append("\t")
						.append(decimal_symbol).append("\t")
						.append(digit_group_symbol).append("\t")
						.append(group_digit_cnt).append("\t")
						.append(neg_curr_fmt_type).append("\t")
						.append(pos_curr_fmt_type).append("\n");
	}
}