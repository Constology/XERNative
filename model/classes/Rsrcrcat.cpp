//
// Created by sorat on 12/05/2022.
//

#include "Rsrcrcat.h"

Rsrcrcat::Rsrcrcat(const std::vector<std::string> header, const std::vector<std::string> params)
{
	tsv = "";
	for (int i = 0; i < params.size(); i++)
	{
		if (header.at(i) == "rsrc_id")
		{
			if (!params.at(i).empty())
			{
				rsrc_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "rsrc_catg_type_id")
		{
			if (!params.at(i).empty())
			{
				rsrc_catg_type_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "rsrc_catg_id")
		{
			if (!params.at(i).empty())
			{
				rsrc_catg_id = stoi(params.at(i));
			}
		}
	}
	tsv.append(std::to_string(rsrc_id)).append("\t").append(std::to_string(rsrc_catg_type_id)).append("\t").append(std::to_string(rsrc_catg_id)).append("\n");
}
