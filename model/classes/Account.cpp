#include "Account.h"

#include "../../Reader.h"

Account::Account(std::vector<std::string> header,
                 std::vector<std::string> params,
                 Reader *readerObj) {

    tsv = "";
    reader = readerObj;
    for (int i = 0; i < header.size(); i++) {
        if (header.at(i).empty())
            break;

        if (header.at(i) == "acct_id") {
            if (!params.at(i).empty()) {
                acct_id = stoi(params.at(i));
                acct_id_str = params.at(i);
            }
        } else if (header.at(i) == "actv_code_type_id") {
            if (!params.at(i).empty()) {
                acct_seq_num = stoi(params.at(i));
                acct_seq_num_str = params.at(i);
            }
        } else if (header.at(i) == "parent_acct_id") {
            if (!params.at(i).empty()) {
                parent_acct_id = stoi(params.at(i));
                parent_acct_id_str = params.at(i);
            }
        } else if (header.at(i) == "acct_name") {
            acct_name = params.at(i);
        } else if (header.at(i) == "acct_descr") {
            acct_descr = params.at(i);
        } else if (header.at(i) == "acct_short_name") {
            acct_short_name = params.at(i);
        }
    }
    update_tsv();
}

std::string Account::update_tsv() {
    tsv = "%R\t";
    tsv.append(acct_id_str)
        .append("\t")
        .append(acct_seq_num_str)
        .append("\t")
        .append(parent_acct_id_str)
        .append("\t")
        .append(acct_name)
        .append("\t")
        .append(acct_descr)
        .append("\t")
        .append(acct_short_name)
        .append("\n");
    return tsv;
}

std::string Account::get_tsv() { return tsv; }