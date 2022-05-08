#ifndef XERPARSER_UDFVALUESS_H
#define XERPARSER_UDFVALUES_H

#include <vector>
#include<string>
#include "classes/UDFValue.h"

class UDFValues{
    public:
        void add(const UDFValue &udf);
        UDFValue findById(int id);
        std::vector<UDFValue> getByProject(int projId);

    private:
        std::vector<UDFValue> udfs;
};

#endif