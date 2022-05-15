#include "RCatType.h"

RCatType::RCatType(const std::vector<std::string> header, const std::vector<std::string> params) {
    for (int i = 0; i < header.size(); i++) {
        if (header.at(i).empty())
            break;
        if (header.at(i) == "rsrc_catg_short_len") {
            if (!params.at(i).empty()) {
                rsrc_catg_short_len = stoi(params.at(i));
                rsrc_catg_short_len_str = params.at(i);
            }
        } else if (header.at(i) == "rsrc_catg_type_id") {
            if (!params.at(i).empty()) {
                rsrc_catg_type_id = stoi(params.at(i));
                rsrc_catg_type_id_str = params.at(i);
            }
        } else if (header.at(i) == "seq_num") {
            if (!params.at(i).empty()) {
                seq_num = stoi(params.at(i));
                seq_num_str = params.at(i);
            }
        } else if (header.at(i) == "rsrc_catg_type") {
            rsrc_catg_type = params.at(i);
        } else if (header.at(i) == "super_flag") {
            super_flag = params.at(i);
        }
    }
}

void RCatType::update_tsv() {
    tsv = "%R\t";
    tsv.append(rsrc_catg_short_len_str)
        .append("\t")
        .append(rsrc_catg_type)
        .append("\t")
        .append(rsrc_catg_type_id_str)
        .append("\t")
        .append(seq_num_str)
        .append("\t")
        .append(super_flag)
        .append("\n");
}

std::string RCatType::get_tsv() const { return tsv; }