//
// Created by sorat on 12/05/2022.
//

#ifndef XERPARSER_PCATTYPE_H
#define XERPARSER_PCATTYPE_H

#include <iostream>
#include <vector>

class Pcatval;

class Reader;

class Pcattype
{
public:
	int proj_catg_type_id;
	int seq_num;
	int proj_catg_short_len;
	std::string proj_catg_type;
	std::string export_flag;

	std::string tsv;

	Pcattype(const std::string header[], const std::string params[], Reader *readerObj);
	std::vector<Pcatval> getProjectCodeValues();

private:
	Reader *reader;
};

#endif // XERPARSER_PCATTYPE_H
