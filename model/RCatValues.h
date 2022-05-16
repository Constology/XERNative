#ifndef XERPARSER_RCATVALUES_H
#define XERPARSER_RCATVALUES_H

#include "classes/RCatValue.h"
#include <vector>
#include <string>

class RCatValues
{
public:
    void add(RCatValue &rCatValue);
    std::vector<RCatValue> getAll();
    RCatValue findById(int id);
    std::string get_tsv();

private:
    std::vector<RCatValue> rCatValues;
};

#endif