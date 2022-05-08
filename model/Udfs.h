#ifndef XERPARSER_UDFS_H
#define XERPARSER_UDFS_H

#include <vector>
#include<string>
#include "classes/Udf.h"

class Udfs{
    public:
        void add(const Udf &udf);
        Udf findById(int id);
        std::vector<Udf> getByProject(int projId);

    private:
        std::vector<Udf> udfs;
};

#endif