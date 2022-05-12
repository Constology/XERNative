//
// Created by sorat on 12/05/2022.
//

#include "Rsrcrcats.h"

void Rsrcrcats::add(const Rsrcrcat& rsrcrcat){ rsrcrcats.emplace_back(rsrcrcat); }

Rsrcrcat Rsrcrcats::findById(int id){
	for(auto & rsrcrcat : rsrcrcats){
		if(rsrcrcat.rsrc_id == id){
			return rsrcrcat;
		}
	}
	printf("Rsrcrcat not found");
	exit(EXIT_FAILURE);
}

std::vector<Rsrcrcat> Rsrcrcats::getAll(){
	return rsrcrcats;
}

std::string Rsrcrcats::get_tsv() const{
	std::string tsv;
	tsv.append("%T\tRSRCRCAT\n");
	tsv.append("%F\trsrc_id\trsrc_catg_type_id\trsrc_catg_id\n");
	for(auto & rsrcrcat : rsrcrcats){
		tsv.append(rsrcrcat.tsv);
	}
	return tsv;
}
