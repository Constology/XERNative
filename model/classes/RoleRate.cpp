#include "RoleRate.h"

RoleRate::RoleRate(const std::vector<std::string> header, const std::vector<std::string> params) {
    for (int i = 0; i < header.size(); i++) {
        if (header.at(i).empty())
            break;
        if (header.at(i) == "role_rate_id") {
            if (!params.at(i).empty()) {
                role_rate_id = stoi(params.at(i));
                role_id_str = params.at(i);
            }
        } else if (header.at(i) == "role_id") {
            if (!params.at(i).empty()) {
                role_id = stoi(params.at(i));
                role_id_str = params.at(i);
            }
        } else if (header.at(i) == "cost_per_qty") {
            if (!params.at(i).empty()) {
                cost_per_qty = stoi(params.at(i));
                cost_per_qty_str = params.at(i);
            }
        } else if (header.at(i) == "cost_per_qty2") {
            if (!params.at(i).empty()) {
                cost_per_qty2 = stoi(params.at(i));
                cost_per_qty2_str = params.at(i);
            }
        } else if (header.at(i) == "cost_per_qty3") {
            if (!params.at(i).empty()) {
                cost_per_qty3 = stoi(params.at(i));
                cost_per_qty3_str = params.at(i);
            }
        } else if (header.at(i) == "cost_per_qty4") {
            if (!params.at(i).empty()) {
                cost_per_qty4 = stoi(params.at(i));
                cost_per_qty4_str = params.at(i);
            }
        } else if (header.at(i) == "cost_per_qty5") {
            if (!params.at(i).empty()) {
                cost_per_qty5 = stoi(params.at(i));
                cost_per_qty5_str = params.at(i);
            }
        }
    }
}

void RoleRate::update_tsv() {
    tsv = "%R\t";
    tsv.append(role_rate_id_str)
        .append("\t")
        .append(role_id_str)
        .append("\t")
        .append(cost_per_qty_str)
        .append("\t")
        .append(cost_per_qty2_str)
        .append("\t")
        .append(cost_per_qty3_str)
        .append("\t")
        .append(cost_per_qty4_str)
        .append("\t")
        .append(cost_per_qty5_str)
        .append("\n");
}

std::string RoleRate::get_tsv() const { return tsv; }