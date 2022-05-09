#ifndef XERPARSER_ROLERATES_H
#define XERPARSER_ROLERATES_H

#include "classes/RoleRate.h"
#include <vector>
#include <string>

class RoleRates{
    public:
        void add(const RoleRate &rCatValue);
        std::vector<RoleRate> getAll();
        RoleRate findById(int id);
        RoleRate findByRole(int id);
				std::string get_tsv() const;

    private:
        std::vector<RoleRate> roleRates;
};

#endif