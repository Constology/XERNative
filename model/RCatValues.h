#ifndef XERPARSER_RCATVALUES_H
#define XERPARSER_RCATVALUES_H

#include "classes/RCatValue.h"
#include <vector>
#include <string>

class RCatValues{
    public:
        void add(const RCatValue &rCatValue);
        std::vector<RCatValue> getAll();
        RCatValue findById(int id);
				std::string get_tsv() const;

    private:
        std::vector<RCatValue> rCatValues;
};

#endif