

#include "Taskproc.h"
#include "../../Reader.h"

Taskproc::Taskproc(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj)
{
	reader = readerObj;
	tsv = "";
	for (int i = 0; i < params.size(); i++)
	{
		if (header.at(i) == "proc_id")
		{
			if (!params.at(i).empty())
			{
				proc_id = stoi(params.at(i));
				proc_id_str = params.at(i);
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
		else if (header.at(i) == "proj_id")
		{
			if (!params.at(i).empty())
			{
				proj_id = stoi(params.at(i));
				proj_id_str = params.at(i);
			}
		}
		else if (header.at(i) == "seq_num")
		{
			if (!params.at(i).empty())
			{
				seq_num = stoi(params.at(i));
				seq_num_str = params.at(i);
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
	update_tsv();
}

void Taskproc::update_tsv()
{
	tsv = "%R\t";
	tsv
		.append(proc_id_str)
		.append("\t")
		.append(task_id_str)
		.append("\t")
		.append(proj_id_str)
		.append("\t")
		.append(seq_num_str)
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

std::string Taskproc::get_tsv()
{
	update_tsv();
	return tsv;
}
int Taskproc::getProcId() { return proc_id; }
void Taskproc::setProcId(int value)
{
	if (value > 0)
	{
		proc_id = value;
		proc_id_str = std::to_string(value);
	}
}
int Taskproc::getTaskId() { return task_id; }
void Taskproc::setTaskId(int value)
{
	if (value > 0)
	{
		task_id = value;
		task_id_str = std::to_string(value);
	}
}
int Taskproc::getProjId() { return proj_id; }
void Taskproc::setProjId(int value)
{
	if (value > 0)
	{
		proj_id = value;
		proj_id_str = std::to_string(value);
	}
}
int Taskproc::getSeqNum() { return seq_num; }
void Taskproc::setSeqNum(int value)
{
	if (value > 0)
	{
		seq_num = value;
		seq_num_str = std::to_string(value);
	}
}
std::string Taskproc::getProcName() { return proc_name; }
void Taskproc::setProcName(std::string value)
{
	if (!value.empty())
	{
		proc_name = value;
	}
}
std::string Taskproc::getCompleteFlag() { return complete_flag; }
void Taskproc::setCompleteFlag(std::string value)
{
	if (!value.empty())
	{
		complete_flag = value;
	}
}
std::string Taskproc::getProcWt() { return proc_wt; }
void Taskproc::setProcWt(std::string value)
{
	if (!value.empty())
	{
		proc_wt = value;
	}
}
std::string Taskproc::getCompletePct() { return complete_pct; }
void Taskproc::setCompletePct(std::string value)
{
	if (!value.empty())
	{
		complete_pct = value;
	}
}
std::string Taskproc::getProcDescr() { return proc_descr; }
void Taskproc::setProcDescr(std::string value)
{
	if (!value.empty())
	{
		proc_descr = value;
	}
}