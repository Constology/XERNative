
#include "Taskpred.h"
#include "../../Reader.h"

Taskpred::Taskpred(std::vector<std::string> header, std::vector<std::string> params, Reader *readerObj)
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

int Taskpred::getTaskPredId() { return task_pred_id; }
void Taskpred::setTaskPredId(int value)
{
	if (value > 0)
	{
		task_pred_id = value;
		task_pred_id_str = std::to_string(value);
	}
}
int Taskpred::getTaskId() { return task_id; }
void Taskpred::setTaskId(int value)
{
	if (value > 0)
	{
		task_id = value;
		task_id_str = std::to_string(value);
	}
}
int Taskpred::getPredTaskId() { return pred_task_id; }
void Taskpred::setPredTaskId(int value)
{
	if (value > 0)
	{
		pred_task_id = value;
		pred_task_id_str = std::to_string(value);
	}
}
int Taskpred::getProjId() { return proj_id; }
void Taskpred::setProjId(int value)
{
	if (value > 0)
	{
		proj_id = value;
		proj_id_str = std::to_string(value);
	}
}
int Taskpred::getPredProjId() { return pred_proj_id; }
void Taskpred::setPredProjId(int value)
{
	if (value > 0)
	{
		pred_proj_id = value;
		pred_proj_id_str = std::to_string(value);
	}
}
std::string Taskpred::getPredType() { return pred_type; }
void Taskpred::setPredType(std::string value)
{
	if (!value.empty())
	{
		pred_type = value;
	}
}
std::string Taskpred::getLagHrCnt() { return lag_hr_cnt; }
void Taskpred::setLagHrCnt(std::string value)
{
	if (!value.empty())
	{
		lag_hr_cnt = value;
	}
}
std::string Taskpred::getComments() { return comments; }
void Taskpred::setComments(std::string value)
{
	if (!value.empty())
	{
		comments = value;
	}
}
std::string Taskpred::getFloatPath() { return float_path; }
void Taskpred::setFloatPath(std::string value)
{
	if (!value.empty())
	{
		float_path = value;
	}
}
std::string Taskpred::getAref() { return aref; }
void Taskpred::setAref(std::string value)
{
	if (!value.empty())
	{
		aref = value;
	}
}
std::string Taskpred::getArls() { return arls; }
void Taskpred::setArls(std::string value)
{
	if (!value.empty())
	{
		arls = value;
	}
}
