

#ifndef EXRPARSER_CURRTYPE_H
#define EXRPARSER_CURRTYPE_H

#include <iostream>
#include <string>
#include <vector>

class Reader;

class Currtype
{

public:
    int getCurrId();
    void setCurrId(int value);
    int getDecimalDigitCnt();
    void setDecimalDigitCnt(int value);
    float getBaseExchRate();
    void setBaseExchRate(float value);
    std::string getCurrShortName();
    void setCurrShortName(std::string value);
    std::string getCurrSymbol();
    void setCurrSymbol(std::string);
    std::string getCurrType();
    void setCurrType(std::string value);
    std::string getDecimalSymbol();
    void setDecimalSymbol(std::string value);
    std::string getDigitGroupSymbol();
    void setDigitGroupSymbol(std::string value);
    int getGroupDigitCnt();
    void setGroupDigitCnt(int value);
    std::string getNegFmtType();
    void setNegFmtType(std::string value);
    std::string getPosCurrFmtType();
    void setPosCurrFmtType(std::string value);

    std::string get_tsv();

    Currtype(const std::vector<std::string> header,
             const std::vector<std::string> params,
             Reader *readerObj);

private:
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

    std::string curr_id_str;
    std::string decimal_digit_cnt_str;
    std::string base_exch_rate_str;
    std::string group_digit_cnt_str;
    std::string update_tsv();
    std::string tsv;
    Reader *reader;
};

#endif // EXRPARSER_CURRTYPE_H
