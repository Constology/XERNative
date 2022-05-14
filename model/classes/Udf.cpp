#include "Udf.h"

Udf::Udf(const std::vector<std::string> header, const std::vector<std::string> params)
{
	tsv = "";
	for (int i = 0; i < header.size(); i++)
	{
		if (header.at(i) == "udf_code_id")
		{
			if (!params.at(i).empty())
			{
				udf_code_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "fk_id")
		{
			if (!params.at(i).empty())
			{
				fk_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "proj_id")
		{
			if (!params.at(i).empty())
			{
				proj_id = stoi(params.at(i));
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
			}
		}
	}
	tsv.append(std::to_string(udf_code_id)).append("\t").append(std::to_string(fk_id)).append("\t").append(std::to_string(proj_id)).append("\t").append(udf_date).append("\t").append(std::to_string(udf_number)).append("\t").append(udf_text).append("\t").append(std::to_string(udf_code_id)).append("\n");
}

std::string Udf::get_tsv() { return tsv; }