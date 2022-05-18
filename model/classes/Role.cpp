#include "Role.h"

#include "../../Reader.h"

Role::Role(std::vector<std::string> header,
           std::vector<std::string> params,
           Reader *readerObj)
{
    for (int i = 0; i < header.size(); i++)
    {
        if (header.at(i).empty())
            break;
        if (header.at(i) == "role_id")
        {
            if (!params.at(i).empty())
            {
                role_id = stoi(params.at(i));
                role_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "parent_role_id")
        {
            if (!params.at(i).empty())
            {
                parent_role_id = stoi(params.at(i));
            }
        }
        else if (header.at(i) == "seq_num")
        {
            if (!params.at(i).empty())
            {
                seq_num = stoi(params.at(i));
            }
        }
        else if (header.at(i) == "role_name")
        {
            role_name = params.at(i);
        }
        else if (header.at(i) == "role_short_name")
        {
            role_short_name = params.at(i);
        }
        else if (header.at(i) == "pobs_id")
        {
            if (!params.at(i).empty())
            {
                pobs_id = stoi(params.at(i));
            }
        }
        else if (header.at(i) == "def_cost_qty_link_flag")
        {
            def_cost_qty_link_flag = params.at(i);
        }
        else if (header.at(i) == "cost_qty_type")
        {
            cost_qty_type = params.at(i);
        }
        else if (header.at(i) == "role_descr")
        {
            role_descr = params.at(i);
        }
        else if (header.at(i) == last_checksum)
        {
            last_checksum = params.at(i);
        }
    }
    reader = readerObj;
}

void Role::update_tsv()
{
    tsv = "%R\t";
    tsv.append(std::to_string(role_id))
        .append("\t")
        .append(std::to_string(parent_role_id))
        .append("\t")
        .append(std::to_string(seq_num))
        .append("\t")
        .append(role_name)
        .append("\t")
        .append(role_short_name)
        .append("\t")
        .append(std::to_string(pobs_id))
        .append("\t")
        .append(def_cost_qty_link_flag)
        .append("\t")
        .append(cost_qty_type)
        .append("\t")
        .append(role_descr)
        .append("\t")
        .append(last_checksum)
        .append("\n");
}

std::vector<RoleRate> Role::getRoleRate()
{
    std::vector<RoleRate> rates;

    reader->roleRates.getAll();
    return rates;
}

std::string Role::get_tsv()
{
    update_tsv();
    return tsv;
}

int Role::getRoleId() { return role_id; }
void Role::setRoleId(int value)
{
    if (value > 0)
    {
        role_id = value;
        role_id_str = std::to_string(value);
    }
}
int Role::getParentRoleId() { return parent_role_id; }
void Role::setParentRoleId(int value)
{
    if (value > 0)
    {
        parent_role_id = value;
        parent_role_id_str = std::to_string(value);
    }
}
int Role::getSeqNum() { return seq_num; }
void Role::setSeqNum(int value)
{
    if (value > 0)
    {
        seq_num = value;
        seq_num_str = std::to_string(value);
    }
}
std::string Role::getRoleName() { return role_name; }
void Role::setRoleName(std::string value)
{
    if (!value.empty())
    {
        role_name = value;
    }
}
std::string Role::getRoleShortName() { return role_short_name; }
void Role::setRoleShortName(std::string value)
{
    if (!value.empty())
    {
        role_short_name = value;
    }
}
int Role::getPobsId() { return pobs_id; }
void Role::setPobsId(int value)
{
    if (value > 0)
    {
        pobs_id = value;
        pobs_id_str = std::to_string(value);
    }
}
std::string Role::getDefCostQtyLinkFlag() { return def_cost_qty_link_flag; }
void Role::setDefCostQtyLinkFlag(std::string value)
{
    if (!value.empty())
    {
        def_cost_qty_link_flag = value;
    }
}
std::string Role::getCostQtyType() { return cost_qty_type; }
void Role::setCostQtyType(std::string value)
{
    if (!value.empty())
    {
        cost_qty_type = value;
    }
}
std::string Role::getRoleDescr() { return role_descr; }
void Role::setRoleDescr(std::string value)
{
    if (!value.empty())
    {
        role_descr = value;
    }
}
std::string Role::getLastChecksum() { return last_checksum; }
void Role::setLastChecksum(std::string value)
{
    if (!value.empty())
    {
        last_checksum = value;
    }
}
