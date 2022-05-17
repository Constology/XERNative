//
// Created by Taraxtix on 10/05/2022.
//

#include "NonWork.h"

#include "../../Reader.h"

NonWork::NonWork(const std::vector<std::string> header,
                 const std::vector<std::string> params,
                 Reader *readerObj) {
    tsv = "";
    reader = readerObj;
    for (int i = 0; i < header.size(); i++) {
        if (header.at(i) == "nonwork_type_id") {
            if (!params.at(i).empty()) {
                nonwork_type_id = std::stoi(params.at(i));
                nonwork_type_id_str = params.at(i);
            }
        } else if (header.at(i) == "seq_num") {
            if (!params.at(i).empty()) {
                seq_num = std::stoi(params.at(i));
                seq_num_str = params.at(i);
            }
        } else if (header.at(i) == "nonwork_code") {
            nonwork_code = params.at(i);
        } else if (header.at(i) == "nonwork_type") {
            nonwork_type = params.at(i);
        }
    }
    update_tsv();
}

void NonWork::update_tsv() {
    tsv = "%R\t";
    tsv.append(nonwork_type_id_str)
        .append("\t")
        .append(seq_num_str)
        .append("\t")
        .append(nonwork_code)
        .append("\t")
        .append(nonwork_type)
        .append("\n");
}

std::string NonWork::get_tsv() const { return tsv; }