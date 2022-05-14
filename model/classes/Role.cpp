#include "Role.h"
#include "../../Reader.h"

Role::Role(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj)
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

std::string Role::get_tsv()
{
    tsv = "";
    tsv.append(std::to_string(role_id)).append("\t").append(std::to_string(parent_role_id)).append("\t").append(std::to_string(seq_num)).append("\t").append(role_name).append("\t").append(role_short_name).append("\t").append(std::to_string(pobs_id)).append("\t").append(def_cost_qty_link_flag).append("\t").append(cost_qty_type).append("\t").append(role_descr).append("\t").append(last_checksum).append("\n");
    return tsv;
}

std::vector<RoleRate> Role::getRoleRate()
{
    std::vector<RoleRate> rates;

    reader->roleRates.getAll();
    return rates;
}