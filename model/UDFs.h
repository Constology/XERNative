#ifndef XERPARSER_UDFS_H
#define XERPARSER_UDFS_H

#include <vector>
#include<string>
#include "classes/udf.h"

class UDFs{
    public:
        void add(const UDF &udf);
        UDF findById(int id);
        std::vector<UDF> getByProject(int projId);

    private:
        std::vector<UDF> udfs;
};

#endif