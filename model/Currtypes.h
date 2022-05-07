//
// Created by sorat on 07/05/2022.
//

#ifndef EXRPARSER_CURRTYPES_H
#define EXRPARSER_CURRTYPES_H

#include <vector>

#include "classes/Currtype.h"

class Currtypes{
public:
		void add(const Currtype& account);

		Currtype findById(int id);

private:
		std::vector<Currtype> currtypes;
};


#endif //EXRPARSER_CURRTYPES_H
