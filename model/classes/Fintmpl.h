//
// Created by Taraxtix on 11/05/2022.
//

#ifndef XERPARSER_FINTMPL_H
#define XERPARSER_FINTMPL_H

#include <iostream>
#include <vector>

class Fintmpl
{
public:
	int fintmpl_id;
	std::string fintmpl_name;
	std::string default_flag;

	std::string tsv;

	Fintmpl(const std::vector<std::string> header, const std::vector<std::string> params);
};

#endif // XERPARSER_FINTMPL_H
