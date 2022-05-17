

#ifndef EXRPARSER_ACCOUNT_H
#define EXRPARSER_ACCOUNT_H

#include <iostream>
#include <vector>

class Reader;

class Account {
public:
    int acct_id;
    int acct_seq_num;
    int parent_acct_id;
    std::string acct_name;
    std::string acct_descr;
    std::string acct_short_name;

    Account(std::vector<std::string> header, std::vector<std::string> params, Reader *readerObj);
    std::string get_tsv();

private:
    std::string acct_id_str;
    std::string acct_seq_num_str;
    std::string parent_acct_id_str;
    std::string update_tsv();
    std::string tsv;
    Reader *reader;
};

#endif // EXRPARSER_ACCOUNT_H
