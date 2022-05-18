
#include "Pcatval.h"

#include "../../Reader.h"

Pcatval::Pcatval(std::vector<std::string> header,
                 std::vector<std::string> params,
                 Reader *readerObj)
{
    tsv = "";
    for (int i = 0; i < params.size(); i++)
    {
        if (header.at(i) == "proj_catg_id")
        {
            if (!params.at(i).empty())
            {
                proj_catg_id = stoi(params.at(i));
                proj_catg_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "proj_catg_type_id")
        {
            if (!params.at(i).empty())
            {
                proj_catg_type_id = stoi(params.at(i));
                proj_catg_type_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "seq_num")
        {
            if (!params.at(i).empty())
            {
                seq_num = stoi(params.at(i));
                seq_num_str = params.at(i);
            }
        }
        else if (header.at(i) == "parent_proj_catg_id")
        {
            if (!params.at(i).empty())
            {
                parent_proj_catg_id = stoi(params.at(i));
                parent_proj_catg_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "proj_catg_short_name")
        {
            proj_catg_short_name = params.at(i);
        }
        else if (header.at(i) == "proj_catg_name")
        {
            proj_catg_name = params.at(i);
        }
    }

    reader = readerObj;
}

Pcattype Pcatval::getType() { return reader->pcattypes.findById(proj_catg_type_id); }

void Pcatval::update_tsv()
{
    tsv = "%R\t";
    tsv.append(std::to_string(proj_catg_id))
        .append("\t")
        .append(std::to_string(proj_catg_type_id))
        .append("\t")
        .append(std::to_string(seq_num))
        .append("\t")
        .append(std::to_string(parent_proj_catg_id))
        .append("\t")
        .append(proj_catg_short_name)
        .append("\t")
        .append(proj_catg_name)
        .append("\n");
}

std::string Pcatval::get_tsv()
{
    update_tsv();
    return tsv;
}

int Pcatval::getProjCatgId()
{
    return proj_catg_id;
}

void Pcatval::setProjCatgId(int value)
{
    if (value > 0)
    {
        proj_catg_id = value;
        proj_catg_id_str = std::to_string(value);
    }
}

int Pcatval::getParentProjCatgId()
{
    return parent_proj_catg_id;
}

void Pcatval::setParentProjCatgId(int value)
{
    if (value > 0)
    {
        parent_proj_catg_id = value;
        parent_proj_catg_id_str = std::to_string(value);
    }
}

int Pcatval::getProjCatgTypeId()
{
    return proj_catg_type_id;
}

void Pcatval::setProjCatgTypeId(int value)
{
    if (value > 0)
    {
        proj_catg_type_id = value;
        proj_catg_type_id_str = std::to_string(value);
    }
}

int Pcatval::getSeqNum()
{
    return seq_num;
}

void Pcatval::setSeqNum(int value)
{
    if (value > 0)
    {
        seq_num = value;
        seq_num_str = std::to_string(value);
    }
}

std::string Pcatval::getProjCatgShortName()
{
    return proj_catg_short_name;
}

void Pcatval::setProjCatgShortName(std::string value)
{
    if (!value.empty())
    {
        proj_catg_short_name = value;
    }
}

std::string Pcatval::getProjCatgName()
{
    return proj_catg_name;
}

void Pcatval::setProjCatgName(std::string value)
{
    if (!value.empty())
    {
        proj_catg_name = value;
    }
}
