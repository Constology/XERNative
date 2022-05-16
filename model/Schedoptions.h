//
// Created by sorat on 12/05/2022.
//

#ifndef XERPARSER_SCHEDOPTIONS_H
#define XERPARSER_SCHEDOPTIONS_H

#include <vector>

#include "classes/Schedoption.h"

class Schedoptions
{
public:
	void add(Schedoption &schedoption);

	Schedoption findById(int id);
	std::vector<Schedoption> getAll();

	std::string get_tsv();

private:
	std::vector<Schedoption> schedoptions;
};

#endif // XERPARSER_SCHEDOPTIONS_H
