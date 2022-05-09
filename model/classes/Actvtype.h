//
// Created by Taraxtix on 07/05/2022.
//

#ifndef EXRPARSER_ACTVTYPE_H
#define EXRPARSER_ACTVTYPE_H

#include <iostream>

class Actvtype{
public:
		int actv_code_type_id;
		int proj_id;
		int seq_num;
		float actv_short_len;
		std::string actv_code_type;
		std::string actv_code_type_scope;
		std::string super_flag;

		std::string tsv;

		Actvtype(const std::string *header, const std::string *params);
};


#endif //EXRPARSER_ACTVTYPE_H
