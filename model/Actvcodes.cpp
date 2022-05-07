//
// Created by Taraxtix on 07/05/2022.
//

#include "Actvcodes.h"

void Actvcodes::add(const Actvcode& account){ actvcodes.emplace_back(account); }

Actvcode Actvcodes::findById(int id){
	for(auto & actvcode : actvcodes){
		if(actvcode.actv_code_id == id){
			return actvcode;
		}
	}
	printf("Account not found");
	exit(EXIT_FAILURE);
}
