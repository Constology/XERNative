//
// Created by sorat on 10/05/2022.
//

#include "Obs.h"

Obs::Obs(const std::vector<std::string> header, const std::vector<std::string> params)
{
	tsv = "";
	for (int i = 0; i < header.size(); i++)
	{
		if (header.at(i) == "obs_id")
		{
			if (!params.at(i).empty())
			{
				obs_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "guid")
		{
			if (!params.at(i).empty())
			{
				guid = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "obs_name")
		{
			obs_name = params.at(i);
		}
		else if (header.at(i) == "obs_descr")
		{
			obs_descr = params.at(i);
		}
		else if (header.at(i) == "parent_obs_id")
		{
			if (!params.at(i).empty())
			{
				parent_obs_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "seq_num")
		{
			if (!params.at(i).empty())
			{
				seq_num = stoi(params.at(i));
			}
		}
	}
	tsv.append(std::to_string(obs_id)).append("\t").append(std::to_string(obs_id)).append("\t").append(obs_name).append("\t").append(obs_descr).append("\t").append(std::to_string(parent_obs_id)).append("\t").append(std::to_string(seq_num)).append("\n");
}