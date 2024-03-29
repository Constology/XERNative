
#ifndef XERPARSER_PROJPCATS_H
#define XERPARSER_PROJPCATS_H

#include <vector>

#include "classes/Projpcat.h"

class Projpcats
{
public:
	void add(Projpcat &projpcat);

	Projpcat findById(int id);
	std::vector<Projpcat> getAll();

	std::string get_tsv();
	std::vector<Projpcat> getByProjectId(int id);
	std::vector<Projpcat> getById(int id);

private:
	std::vector<Projpcat> projpcats;
};

#endif // XERPARSER_PROJPCATS_H
