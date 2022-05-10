//
// Created by Taraxtix on 07/05/2022.
//

#include "Currtypes.h"

void Currtypes::add(const Currtype& currtype){ currtypes.emplace_back(currtype); }

Currtype Currtypes::findById(int id){
	for(auto & currtype : currtypes){
		if(currtype.curr_id == id){
			return currtype;
		}
	}
	printf("Account not found");
	exit(EXIT_FAILURE);
}

std::string Currtypes::get_tsv() const{
	std::string tsv;
	tsv.append("%T\tCURRTYPE\n");
	tsv.append("%F\tcurr_id\tdecimal_digit_cnt\tbase_exch_rate\tcurr_short_name\tcurr_symbol"
						 "\tcurr_type\tdecimal_symbol\tdigit_group_symbol\tgroup_digit_cnt\tneg_curr_fmt_type"
						 "\tpos_curr_fmt_type");
	for(auto & currtype : currtypes){
		tsv.append(currtype.tsv);
	}
	return tsv;
}

std::vector<Currtype> Currtypes::getAll(){
    return currtypes;
}