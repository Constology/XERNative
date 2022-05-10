//
// Created by sorat on 10/05/2022.
//

#include "Obs.h"

Obs::Obs(const std::string *header, const std::string *params){
	tsv = "";
	for (uint i = 0; i < header->size(); i++) {
		if (header[i] == "obs_id"){ obs_id = stoi(params[i]); }
		else if (header[i] == "guid"){ guid = stoi(params[i]); }
		else if (header[i] == "obs_name"){ obs_name = params[i]; }
		else if (header[i] == "obs_descr"){ obs_descr = params[i]; }
		else if (header[i] == "parent_obs_id"){ parent_obs_id = stoi(params[i]); }
		else if (header[i] == "seq_num"){ seq_num = stoi(params[i]); }
	}
	tsv.append(std::to_string(obs_id)).append("\t")
	.append(std::to_string(obs_id)).append("\t")
	.append(obs_name).append("\t")
	.append(obs_descr).append("\t")
	.append(std::to_string(parent_obs_id)).append("\t")
	.append(std::to_string(seq_num)).append("\n");
}