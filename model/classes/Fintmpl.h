//
// Created by Taraxtix on 11/05/2022.
//

#ifndef XERPARSER_FINTMPL_H
#define XERPARSER_FINTMPL_H

#include <iostream>

class Fintmpl{
public:
		int fintmpl_id;
		std::string fintmpl_name;
		std::string default_flag;

		std::string tsv;

		Fintmpl(const std::string *header, const std::string *params);
};


#endif //XERPARSER_FINTMPL_H
