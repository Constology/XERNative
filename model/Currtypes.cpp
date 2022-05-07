//
// Created by sorat on 07/05/2022.
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
