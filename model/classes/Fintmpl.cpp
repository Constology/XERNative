//
// Created by sorat on 11/05/2022.
//

#include "Fintmpl.h"

Fintmpl::Fintmpl(const std::vector<std::string> header, const std::vector<std::string> params)
{
	tsv = "";
	for (int i = 0; i < header.size(); i++)
	{
		if (header.at(i) == "fintmpl_id")
		{
			if (!params.at(i).empty())
			{
				fintmpl_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "fintmpl_name")
		{
			fintmpl_name = params.at(i);
		}
		else if (header.at(i) == "default_flag")
		{
			default_flag = params.at(i);
		}
	}
	tsv.append(std::to_string(fintmpl_id)).append("\t").append(fintmpl_name).append("\t").append(default_flag).append("\n");
}
