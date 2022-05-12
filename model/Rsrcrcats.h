//
// Created by sorat on 12/05/2022.
//

#ifndef XERPARSER_RSRCRCATS_H
#define XERPARSER_RSRCRCATS_H

#include <vector>

#include "classes/Rsrcrcat.h"

class Rsrcrcats{
public:
		void add(const Rsrcrcat& rsrcrcat);

		Rsrcrcat findById(int id);
		std::vector<Rsrcrcat> getAll();


		std::string get_tsv() const;


private:
		std::vector<Rsrcrcat> rsrcrcats;
};


#endif //XERPARSER_RSRCRCATS_H
