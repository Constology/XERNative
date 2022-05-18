class Reader;

#ifndef EXRPARSER_ACTVCODE_H
#define EXRPARSER_ACTVCODE_H

#include <iostream>
#include <vector>

class Actvcode
{
public:
    int getActvCodeId();
    void setActvCodeId(int value);
    int getActvCodeTypeId();
    void setActvCodeTypeId(int value);
    int getParentActvCodeId();
    void setParentActvCodeId(int value);
    int getSeqNum();
    void setSeqNum(int value);
    std::string getActvCodeName();
    void setActvCodeName(std::string value);
    std::string getShortName();
    void setShortName(std::string value);

    Actvcode(const std::vector<std::string> header,
             const std::vector<std::string> params,
             Reader *readerObj);
    std::string get_tsv();

private:
    int actv_code_id;
    std::string actv_code_id_str;
    int actv_code_type_id;
    std::string actv_code_type_id_str;
    int parent_actv_code_id;
    std::string parent_actv_code_id_str;
    int seq_num;
    std::string seq_num_str;
    std::string actv_code_name;
    std::string short_name;

    void update_tsv();
    std::string tsv;
    Reader *reader;
};

#endif // EXRPARSER_ACTVCODE_H
