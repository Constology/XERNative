
#include "Taskpred.h"
#include "../../Reader.h"

Taskpred::Taskpred(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj)
{
	reader = readerObj;
	tsv = "";
	for (int i = 0; i < params.size(); i++)
	{
		if (header.at(i) == "task_pred_id")
		{
			if (!params.at(i).empty())
			{
				task_pred_id = stoi(params.at(i));
				task_pred_id_str = params.at(i);
			}
		}
		else if (header.at(i) == "task_id")
		{
			if (!params.at(i).empty())
			{
				task_id = stoi(params.at(i));
				task_id_str = params.at(i);
			}
		}
		else if (header.at(i) == "pred_task_id")
		{
			if (!params.at(i).empty())
			{
				pred_task_id = stoi(params.at(i));
				pred_task_id_str = params.at(i);
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
		else if (header.at(i) == "pred_proj_id")
		{
			if (!params.at(i).empty())
			{
				pred_proj_id = stoi(params.at(i));
				pred_proj_id_str = params.at(i);
			}
		}
		else if (header.at(i) == "pred_type")
		{
			pred_type = params.at(i);
		}
		else if (header.at(i) == "lag_hr_cnt")
		{
			lag_hr_cnt = params.at(i);
		}
		else if (header.at(i) == "comments")
		{
			comments = params.at(i);
		}
		else if (header.at(i) == "float_path")
		{
			float_path = params.at(i);
		}
		else if (header.at(i) == "aref")
		{
			aref = params.at(i);
		}
		else if (header.at(i) == "arls")
		{
			arls = params.at(i);
		}
	}
	update_tsv();
}

void Taskpred::update_tsv()
{
	tsv = "%R\t";
	tsv
		.append(task_pred_id_str)
		.append("\t")
		.append(task_id_str)
		.append("\t")
		.append(pred_task_id_str)
		.append("\t")
		.append(proj_id_str)
		.append("\t")
		.append(pred_proj_id_str)
		.append("\t")
		.append(pred_type)
		.append("\t")
		.append(lag_hr_cnt)
		.append("\t")
		.append(comments)
		.append("\t")
		.append(float_path)
		.append("\t")
		.append(aref)
		.append("\t")
		.append(arls)
		.append("\n");
}

std::string Taskpred::get_tsv()
{
	update_tsv();
	return tsv;
}