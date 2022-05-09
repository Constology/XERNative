#ifndef XERPARSER_H_
#define XERPARSER_H_

#include <string>

class Fintmpl{
    public:
        Fintmpl(const std::string header[], const std::string params[]);
        std::string get_tsv();
        int fintmpl_id;
        std::string fintmpl_name;
        std::string default_flag;
};

#endif // !XERPARSER_H_#define XERPARSER_H_

