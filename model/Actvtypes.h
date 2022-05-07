//
// Created by sorat on 07/05/2022.
//

#ifndef EXRPARSER_ACTVTYPES_H
#define EXRPARSER_ACTVTYPES_H

#include <vector>

#include "classes/Actvtype.h"

class Actvtypes{
public:
		void add(const Actvtype& account);

		Actvtype findById(int id);

private:
		std::vector<Actvtype> actvtypes;
};


#endif //EXRPARSER_ACTVTYPES_H
