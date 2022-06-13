#ifndef XERPARSER_RSRCCURVDATAS_H
#define XERPARSER_RSRCCURVDATAS_H

#include <vector>

#include "classes/Rsrccurvdata.h"

class Rsrccurvdatas
{
public:
	void add(Rsrccurvdata &rsrccurvdata);

	Rsrccurvdata findById(int id);
	std::vector<Rsrccurvdata> getAll();

	std::string get_tsv();

private:
	std::vector<Rsrccurvdata> rsrccurvdatas;
};

#endif // XERPARSER_RSRCCURVDATAS_H
