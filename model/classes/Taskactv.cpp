//
// Created by sorat on 12/05/2022.
//

#include "Taskactv.h"

Taskactv::Taskactv(const std::string *header, const std::string *params){
	tsv = "";
	for(uint i = 0; i < params->length(); i++){
		if(header[i] == "task_id"){ task_id = stoi(params[i]); }
		else if(header[i] == "actv_code_type_id"){ actv_code_type_id = stoi(params[i]); }
		else if(header[i] == "actv_code_id"){ actv_code_id = stoi(params[i]); }
		else if(header[i] == "proj_id"){ proj_id = stoi(params[i]); }
	}
	tsv
	.append(std::to_string(task_id)).append("\t")
	.append(std::to_string(actv_code_type_id)).append("\t")
	.append(std::to_string(actv_code_id)).append("\t")
	.append(std::to_string(proj_id)).append("\n");
}
