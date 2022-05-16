#ifndef XERPARSER_ROLES_H
#define XERPARSER_ROLES_H

#include <vector>
#include <string>
#include "classes/Role.h"

class Reader;

class Roles
{
public:
    void add(Role &role);
    Role findById(int id);
    Role getParent(int id);
    Role getParent(Role &role);
    std::vector<Role> getByProject(int projId);
    std::vector<Role> getAll();
    std::string get_tsv();

private:
    std::vector<Role> roles;
};

#endif