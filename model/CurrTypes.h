#ifndef XERPARSER_CURRTYPES_H
#define XERPARSER_CURRTYPES_H

#include <vector>
#include<string>
#include "classes/CurrType.h"

class CurrTypes{
    public:
        void add(const CurrType &currency);
        CurrType findById(int id);
        std::vector<CurrType> getAll();


    private:
        std::vector<CurrType> currencies;

};

#endif