//
// Created by sorat on 12/05/2022.
//

#ifndef XERPARSER_RSRCRATES_H
#define XERPARSER_RSRCRATES_H

#include <vector>

#include "classes/Rsrcrate.h"

class Rsrcrates
{
public:
	void add(const Rsrcrate &rsrcrate);

	Rsrcrate findById(int id);
	std::vector<Rsrcrate> getAll();

	std::string get_tsv() const;
	std::vector<Rsrcrate> getByRsrcId(int id);

private:
	std::vector<Rsrcrate> rsrcrates;
};

#endif // XERPARSER_RSRCRATES_H
