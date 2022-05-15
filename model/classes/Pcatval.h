//
// Created by sorat on 12/05/2022.
//

#ifndef XERPARSER_PCATVAL_H
#define XERPARSER_PCATVAL_H

#include "../Pcattypes.h"

#include <iostream>
#include <vector>

class Reader;

class Pcatval {
public:
    int proj_catg_id;
    int proj_catg_type_id;
    int seq_num;
    int parent_proj_catg_id;
    std::string proj_catg_short_name;
    std::string proj_catg_name;

    Pcattype getType();
    std::string get_tsv() const;
    Pcatval(const std::vector<std::string> header,
            const std::vector<std::string> params,
            Reader *readerObj);

private:
    Reader *reader;
    std::string tsv;
    void update_tsv();
    std::string proj_catg_id_str;
    std::string seq_num_str;
    std::string proj_catg_type_str;
    std::string parent_proj_catg_id_str;
};

#endif // XERPARSER_PCATVAL_H
