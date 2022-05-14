//
// Created by sorat on 12/05/2022.
//

#include "Pcattype.h"
#include "../../Reader.h"
#include "Pcatval.h"

Pcattype::Pcattype(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj)
{
	tsv = "";
	for (int i = 0; i < params.size(); i++)
	{
		if (header.at(i) == "proj_catg_type_id")
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
		else if (header.at(i) == "proj_catg_short_len")
		{
			proj_catg_short_len = stoi(params.at(i));
		}
		else if (header.at(i) == "proj_catg_type")
		{
			proj_catg_type = params.at(i);
		}
		else if (header.at(i) == "export_flag")
		{
			export_flag = params.at(i);
		}
	}
	reader = readerObj;
	tsv.append(std::to_string(proj_catg_type_id)).append("\t").append(std::to_string(seq_num)).append("\t").append(std::to_string(proj_catg_short_len)).append("\t").append(proj_catg_type).append("\t").append(export_flag).append("\n");
}

std::vector<Pcatval> Pcattype::getProjectCodeValues()
{
	return reader->pcatvals.getByTypeId(proj_catg_type_id);
}