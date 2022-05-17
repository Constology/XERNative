//
// Created by sorat on 12/05/2022.
//

#include "Rsrcrcat.h"
#include "../../Reader.h"

Rsrcrcat::Rsrcrcat(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj)
{
	reader = readerObj;
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
	update_tsv();
}

void Rsrcrcat::update_tsv()
{
	tsv = "%R\t";
	tsv.append(rsrc_id_str).append("\t").append(rsrc_catg_type_id_str).append("\t").append(rsrc_catg_id_str).append("\n");
}

std::string Rsrcrate::get_tsv()
{
	update_tsv();
	return tsv;
}