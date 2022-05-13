//
// Created by sorat on 12/05/2022.
//

#include "Projpcat.h"
#include "../../Reader.h"

Projpcat::Projpcat(const std::string *header, const std::string *params, Reader *readerObj)
{
	tsv = "";
	for (uint i = 0; i < params->length(); i++)
	{
		if (header[i] == "proj_id")
		{
			if (!params[i].empty())
			{
				proj_id = stoi(params[i]);
			}
		}
		else if (header[i] == "proj_catg_type_id")
		{
			if (!params[i].empty())
			{
				proj_catg_type_id = stoi(params[i]);
			}
		}
		else if (header[i] == "proj_catg_id")
		{
			if (!params[i].empty())
			{

				proj_catg_id = stoi(params[i]);
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
