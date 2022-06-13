
#ifndef XERPARSER_NONWORKS_H
#define XERPARSER_NONWORKS_H

#include "classes/NonWork.h"

#include <vector>

class NonWorks
{
public:
	void add(NonWork &nonWork);

	NonWork findById(int id);
	std::vector<NonWork> getAll();

	std::string get_tsv();

private:
	std::vector<NonWork> nonWorks;
};

#endif // XERPARSER_NONWORKS_H
