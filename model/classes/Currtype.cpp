//
// Created by Taraxtix on 07/05/2022.
//

#include "Currtype.h"

Currtype::Currtype(const std::vector<std::string> header, const std::vector<std::string> params) {
    for (int i = 0; i < header.size(); i++) {
        if (header.at(i).empty())
            break;
        if (header.at(i) == "curr_id") {
            if (!params.at(i).empty()) {
                curr_id = stoi(params.at(i));
                curr_id_str = params.at(i);
            }
        } else if (header.at(i) == "decimal_digit_cnt") {
            if (!params.at(i).empty()) {
                decimal_digit_cnt = stoi(params.at(i));
                decimal_digit_cnt_str = params.at(i);
            }
        } else if (header.at(i) == "curr_symbol") {
            if (!params.at(i).empty()) {
                curr_symbol = params.at(i);
            }
        } else if (header.at(i) == "decimal_symbol") {
            if (!params.at(i).empty()) {
                decimal_symbol = params.at(i);
            }
        } else if (header.at(i) == "digit_group_symbol") {
            if (!params.at(i).empty()) {
                digit_group_symbol = params.at(i);
            }
        } else if (header.at(i) == "pos_curr_fmt_type") {
            if (!params.at(i).empty()) {
                pos_curr_fmt_type = params.at(i);
            }
        } else if (header.at(i) == "neg_curr_fmt_type") {
            if (!params.at(i).empty()) {
                neg_curr_fmt_type = params.at(i);
            }
        } else if (header.at(i) == "curr_type") {
            if (!params.at(i).empty()) {
                curr_type = params.at(i);
            }
        } else if (header.at(i) == "curr_short_name") {
            if (!params.at(i).empty()) {
                curr_short_name = params.at(i);
            }
        } else if (header.at(i) == "group_digit_cnt") {
            if (!params.at(i).empty()) {
                group_digit_cnt = stoi(params.at(i));
                group_digit_cnt_str = params.at(i);
            }
        } else if (header.at(i) == "base_exch_rate") {
            if (!params.at(i).empty()) {
                base_exch_rate = stod(params.at(i));
                base_exch_rate_str = params.at(i);
            }
        }
    }
}

std::string Currtype::update_tsv() {
    tsv = "%R\t";
    tsv.append(curr_id_str)
        .append("\t")
        .append(decimal_digit_cnt_str)
        .append("\t")
        .append(curr_symbol)
        .append("\t")
        .append(decimal_symbol)
        .append("\t")
        .append(digit_group_symbol)
        .append("\t")
        .append(pos_curr_fmt_type)
        .append("\t")
        .append(neg_curr_fmt_type)
        .append("\t")
        .append(curr_type)
        .append("\t")
        .append(curr_short_name)
        .append("\t")
        .append(group_digit_cnt_str)
        .append("\t")
        .append(base_exch_rate_str)
        .append("\n");

    return tsv;
}

std::string Currtype::get_tsv() const { return tsv; }