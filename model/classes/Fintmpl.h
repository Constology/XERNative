
#ifndef XERPARSER_FINTMPL_H
#define XERPARSER_FINTMPL_H

#include <iostream>
#include <vector>

class Reader;

class Fintmpl
{
public:
    int getFinTmplId();
    void setFinTmplId(int value);
    std::string getFintmplName();
    void setFintmplName(std::string value);
    std::string getDefaultFlag();
    void setDefaultFlag(std::string value);

    std::string get_tsv();
    Fintmpl(const std::vector<std::string> header,
            const std::vector<std::string> params,
            Reader *readerObj);

private:
    int fintmpl_id;
    std::string fintmpl_name;
    std::string default_flag;

    void update_tsv();
    std::string fintmpl_id_str;
    std::string tsv;
    Reader *reader;
};

#endif // XERPARSER_FINTMPL_H
