//
// Created by Taraxtix on 10/05/2022.
//

#ifndef XERPARSER_NONWORKS_H
#define XERPARSER_NONWORKS_H

#include "classes/NonWork.h"

#include <vector>

class NonWorks{
public:
		void add(const NonWork& nonWork);

		NonWork findById(int id);
		std::vector<NonWork> getAll();


		std::string get_tsv() const;


private:
		std::vector<NonWork> nonWorks;
};


#endif //XERPARSER_NONWORKS_H
