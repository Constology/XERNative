//
// Created by sorat on 12/05/2022.
//

#ifndef XERPARSER_PROJPCAT_H
#define XERPARSER_PROJPCAT_H

#include <vector>
#include "../Pcattypes.h"
#include "../Pcatvals.h"

class Reader;

class Projpcat
{
public:
	int proj_id;
	int proj_catg_type_id;
	int proj_catg_id;

	std::string tsv;
	// std::vector<Pcattype> getTypes();
	Pcatval getValue();
	Projpcat(const std::string *header, const std::string *params, Reader *readerObj);

private:
	Reader *reader;
};

#endif // XERPARSER_PROJPCAT_H
