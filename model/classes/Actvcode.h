class Reader;

#ifndef EXRPARSER_ACTVCODE_H
#define EXRPARSER_ACTVCODE_H

#include <iostream>
#include <vector>

class Actvcode {
public:
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

    Actvcode(const std::vector<std::string> header,
             const std::vector<std::string> params,
             Reader *readerObj);
    std::string get_tsv() const;

private:
    void update_tsv();
    std::string tsv;
    Reader *reader;
};

#endif // EXRPARSER_ACTVCODE_H
