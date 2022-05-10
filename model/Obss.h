//
// Created by sorat on 10/05/2022.
//

#ifndef XERPARSER_OBSS_H
#define XERPARSER_OBSS_H

#include "classes/Obs.h"

#include <vector>

class Obss{
public:
		void add(const Obs& obs);

		Obs findById(int id);
		std::vector<Obs> getAll();


		std::string get_tsv() const;


private:
		std::vector<Obs> obss;
};


#endif //XERPARSER_OBSS_H
