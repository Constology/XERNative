//
// Created by sorat on 12/05/2022.
//

#include "Pcatvals.h"

void Pcatvals::add(const Pcatval& pcatval){ pcatvals.emplace_back(pcatval); }

Pcatval Pcatvals::findById(int id){
	for(auto & pcatval : pcatvals){
		if(pcatval.proj_catg_id == id){
			return pcatval;
		}
	}
	printf("Pcatval not found");
	exit(EXIT_FAILURE);
}

std::vector<Pcatval> Pcatvals::getAll(){
	return pcatvals;
}

std::string Pcatvals::get_tsv() const{
	std::string tsv;
	tsv.append("%T\tPCATVAL\n");
	tsv.append("%F\tproj_catg_id\tproj_catg_type_id\tseq_num\tacct_name\tparent_proj_catg_id"
						 "\tproj_catg_short_name\tproj_catg_name\n");
	for(auto & pcatval : pcatvals){
		tsv.append(pcatval.tsv);
	}
	return tsv;
}
