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

std::string Udf::get_tsv() {
	update_tsv();
	return tsv;
}

int Udf::getUdfTypeId() { return udf_type_id; }
void Udf::setUdfTypeId(int value)
{
	if (value > 0)
	{
		udf_type_id = value;
		udf_type_id_str = std::to_string(value);
	}
}
int Udf::getFkId() { return fk_id; }
void Udf::setFkId(int value)
{
	if (value > 0)
	{
		fk_id = value;
		fk_id_str = std::to_string(value);
	}
}
int Udf::getProjId() { return proj_id; }
void Udf::setProjId(int value)
{
	if (value > 0)
	{
		proj_id = value;
		proj_id_str = std::to_string(value);
	}
}
std::string Udf::getUdfDate() { return udf_date; }
void Udf::setUdfDate(std::string value)
{
	if (!value.empty())
	{
		udf_date = value;
	}
}
double Udf::getUdfNumber() { return udf_number; }
void Udf::setUdfNumber(double value)
{
	if (value > 0.0f)
	{
		udf_number = value;
		udf_number_str = std::to_string(value);
	}
}
std::string Udf::getUdfText() { return udf_text; }
void Udf::setUdfText(std::string value)
{
	if (!value.empty())
	{
		udf_text = value;
	}
}
int Udf::getUdfCodeId() { return udf_code_id; }
void Udf::setUdfCodeId(int value)
{
	if (value > 0)
	{
		udf_code_id = value;
		udf_code_id_str = std::to_string(value);
	}
}