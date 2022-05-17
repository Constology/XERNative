#include "Udf.h"
#include "../../Reader.h"

Udf::Udf(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj)
{
	reader = readerObj;
	tsv = "";
	for (int i = 0; i < header.size(); i++)
	{
		if (header.at(i) == "udf_code_id")
		{
			if (!params.at(i).empty())
			{
				udf_code_id = stoi(params.at(i));
				udf_code_id_str = params.at(i);
			}
		}
		else if (header.at(i) == "fk_id")
		{
			if (!params.at(i).empty())
			{
				fk_id = stoi(params.at(i));
				fk_id_str = params.at(i);
			}
		}
		else if (header.at(i) == "proj_id")
		{
			if (!params.at(i).empty())
			{
				proj_id = stoi(params.at(i));
				proj_id_str = params.at(i);
			}
		}
		else if (header.at(i) == "udf_date")
		{
			udf_date = params.at(i);
		}
		else if (header.at(i) == "udf_number")
		{
			if (!params.at(i).empty())
			{
				udf_number = stod(params.at(i));
				udf_number_str = params.at(i);
			}
		}
		else if (header.at(i) == "udf_text")
		{
			udf_text = params.at(i);
		}
		else if (header.at(i) == "udf_code_id")
		{
			if (!params.at(i).empty())
			{
				udf_code_id = stoi(params.at(i));
				udf_code_id_str = params.at(i);
			}
		}
	}
	update_tsv();
}

void Udf::update_tsv()
{
	tsv = "%R\t";
	tsv
		.append(udf_code_id_str)
		.append("\t")
		.append(fk_id_str)
		.append("\t")
		.append(proj_id_str)
		.append("\t")
		.append(udf_date)
		.append("\t")
		.append(udf_number_str)
		.append("\t")
		.append(udf_text)
		.append("\t")
		.append(udf_code_id_str)
		.append("\n");
}

std::string Udf::get_tsv() { return tsv; }