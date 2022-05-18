

#ifndef XERPARSER_PCATVAL_H
#define XERPARSER_PCATVAL_H

#include "../Pcattypes.h"

#include <iostream>
#include <vector>

class Reader;

class Pcatval {
public:
    int getProjCatgId();
    void setProjCatgId(int value);
    int getParentProjCatgId();
    void setParentProjCatgId(int value);
    int getProjCatgTypeId();
    void setProjCatgTypeId(int value);
    int getSeqNum();
    void setSeqNum(int value);
    std::string getProjCatgShortName();
    void setProjCatgShortName(std::string value);
    std::string getProjCatgName();
    void setProjCatgName(std::string);

    Pcattype getType();
    std::string get_tsv();
    Pcatval( std::vector<std::string> header,
             std::vector<std::string> params,
            Reader *readerObj);

private:
    int proj_catg_id;
    int proj_catg_type_id;
    int seq_num;
    int parent_proj_catg_id;
    std::string proj_catg_short_name;
    std::string proj_catg_name;

    Reader *reader;
    std::string tsv;
    void update_tsv();
    std::string proj_catg_id_str;
    std::string seq_num_str;
    std::string proj_catg_type_id_str;
    std::string parent_proj_catg_id_str;
};

#endif // XERPARSER_PCATVAL_H
