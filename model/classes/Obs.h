//
// Created by sorat on 10/05/2022.
//

#ifndef XERPARSER_OBS_H
#define XERPARSER_OBS_H

#include <iostream>
#include <vector>

class Obs
{
public:
	int obs_id;
	int guid;
	std::string obs_name;
	std::string obs_descr;
	int parent_obs_id;
	int seq_num;

	std::string tsv;

	Obs(const std::vector<std::string> header, const std::vector<std::string> params);
};

#endif // XERPARSER_OBS_H
