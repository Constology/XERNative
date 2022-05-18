#include "Roles.h"

void Roles::add(Role &role) { roles.emplace_back(role); }

Role Roles::findById(int id)
{
    for (auto role : roles)
    {
        if (role.getRoleId() == id)
        {
            return role;
        }
    }
    printf("Could not find role");
    exit(EXIT_FAILURE);
}

Role Roles::getParent(int id)
{
    Role currentRole = findById(id);
    int parent_id = currentRole.getParentRoleId();
    return findById(parent_id);
}

Role Roles::getParent(Role &role)
{
    Role parent = getParent(role.getRoleId());
    return parent;
}

std::vector<Role> Roles::getAll() { return roles; }

std::string Roles::get_tsv()
{
    std::string tsv;
    tsv.append("%T\tROLE\n");
    tsv.append("%F\trole_id\tparent_role_id\tseq_num\trole_name\trole_short_name\tpobs_id"
               "\tdef_cost_qty_link_flag\tcost_qty_type\trole_descr\tlast_checksum\n");
    for (auto &role : roles)
    {
        tsv.append(role.get_tsv());
    }
    return tsv;
}