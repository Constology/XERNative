//
// Created by Taraxtix on 07/05/2022.
//

#include "Actvcodes.h"

void Actvcodes::add(const Actvcode& actvcode){ actvcodes.emplace_back(actvcode); }

Actvcode Actvcodes::findById(int id){
	for(auto & actvcode : actvcodes){
		if(actvcode.actv_code_id == id){
			return actvcode;
		}
	}
	printf("Account not found");
	exit(EXIT_FAILURE);
}

std::vector<Actvcode> Actvcodes::getAll(){
	return actvcodes;
}

std::string Actvcodes::get_tsv() const{
	std::string tsv;
	tsv.append("%T\tACTVCODE\n");
	tsv.append("%F\tactv_code_id\tactv_code_type_id\tparent_actv_code_id\tseq_num\tactv_code_name"
						 "\tshort_name\n");
	for(auto & actvcode : actvcodes){
		tsv.append(actvcode.tsv);
	}
	return tsv;
}
