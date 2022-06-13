
#ifndef XERPARSER_TASKACTVS_H
#define XERPARSER_TASKACTVS_H

#include <vector>

#include "classes/Taskactv.h"

class Taskactvs
{
public:
	void add(Taskactv &taskactv);

	Taskactv findById(int id);
	std::vector<Taskactv> getAll();

	std::string get_tsv();

private:
	std::vector<Taskactv> taskactvs;
};

#endif // XERPARSER_TASKACTVS_H
