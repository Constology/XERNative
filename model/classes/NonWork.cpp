//
// Created by Taraxtix on 10/05/2022.
//

#include "NonWork.h"

NonWork::NonWork(const std::vector<std::string> header, const std::vector<std::string> params)
{
	tsv = "";
	for (int i = 0; i < header.size(); i++)
	{
		if (header.at(i) == "nonwork_type_id")
		{
			if (!params.at(i).empty())
			{
				nonwork_type_id = std::stoi(params.at(i));
			}
		}
		else if (header.at(i) == "seq_num")
		{
			if (!params.at(i).empty())
			{
				seq_num = std::stoi(params.at(i));
			}
		}
		else if (header.at(i) == "nonwork_code")
		{
			nonwork_code = params.at(i);
		}
		else if (header.at(i) == "nonwork_type")
		{
			nonwork_type = params.at(i);
		}
	}
	tsv.append(std::to_string(nonwork_type_id)).append("\t").append(std::to_string(seq_num)).append("\t").append(nonwork_code).append("\t").append(nonwork_type).append("\n");
}