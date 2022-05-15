//
// Created by sorat on 11/05/2022.
//

#include "Fintmpl.h"

Fintmpl::Fintmpl(const std::vector<std::string> header, const std::vector<std::string> params) {
    tsv = "";
    for (int i = 0; i < header.size(); i++) {
        if (header.at(i) == "fintmpl_id") {
            if (!params.at(i).empty()) {
                fintmpl_id = stoi(params.at(i));
                fintmpl_id_str = params.at(i);
            }
        } else if (header.at(i) == "fintmpl_name") {
            fintmpl_name = params.at(i);
        } else if (header.at(i) == "default_flag") {
            default_flag = params.at(i);
        }
    }
    update_tsv();
}

void Fintmpl::update_tsv() {
    tsv = "%R\t";
    tsv.append(fintmpl_id_str)
        .append("\t")
        .append(fintmpl_name)
        .append("\t")
        .append(default_flag)
        .append("\n");
}

std::string Fintmpl::get_tsv() const { return tsv; }
