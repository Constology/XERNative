

#ifndef XERPARSER_OBSS_H
#define XERPARSER_OBSS_H

#include "classes/Obs.h"

#include <vector>

class Obss
{
public:
	void add(Obs &obs);

	Obs findById(int id);
	std::vector<Obs> getAll();

	std::string get_tsv();

private:
	std::vector<Obs> obss;
};

#endif // XERPARSER_OBSS_H
