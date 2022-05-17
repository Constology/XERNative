//
// Created by Taraxtix on 07/05/2022.
//

#ifndef EXRPARSER_ACTVTYPE_H
#define EXRPARSER_ACTVTYPE_H

#include <iostream>
#include <vector>
class Reader;

class Actvtype {
public:
    int actv_code_type_id;
    int proj_id;
    int seq_num;
    float actv_short_len;
    std::string actv_code_type;
    std::string actv_code_type_scope;
    std::string super_flag;

    Actvtype(const std::vector<std::string> header,
             const std::vector<std::string> params,
             Reader *readerObj);
    std::string get_tsv() const;

private:
    std::string actv_code_type_id_str;
    std::string proj_id_str;
    std::string seq_num_str;
    std::string actv_short_len_str;
    std::string update_tsv();
    std::string tsv;
    Reader *reader;
};

#endif // EXRPARSER_ACTVTYPE_H
