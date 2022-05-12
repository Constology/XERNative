//
// Created by sorat on 12/05/2022.
//

#ifndef XERPARSER_RSRCRCAT_H
#define XERPARSER_RSRCRCAT_H

#include <iostream>

class Rsrcrcat{
public:
		int rsrc_id;
		int rsrc_catg_type_id;
		int rsrc_catg_id;

		std::string tsv;

		Rsrcrcat(const std::string *header, const std::string *params);
};


#endif //XERPARSER_RSRCRCAT_H
