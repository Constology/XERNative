#ifndef XERPARSER_UDFS1_H
#define XERPARSER_UDFS1_H

#include <vector>
#include <string>
#include "classes/Udf.h"

class Udfs
{
public:
    void add( Udf &udf);
    Udf findById(int id);
    std::vector<Udf> getByProject(int projId);
    std::vector<Udf> getAll();
    std::string get_tsv() ;
    std::vector<Udf> getByTypeId(int id);
    std::vector<Udf> getByProjectId(int id);
    std::vector<Udf> getByTaskId(int id);

private:
    std::vector<Udf> udfs;
};

#endif