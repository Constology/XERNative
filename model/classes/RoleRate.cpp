#include "RoleRate.h"

RoleRate::RoleRate(const std::vector<std::string> header, const std::vector<std::string> params)
{
    for (int i = 0; i < header.size(); i++)
    {
        if (header.at(i).empty())
            break;
        if (header.at(i) == "role_rate_id")
        {
            if (!params.at(i).empty())
            {
                role_rate_id = stoi(params.at(i));
            }
        }
        else if (header.at(i) == "role_id")
        {
            if (!params.at(i).empty())
            {
                role_id = stoi(params.at(i));
            }
        }
        else if (header.at(i) == "cost_per_qty")
        {
            if (!params.at(i).empty())
            {
                cost_per_qty = stoi(params.at(i));
            }
        }
        else if (header.at(i) == "cost_per_qty2")
        {
            if (!params.at(i).empty())
            {
                cost_per_qty2 = stoi(params.at(i));
            }
        }
        else if (header.at(i) == "cost_per_qty3")
        {
            if (!params.at(i).empty())
            {
                cost_per_qty3 = stoi(params.at(i));
            }
        }
        else if (header.at(i) == "cost_per_qty4")
        {
            if (!params.at(i).empty())
            {
                cost_per_qty4 = stoi(params.at(i));
            }
        }
        else if (header.at(i) == "cost_per_qty5")
        {
            if (!params.at(i).empty())
            {
                cost_per_qty5 = stoi(params.at(i));
            }
        }
    }
}

std::string RoleRate::get_tsv()
{
    tsv = "";
    tsv.append(std::to_string(role_rate_id)).append("\t").append(std::to_string(role_id)).append("\t").append(std::to_string(cost_per_qty)).append("\t").append(std::to_string(cost_per_qty2)).append("\t").append(std::to_string(cost_per_qty3)).append("\t").append(std::to_string(cost_per_qty4)).append("\t").append(std::to_string(cost_per_qty5)).append("\n");
    return tsv;
}