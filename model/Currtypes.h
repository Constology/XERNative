//
// Created by Taraxtix on 07/05/2022.
//

#ifndef EXRPARSER_CURRTYPES1_H
#define EXRPARSER_CURRTYPES1_H

#include <vector>

#include "classes/Currtype.h"

class Currtypes{
public:
		void add(const Currtype& account);

		Currtype findById(int id);
		std::vector<Currtype> getAll();
		std::string get_tsv() const;

	private:
		std::vector<Currtype> currtypes;
};


#endif //EXRPARSER_CURRTYPES1_H
