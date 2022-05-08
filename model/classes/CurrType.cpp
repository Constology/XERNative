#include "CurrType.h"
#include <iostream>

using namespace std;

CurrType::CurrType(vector<string> params){
    curr_id = stoi(params.at(1));
    decimal_digit_cnt = stoi(params.at(2));
    curr_symbol = params.at(3);
    decimal_symbol = params.at(4);
    digit_group_symbol = params.at(5);
    pos_curr_fmt_type = params.at(6);
    neg_curr_fmt_type = params.at(7);
    curr_type = params.at(8);
    curr_short_name = params.at(9);
    group_digit_cnt = stoi(params.at(10));
    base_exch_rate = stod(params.at(11));    
}

void CurrType::printCurrency(){
    cout << curr_id << "\t" << decimal_digit_cnt << "\t" 
        << curr_symbol << "\t" <<curr_short_name << endl;
}

std::string CurrType::get_tsv(){
    tsv = "";
    tsv.append(std::to_string(curr_id)).append("\t")
        .append(std::to_string(decimal_digit_cnt)).append("\t")
        .append(curr_symbol).append("\t")
        .append(decimal_symbol).append("\t")
        .append(digit_group_symbol).append("\t")
        .append(pos_curr_fmt_type).append("\t")
        .append(neg_curr_fmt_type).append("\t")
        .append(curr_type).append("\t")
        .append(curr_short_name).append("\t")
        .append(std::to_string(group_digit_cnt)).append("\t")
        .append(std::to_string(base_exch_rate)).append("\n");
    return tsv;
}