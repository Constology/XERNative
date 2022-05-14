//
// Created by sorat on 12/05/2022.
//

#include "Taskproc.h"

Taskproc::Taskproc(const std::vector<std::string> header, const std::vector<std::string> params)
{
	tsv = "";
	for (int i = 0; i < params.size(); i++)
	{
		if (header.at(i) == "proc_id")
		{
			if (!params.at(i).empty())
			{
				proc_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "task_id")
		{
			if (!params.at(i).empty())
			{
				task_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "proj_id")
		{
			if (!params.at(i).empty())
			{
				proj_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "seq_num")
		{
			if (!params.at(i).empty())
			{
				seq_num = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "proc_name")
		{
			proc_name = params.at(i);
		}
		else if (header.at(i) == "complete_flag")
		{
			complete_flag = params.at(i);
		}
		else if (header.at(i) == "proc_wt")
		{
			proc_wt = params.at(i);
		}
		else if (header.at(i) == "complete_pct")
		{
			complete_pct = params.at(i);
		}
		else if (header.at(i) == "proc_descr")
		{
			proc_descr = params.at(i);
		}
	}
	tsv
		.append(std::to_string(proc_id))
		.append("\t")
		.append(std::to_string(task_id))
		.append("\t")
		.append(std::to_string(proj_id))
		.append("\t")
		.append(std::to_string(seq_num))
		.append("\t")
		.append(proc_name)
		.append("\t")
		.append(complete_flag)
		.append("\t")
		.append(proc_wt)
		.append("\t")
		.append(complete_pct)
		.append("\t")
		.append(proc_descr)
		.append("\n");
}
