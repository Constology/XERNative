

#ifndef XERPARSER_PROJPCAT_H
#define XERPARSER_PROJPCAT_H

#include "../Pcattypes.h"
#include "../Pcatvals.h"

#include <vector>

class Reader;

class Projpcat
{
public:
    int getProjId();
    void setProjId(int value);
    int getProjCatgTypeId();
    void setProjCatgTypeId(int value);
    int getProjCatgId();
    void setProjCatgId(int value);
    

    std::string get_tsv();
    // std::vector<Pcattype> getTypes();
    Pcatval getValue();
    Projpcat( std::vector<std::string> header,
              std::vector<std::string> params,
             Reader *readerObj);

private:
    int proj_id;
    int proj_catg_type_id;
    int proj_catg_id;

    Reader *reader;
    void update_tsv();
    std::string tsv;

    std::string proj_id_str;
    std::string proj_catg_type_id_str;
    std::string proj_catg_id_str;
};

#endif // XERPARSER_PROJPCAT_H
