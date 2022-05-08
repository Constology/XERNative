#ifndef XERPARSER_UDFTypes_H
#define XERPARSER_UDFTypes_H

#include <vector>
#include<string>
#include "classes/UDFType.h"


class UDFTypes
{
public:
    UDFType findById(int id);
    void add(const UDFType &udfType);

private:
    std::vector<UDFType> udftypes;
};

#endif //XERPARSER_UDFTypes_H