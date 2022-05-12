//
// Created by sorat on 12/05/2022.
//

#ifndef XERPARSER_PCATTYPES_H
#define XERPARSER_PCATTYPES_H


#include <vector>

#include "classes/Pcattype.h"

class Pcattypes{
public:
		void add(const Pcattype& pcattype);

		Pcattype findById(int id);
		std::vector<Pcattype> getAll();


		std::string get_tsv() const;


private:
		std::vector<Pcattype> pcattypes;
};


#endif //XERPARSER_PCATTYPES_H
