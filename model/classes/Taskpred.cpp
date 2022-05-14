//
// Created by sorat on 12/05/2022.
//

#include "Taskpred.h"

Taskpred::Taskpred(const std::vector<std::string> header, const std::vector<std::string> params)
{
	tsv = "";
	for (int i = 0; i < params.size(); i++)
	{
		if (header.at(i) == "task_pred_id")
		{
			if (!params.at(i).empty())
			{
				task_pred_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "task_id")
		{
			if (!params.at(i).empty())
			{
				task_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "pred_task_id")
		{
			if (!params.at(i).empty())
			{
				pred_task_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "proj_id")
		{
			if (!params.at(i).empty())
			{
				proj_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "pred_proj_id")
		{
			if (!params.at(i).empty())
			{
				pred_proj_id = stoi(params.at(i));
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
	tsv.append(std::to_string(task_pred_id)).append("\t").append(std::to_string(task_id)).append("\t").append(std::to_string(pred_task_id)).append("\t").append(std::to_string(proj_id)).append("\t").append(std::to_string(pred_proj_id)).append("\t").append(pred_type).append("\t").append(lag_hr_cnt).append("\t").append(comments).append("\t").append(float_path).append("\t").append(aref).append("\t").append(arls).append("\n");
}
