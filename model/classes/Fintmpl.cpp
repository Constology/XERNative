#include "Fintmpl.h"


Fintmpl::Fintmpl(const std::string header, const std::string params){
    for (int i = 0; i < header->length(); i++){
        if(header[i].empty()) break;
        if (header[i] == "fintmpl_id"){
            if(!params[i].empty()){
                fintmpl_id = stoi(params[i]);
            }
        } else if (header[i] == "fintmpl_name"){
            fintmpl_name = params[i];
        } else if (header[i] == default_flag){
            default_flag = params[i];
        }
    }
}

std::string Fintmpl::get_tsv(){
    tsv = "";
    tsv.append(std::to_string(fintmpl_id)).append("\t")
        .append(fintmpl_name).append("\t")
        .append(default_flag).append("\n")
}

