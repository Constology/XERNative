

#ifndef EXRPARSER_ACTVTYPE_H
#define EXRPARSER_ACTVTYPE_H

#include <iostream>
#include <vector>
class Reader;

class Actvtype
{
public:
    int getActvCodeTypeId();
    void setActvCodeTypeId(int value);
    int getProjId();
    void setProjId(int value);
    int getSeqNum();
    void setSeqNum(int value);
    float getActvShortLen();
    void setActvShortLen(float value);
    std::string getActvCodeType();
    void setActvCodeType(std::string value);
    std::string getActvCodeTypeScope();
    void setActvCodeTypeScope(std::string value);
    std::string getSuperFlag();
    void setSuperFlag(std::string value);

    Actvtype(std::vector<std::string> header,
             std::vector<std::string> params,
             Reader *readerObj);
    std::string get_tsv();

private:
    int actv_code_type_id;
    int proj_id;
    int seq_num;
    float actv_short_len;
    std::string actv_code_type;
    std::string actv_code_type_scope;
    std::string super_flag;

    std::string actv_code_type_id_str;
    std::string proj_id_str;
    std::string seq_num_str;
    std::string actv_short_len_str;
    std::string update_tsv();
    std::string tsv;
    Reader *reader;
};

#endif // EXRPARSER_ACTVTYPE_H
