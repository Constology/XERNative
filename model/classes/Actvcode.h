//
// Created by Taraxtix on 06/05/2022.
//

#ifndef EXRPARSER_ACTVCODE_H
#define EXRPARSER_ACTVCODE_H

#include <iostream>
#include <vector>

class Actvcode
{
public:
	int actv_code_id;
	int actv_code_type_id;
	int parent_actv_code_id;
	int seq_num;
	std::string actv_code_name;
	std::string short_name;

	std::string tsv;

	Actvcode(const std::vector<std::string> header, const std::vector<std::string> params);
};

#endif // EXRPARSER_ACTVCODE_H
