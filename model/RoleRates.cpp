#include "RoleRates.h"

void RoleRates::add(const RoleRate & roleRate){
    roleRates.emplace_back(roleRate);
}

std::vector<RoleRate> RoleRates::getAll(){
    return roleRates;
}

RoleRate RoleRates::findById(int id){
    for(auto rr: roleRates){
        if( rr.role_rate_id == id){
            return rr;
        }
    }
}

RoleRate RoleRates::findByRole(int id){
    for(auto rr: roleRates){
        if(rr.role_id == id){
            return rr;
        }
    }
}