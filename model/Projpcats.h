//
// Created by sorat on 12/05/2022.
//

#ifndef XERPARSER_PROJPCATS_H
#define XERPARSER_PROJPCATS_H

#include <vector>

#include "classes/Projpcat.h"

class Projpcats{
public:
		void add(const Projpcat& projpcat);

		Projpcat findById(int id);
		std::vector<Projpcat> getAll();


		std::string get_tsv() const;


private:
		std::vector<Projpcat> projpcats;
};


#endif //XERPARSER_PROJPCATS_H
