//
// Created by sorat on 12/05/2022.
//

#include "Projpcats.h"

void Projpcats::add(const Projpcat& projpcat){ projpcats.emplace_back(projpcat); }

Projpcat Projpcats::findById(int id){
	for(auto & projpcat : projpcats){
		if(projpcat.proj_id == id){
			return projpcat;
		}
	}
	printf("Projpcat not found");
	exit(EXIT_FAILURE);
}

std::vector<Projpcat> Projpcats::getAll(){
	return projpcats;
}

std::string Projpcats::get_tsv() const{
	std::string tsv;
	tsv.append("%T\tPROJPCAT\n");
	tsv.append("%F\tproj_id\tproj_catg_type_id\tproj_catg_id\n");
	for(auto & projpcat : projpcats){
		tsv.append(projpcat.tsv);
	}
	return tsv;
}
