//
// Created by Taraxtix on 07/05/2022.
//

#ifndef EXRPARSER_ACTVTYPES_H
#define EXRPARSER_ACTVTYPES_H

#include <vector>

#include "classes/Actvtype.h"

class Actvtypes{
public:
		void add(const Actvtype& account);

		Actvtype findById(int id);
		std::vector<Actvtype> getAll();


		std::string get_tsv();

		std::string get_tsv();

private:
		std::vector<Actvtype> actvtypes;
};


#endif //EXRPARSER_ACTVTYPES_H
