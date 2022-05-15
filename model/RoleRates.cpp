#include "RoleRates.h"

void RoleRates::add(const RoleRate &roleRate) { roleRates.emplace_back(roleRate); }

std::vector<RoleRate> RoleRates::getAll() { return roleRates; }

RoleRate RoleRates::findById(int id) {
    for (auto rr : roleRates) {
        if (rr.role_rate_id == id) {
            return rr;
        }
    }
    printf("Could Not Find Role Rate");
    exit(EXIT_FAILURE);
}

RoleRate RoleRates::findByRole(int id) {
    for (auto rr : roleRates) {
        if (rr.role_id == id) {
            return rr;
        }
    }
    printf("Could not find Role Rate");
    exit(EXIT_FAILURE);
}

std::string RoleRates::get_tsv() const {
    std::string tsv;
    tsv.append("%T\tROLERATE\n");
    tsv.append("%F\trole_rate_id\trole_id\tcost_per_qty\tcost_per_qty2\tcost_per_qty3\t"
               "cost_per_qty4\tcost_per_qty5\n");
    for (auto &roleRate : roleRates) {
        tsv.append(roleRate.get_tsv());
    }
    return tsv;
}