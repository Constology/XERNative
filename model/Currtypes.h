#ifndef EXRPARSER_CURRTYPES1_H
#define EXRPARSER_CURRTYPES1_H

#include <vector>

#include "classes/Currtype.h"

class Currtypes
{
public:
	void add(Currtype &account);

	Currtype findById(int id);
	std::vector<Currtype> getAll();
	std::string get_tsv();

private:
	std::vector<Currtype> currtypes;
};

#endif // EXRPARSER_CURRTYPES1_H
