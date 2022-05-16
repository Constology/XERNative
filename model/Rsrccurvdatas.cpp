//
// Created by sorat on 12/05/2022.
//

#include "Rsrccurvdatas.h"

void Rsrccurvdatas::add(Rsrccurvdata& rsrccurvdata){ rsrccurvdatas.emplace_back
(rsrccurvdata); }

Rsrccurvdata Rsrccurvdatas::findById(int id){
	for(auto & rsrccurvdata : rsrccurvdatas){
		if(rsrccurvdata.curv_id == id){
			return rsrccurvdata;
		}
	}
	printf("Rsrccurvdata not found");
	exit(EXIT_FAILURE);
}

std::vector<Rsrccurvdata> Rsrccurvdatas::getAll(){
	return rsrccurvdatas;
}

std::string Rsrccurvdatas::get_tsv() {
	std::string tsv;
	tsv.append("%T\tRSRCCURVDATA\n");
	tsv.append("%F\tcurv_id\tcurv_name\tdefault_flag\tpct_usage_0\tpct_usage_1\tpct_usage_2\t"
						 "curv_id\tcurv_name\tdefault_flag\tpct_usage_0\tpct_usage_1\tpct_usage_2\t"
						 "pct_usage_3\tpct_usage_4\tpct_usage_5\tpct_usage_6\tpct_usage_7\tpct_usage_8\t"
						 "pct_usage_9\tpct_usage_10\tpct_usage_11\tpct_usage_12\tpct_usage_13\tpct_usage_14\t"
						 "pct_usage_15\tpct_usage_16\tpct_usage_17\tpct_usage_18\tpct_usage_19\tpct_usage_20\n"
						 );
	for(auto & rsrccurvdata : rsrccurvdatas){
		tsv.append(rsrccurvdata.tsv);
	}
	return tsv;
}
