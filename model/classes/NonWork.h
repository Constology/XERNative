//
// Created by Taraxtix on 10/05/2022.
//

#ifndef XERPARSER_NONWORK_H
#define XERPARSER_NONWORK_H

#include <iostream>
#include <vector>

class NonWork
{
public:
	int nonwork_type_id;
	int seq_num;
	std::string nonwork_code;
	std::string nonwork_type;

	std::string tsv;

	NonWork(const std::vector<std::string> header, const std::vector<std::string> params);
};

#endif // XERPARSER_NONWORK_H
