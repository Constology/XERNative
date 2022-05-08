#ifndef XERPARSER_ROLES_H
#define XERPARSER_ROLES_H

#include <vector>
#include<string>
#include "classes/Role.h"

class Roles{
    public:
        void add(const Role &role);
        Role findById(int id);
        Role getParent(int id);
        Role getParent(Role &role);
        std::vector<Role> getByProject(int projId);

    private:
        std::vector<Role> roles;
};

#endif