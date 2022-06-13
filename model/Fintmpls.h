
#ifndef XERPARSER_FINTMPLS_H
#define XERPARSER_FINTMPLS_H

#include <vector>

#include "classes/Fintmpl.h"

class Fintmpls
{
public:
	void add(Fintmpl &fintmpl);

	Fintmpl findById(int id);
	std::vector<Fintmpl> getAll();

	std::string get_tsv();

private:
	std::vector<Fintmpl> fintmpls;
};

#endif // XERPARSER_FINTMPLS_H
