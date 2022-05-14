//
// Created by sorat on 12/05/2022.
//

#include "Taskactv.h"

Taskactv::Taskactv(const std::vector<std::string> header, const std::vector<std::string> params)
{
	tsv = "";
	for (int i = 0; i < params.size(); i++)
	{
		if (header.at(i) == "task_id")
		{
			if (!params.at(i).empty())
			{
				task_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "actv_code_type_id")
		{
			if (!params.at(i).empty())
			{
				actv_code_type_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "actv_code_id")
		{
			if (!params.at(i).empty())
			{
				actv_code_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "proj_id")
		{
			if (!params.at(i).empty())
			{
				proj_id = stoi(params.at(i));
			}
		}
	}
	tsv
		.append(std::to_string(task_id))
		.append("\t")
		.append(std::to_string(actv_code_type_id))
		.append("\t")
		.append(std::to_string(actv_code_id))
		.append("\t")
		.append(std::to_string(proj_id))
		.append("\n");
}
