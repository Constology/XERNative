//
// Created by sorat on 12/05/2022.
//

#include "Pcatval.h"
#include "../../Reader.h"

Pcatval::Pcatval(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj)
{
	tsv = "";
	for (int i = 0; i < params.size(); i++)
	{
		if (header.at(i) == "proj_catg_id")
		{
			if (!params.at(i).empty())
			{
				proj_catg_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "proj_catg_type_id")
		{
			if (!params.at(i).empty())
			{
				proj_catg_type_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "seq_num")
		{
			if (!params.at(i).empty())
			{
				seq_num = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "parent_proj_catg_id")
		{
			if (!params.at(i).empty())
			{
				parent_proj_catg_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "proj_catg_short_name")
		{
			proj_catg_short_name = params.at(i);
		}
		else if (header.at(i) == "proj_catg_name")
		{
			proj_catg_name = params.at(i);
		}
	}

	reader = readerObj;
	tsv.append(std::to_string(proj_catg_id)).append("\t").append(std::to_string(proj_catg_type_id)).append("\t").append(std::to_string(seq_num)).append("\t").append(std::to_string(parent_proj_catg_id)).append("\t").append(proj_catg_short_name).append("\t").append(proj_catg_name).append("\n");
}

Pcattype Pcatval::getType()
{
	return reader->pcattypes.findById(proj_catg_type_id);
}
