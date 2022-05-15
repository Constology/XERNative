//
// Created by Taraxtix on 07/05/2022.
//

#ifndef EXRPARSER_CURRTYPE_H
#define EXRPARSER_CURRTYPE_H

#include <iostream>
#include <string>
#include <vector>

class Currtype {

public:
    int curr_id;
    int decimal_digit_cnt;
    float base_exch_rate;
    std::string curr_short_name;
    std::string curr_symbol;
    std::string curr_type;
    std::string decimal_symbol;
    std::string digit_group_symbol;
    int group_digit_cnt;
    std::string neg_curr_fmt_type;
    std::string pos_curr_fmt_type;
    std::string get_tsv() const;

    Currtype(const std::vector<std::string> header, const std::vector<std::string> params);

private:
    std::string curr_id_str;
    std::string decimal_digit_cnt_str;
    std::string base_exch_rate_str;
    std::string group_digit_cnt_str;
    std::string update_tsv();
    std::string tsv;
};

#endif // EXRPARSER_CURRTYPE_H
