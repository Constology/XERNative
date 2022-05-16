//
// Created by Taraxtix on 07/05/2022.
//

#ifndef EXRPARSER_ACTVCODES_H
#define EXRPARSER_ACTVCODES_H

#include <vector>

#include "classes/Actvcode.h"

class Actvcodes{
public:
		void add(Actvcode& account);

		Actvcode findById(int id);
		std::vector<Actvcode> getAll();


		std::string get_tsv();

private:
		std::vector<Actvcode> actvcodes;
};


#endif //EXRPARSER_ACTVCODES_H
