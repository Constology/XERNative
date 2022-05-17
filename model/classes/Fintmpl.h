//
// Created by Taraxtix on 11/05/2022.
//

#ifndef XERPARSER_FINTMPL_H
#define XERPARSER_FINTMPL_H

#include <iostream>
#include <vector>

class Reader;

class Fintmpl {
public:
    int fintmpl_id;
    std::string fintmpl_name;
    std::string default_flag;

    std::string get_tsv() const;
    Fintmpl(const std::vector<std::string> header,
            const std::vector<std::string> params,
            Reader *readerObj);

private:
    void update_tsv();
    std::string fintmpl_id_str;
    std::string tsv;
    Reader *reader;
};

#endif // XERPARSER_FINTMPL_H
