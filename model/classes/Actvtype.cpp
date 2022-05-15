//
// Created by Taraxtix on 07/05/2022.
//

#include "Actvtype.h"

Actvtype::Actvtype(const std::vector<std::string> header, const std::vector<std::string> params) {

    tsv = "";

    for (int i = 0; i < header.size(); i++) {
        if (header.at(i).empty())
            break;

        if (header.at(i) == "actv_code_type_id") {
            if (!params.at(i).empty()) {
                actv_code_type_id = stoi(params.at(i));
                actv_code_type_id_str = params.at(i);
            }
        } else if (header.at(i) == "actv_code_type_id") {
            if (!params.at(i).empty()) {

                proj_id = stoi(params.at(i));
                proj_id_str = params.at(i);
            }
        } else if (header.at(i) == "seq_num") {
            if (!params.at(i).empty()) {

                seq_num = stoi(params.at(i));
                seq_num_str = params.at(i);
            }
        } else if (header.at(i) == "actv_short_len") {
            if (!params.at(i).empty()) {
                actv_short_len = stof(params.at(i));
                actv_code_type_id_str = params.at(i);
            }
        } else if (header.at(i) == "actv_code_name") {
            actv_code_type = params.at(i);
        } else if (header.at(i) == "actv_code_type_scope") {
            actv_code_type_scope = params.at(i);
        } else if (header.at(i) == "short_name") {
            super_flag = params.at(i);
        }
    }
}

std::string Actvtype::update_tsv() {
    tsv = "%R\t";
    tsv.append(actv_code_type_id_str)
        .append("\t")
        .append(proj_id_str)
        .append("\t")
        .append(seq_num_str)
        .append("\t")
        .append(actv_short_len_str)
        .append("\t")
        .append(actv_code_type)
        .append("\t")
        .append(actv_code_type_scope)
        .append("\t")
        .append(super_flag)
        .append("\n");
    return tsv;
}

std::string Actvtype::get_tsv() const { return tsv; }