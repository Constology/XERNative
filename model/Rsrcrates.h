
#ifndef XERPARSER_RSRCRATES_H
#define XERPARSER_RSRCRATES_H

#include <vector>

#include "classes/Rsrcrate.h"

class Rsrcrates
{
public:
	void add(Rsrcrate &rsrcrate);

	Rsrcrate findById(int id);
	std::vector<Rsrcrate> getAll();

	std::string get_tsv();
	std::vector<Rsrcrate> getByRsrcId(int id);

private:
	std::vector<Rsrcrate> rsrcrates;
};

#endif // XERPARSER_RSRCRATES_H
