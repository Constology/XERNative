//
// Created by sorat on 12/05/2022.
//

#include "Projpcat.h"
#include "../../Reader.h"

Projpcat::Projpcat(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj)
{
	tsv = "";
	for (int i = 0; i < params.size(); i++)
	{
		if (header.at(i) == "proj_id")
		{
			if (!params.at(i).empty())
			{
				proj_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "proj_catg_type_id")
		{
			if (!params.at(i).empty())
			{
				proj_catg_type_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "proj_catg_id")
		{
			if (!params.at(i).empty())
			{

				proj_catg_id = stoi(params.at(i));
			}
		}
	}

	reader = readerObj;
	tsv
		.append(std::to_string(proj_id))
		.append("\t")
		.append(std::to_string(proj_catg_type_id))
		.append("\t")
		.append(std::to_string(proj_catg_id))
		.append("\n");
}

Pcatval Projpcat::getValue()
{
	return reader->pcatvals.findById(proj_catg_id);
}
