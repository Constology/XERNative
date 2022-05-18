#include "RoleRate.h"
#include "../../Reader.h"

RoleRate::RoleRate(std::vector<std::string> header, std::vector<std::string> params, Reader *readerObj)
{
    reader = readerObj;
    for (int i = 0; i < header.size(); i++)
    {
        if (header.at(i).empty())
            break;
        if (header.at(i) == "role_rate_id")
        {
            if (!params.at(i).empty())
            {
                role_rate_id = stoi(params.at(i));
                role_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "role_id")
        {
            if (!params.at(i).empty())
            {
                role_id = stoi(params.at(i));
                role_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "cost_per_qty")
        {
            if (!params.at(i).empty())
            {
                cost_per_qty = stoi(params.at(i));
                cost_per_qty_str = params.at(i);
            }
        }
        else if (header.at(i) == "cost_per_qty2")
        {
            if (!params.at(i).empty())
            {
                cost_per_qty2 = stoi(params.at(i));
                cost_per_qty2_str = params.at(i);
            }
        }
        else if (header.at(i) == "cost_per_qty3")
        {
            if (!params.at(i).empty())
            {
                cost_per_qty3 = stoi(params.at(i));
                cost_per_qty3_str = params.at(i);
            }
        }
        else if (header.at(i) == "cost_per_qty4")
        {
            if (!params.at(i).empty())
            {
                cost_per_qty4 = stoi(params.at(i));
                cost_per_qty4_str = params.at(i);
            }
        }
        else if (header.at(i) == "cost_per_qty5")
        {
            if (!params.at(i).empty())
            {
                cost_per_qty5 = stoi(params.at(i));
                cost_per_qty5_str = params.at(i);
            }
        }
    }
    update_tsv();
}

void RoleRate::update_tsv()
{
    tsv = "%R\t";
    tsv.append(role_rate_id_str)
        .append("\t")
        .append(role_id_str)
        .append("\t")
        .append(cost_per_qty_str)
        .append("\t")
        .append(cost_per_qty2_str)
        .append("\t")
        .append(cost_per_qty3_str)
        .append("\t")
        .append(cost_per_qty4_str)
        .append("\t")
        .append(cost_per_qty5_str)
        .append("\n");
}

std::string RoleRate::get_tsv()
{
    update_tsv();
    return tsv;
}

int RoleRate::getRoleRateId() { return role_rate_id; }
void RoleRate::setRoleRateId(int value)
{
    if (value > 0)
    {
        role_rate_id = value;
        role_rate_id_str = std::to_string(value);
    }
}
int RoleRate::getRoleId() { return role_id; }
void RoleRate::setRoleId(int value)
{
    if (value > 0)
    {
        role_id = value;
        role_id_str = std::to_string(value);
    }
}
double RoleRate::getCostPerQty() { return cost_per_qty; }
void RoleRate::setCostPerQty(double value)
{
    if (value > 0.0f)
    {
        cost_per_qty = value;
        cost_per_qty_str = std::to_string(value);
    }
}
double RoleRate::getCostPerQty2() { return cost_per_qty2; }
void RoleRate::setCostPerQty2(double value)
{
    if (value > 0.0f)
    {
        cost_per_qty2 = value;
        cost_per_qty2_str = std::to_string(value);
    }
}
double RoleRate::getCostPerQty3() { return cost_per_qty3; }
void RoleRate::setCostPerQty3(double value)
{
    if (value > 0.0f)
    {
        cost_per_qty3 = value;
        cost_per_qty3_str = std::to_string(value);
    }
}
double RoleRate::getCostPerQty4() { return cost_per_qty4; }
void RoleRate::setCostPerQty4(double value)
{
    if (value > 0.0f)
    {
        cost_per_qty4 = value;
        cost_per_qty4_str = std::to_string(value);
    }
}
double RoleRate::getCostPerQty5() { return cost_per_qty5; }
void RoleRate::setCostPerQty5(double value)
{
    if (value > 0.0f)
    {
        cost_per_qty5 = value;
        cost_per_qty5_str = std::to_string(value);
    }
}