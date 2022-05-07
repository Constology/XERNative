//
// Created by sorat on 07/05/2022.
//

#include "Actvtypes.h"

void Actvtypes::add(const Actvtype& actvtype){ actvtypes.emplace_back(actvtype); }

Actvtype Actvtypes::findById(int id){
	for(auto & actvtype : actvtypes){
		if(actvtype.actv_code_type_id == id){
			return actvtype;
		}
	}
	printf("Account not found");
	exit(EXIT_FAILURE);
}
