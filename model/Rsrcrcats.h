#ifndef XERPARSER_RSRCRCATS_H
#define XERPARSER_RSRCRCATS_H

#include <vector>

#include "classes/Rsrcrcat.h"

class Rsrcrcats
{
public:
	void add(Rsrcrcat &rsrcrcat);

	Rsrcrcat findById(int id);
	std::vector<Rsrcrcat> getAll();

	std::string get_tsv();

private:
	std::vector<Rsrcrcat> rsrcrcats;
};

#endif // XERPARSER_RSRCRCATS_H
