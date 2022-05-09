#include "Roles.h"

void Roles::add(const Role & role){
    roles.emplace_back(role);
}

Role Roles::findById(int id){
    for(auto role: roles){
        if(role.role_id == id){
            return role;
        }
    }
    printf("Could not find role");
    exit(EXIT_FAILURE);
}

Role Roles::getParent(int id){
    Role currentRole = findById(id);
    int parent_id = currentRole.parent_role_id;
    return findById(parent_id);
}

Role Roles::getParent(Role &role){
    Role parent = getParent(role.role_id);
    return parent;
}

std::vector<Role> Roles::getAll(){
    return roles;
}