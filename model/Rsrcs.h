//
// Created by sorat on 12/05/2022.
//

#ifndef XERPARSER_RSRCS_H
#define XERPARSER_RSRCS_H

#include <vector>

#include "classes/Rsrc.h"

class Rsrcs{
public:
		void add(const Rsrc& rsrc);

		Rsrc findById(int id);
		std::vector<Rsrc> getAll();


		std::string get_tsv() const;


private:
		std::vector<Rsrc> rsrcs;
};


#endif //XERPARSER_RSRCS_H
