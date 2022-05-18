
#include "Rsrcrcat.h"
#include "../../Reader.h"

Rsrcrcat::Rsrcrcat(std::vector<std::string> header, std::vector<std::string> params, Reader *readerObj)
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

std::string Rsrcrcat::get_tsv()
{
	update_tsv();
	return tsv;
}

int Rsrcrcat::getRsrcId() { return rsrc_id; }
void Rsrcrcat::setRsrcId(int value)
{
	if (value > 0)
	{
		rsrc_id = value;
		rsrc_id_str = std::to_string(value);
	}
}
int Rsrcrcat::getRsrcCatgTypeId() { return rsrc_catg_type_id; }
void Rsrcrcat::setRsrcCatgTypeId(int value)
{
	if (value > 0)
	{
		rsrc_catg_type_id = value;
		rsrc_catg_type_id_str = std::to_string(value);
	}
}
int Rsrcrcat::getRsrcCatgId() { return rsrc_catg_id; }
void Rsrcrcat::setRsrcCatgId(int value)
{
	if (value > 0)
	{
		rsrc_catg_id = value;
		rsrc_catg_id_str = std::to_string(value);
	}
}
