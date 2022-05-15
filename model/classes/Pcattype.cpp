//
// Created by sorat on 12/05/2022.
//

#include "Pcattype.h"

#include "../../Reader.h"
#include "Pcatval.h"

Pcattype::Pcattype(const std::vector<std::string> header,
                   const std::vector<std::string> params,
                   Reader *readerObj) {
    tsv = "";
    for (int i = 0; i < params.size(); i++) {
        if (header.at(i) == "proj_catg_type_id") {
            if (!params.at(i).empty()) {
                proj_catg_type_id = stoi(params.at(i));
                proj_catg_type_id_str = params.at(i);
            }
        } else if (header.at(i) == "seq_num") {
            if (!params.at(i).empty()) {
                seq_num = stoi(params.at(i));
                seq_num_str = params.at(i);
            }
        } else if (header.at(i) == "proj_catg_short_len") {
            proj_catg_short_len = stoi(params.at(i));
            proj_catg_short_len_str = params.at(i);
        } else if (header.at(i) == "proj_catg_type") {
            proj_catg_type = params.at(i);
        } else if (header.at(i) == "export_flag") {
            export_flag = params.at(i);
        }
    }
    reader = readerObj;
    update_tsv();
}

std::vector<Pcatval> Pcattype::getProjectCodeValues() {
    return reader->pcatvals.getByTypeId(proj_catg_type_id);
}

void Pcattype::update_tsv() {
    tsv = "%R\t";
    tsv.append(proj_catg_type_id_str)
        .append("\t")
        .append(seq_num_str)
        .append("\t")
        .append(proj_catg_short_len_str)
        .append("\t")
        .append(proj_catg_type)
        .append("\t")
        .append(export_flag)
        .append("\n");
}

std::string Pcattype::get_tsv() const { return tsv; }