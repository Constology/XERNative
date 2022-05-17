

#ifndef XERPARSER_PCATTYPE_H
#define XERPARSER_PCATTYPE_H

#include <iostream>
#include <vector>

class Pcatval;

class Reader;

class Pcattype {
public:
    int proj_catg_type_id;
    int seq_num;
    int proj_catg_short_len;
    std::string proj_catg_type;
    std::string export_flag;
    std::string get_tsv() const;
    Pcattype(const std::vector<std::string> header,
             const std::vector<std::string> params,
             Reader *readerObj);
    std::vector<Pcatval> getProjectCodeValues();

private:
    Reader *reader;
    std::string tsv;
    void update_tsv();
    std::string proj_catg_type_id_str;
    std::string seq_num_str;
    std::string proj_catg_short_len_str;
};

#endif // XERPARSER_PCATTYPE_H
