#ifndef XERPARSER_RCATTYPES_H
#define XERPARSER_RCATTYPES_H

#include <vector>
#include<string>
#include "classes/RCatType.h"

class RCatTypes{
    public:
        void add(const RCatType &rCatType);
        RCatType findById(int id);
        std::vector<RCatType> getAll();
				std::string get_tsv() const;

    private:
        std::vector<RCatType> rCatTypes;

};

#endif //XERPARSER_RCATTYPES_H