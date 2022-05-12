//
// Created by sorat on 12/05/2022.
//

#ifndef XERPARSER_PROJPCAT_H
#define XERPARSER_PROJPCAT_H

#include <iostream>

class Projpcat{
public:
		int proj_id;
		int proj_catg_type_id;
		int proj_catg_id;

		std::string tsv;

		Projpcat(const std::string *header, const std::string *params);
};


#endif //XERPARSER_PROJPCAT_H
