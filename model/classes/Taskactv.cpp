
#include "Taskactv.h"
#include "../../Reader.h"

Taskactv::Taskactv(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj)
{
	reader = readerObj;
	tsv = "";
	for (int i = 0; i < params.size(); i++)
	{
		if (header.at(i) == "task_id")
		{
			if (!params.at(i).empty())
			{
				task_id = stoi(params.at(i));
				task_id_str = params.at(i);
			}
		}
		else if (header.at(i) == "actv_code_type_id")
		{
			if (!params.at(i).empty())
			{
				actv_code_type_id = stoi(params.at(i));
				actv_code_type_id_str = params.at(i);
			}
		}
		else if (header.at(i) == "actv_code_id")
		{
			if (!params.at(i).empty())
			{
				actv_code_id = stoi(params.at(i));
				actv_code_id_str = params.at(i);
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
	}
}

void Taskactv::update_tsv()
{
	tsv = "%R\t";
	tsv
		.append(task_id_str)
		.append("\t")
		.append(actv_code_type_id_str)
		.append("\t")
		.append(actv_code_id_str)
		.append("\t")
		.append(proj_id_str)
		.append("\n");
}

std::string Taskactv::get_tsv()
{
	update_tsv();
	return tsv;
}
