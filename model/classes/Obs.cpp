
#include "Obs.h"

Obs::Obs(std::vector<std::string> header,
         std::vector<std::string> params,
         Reader *readerObj)
{
    tsv = "";
    reader = readerObj;
    for (int i = 0; i < header.size(); i++)
    {
        if (header.at(i) == "obs_id")
        {
            if (!params.at(i).empty())
            {
                obs_id = stoi(params.at(i));
                obs_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "guid")
        {
            if (!params.at(i).empty())
            {
                guid = params.at(i);
            }
        }
        else if (header.at(i) == "obs_name")
        {
            obs_name = params.at(i);
        }
        else if (header.at(i) == "obs_descr")
        {
            obs_descr = params.at(i);
        }
        else if (header.at(i) == "parent_obs_id")
        {
            if (!params.at(i).empty())
            {
                parent_obs_id = stoi(params.at(i));
                parent_obs_id_str = params.at(i);
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
    }
    update_tsv();
}

void Obs::update_tsv()
{
    tsv = "%R\t";
    tsv.append(obs_id_str)
        .append("\t")
        .append(parent_obs_id_str)
        .append("\t")
        .append(guid)
        .append("\t")
        .append(seq_num_str)
        .append("\t")
        .append(obs_name)
        .append("\t")
        .append(obs_descr)
        .append("\n");
}

std::string Obs::get_tsv() { return tsv; }

int Obs::getObsId()
{
    return obs_id;
}

void Obs::setObsId(int value)
{
    if (value > 0)
    {
        obs_id = value;
        obs_id_str = std::to_string(value);
    }
}

std::string Obs::getGuid()
{
    return guid;
}

void Obs::setGuid(std::string value)
{
    if (!value.empty())
    {
        guid = value;
    }
}

std::string Obs::getObsName()
{
    return obs_name;
}

void Obs::setObsName(std::string value)
{
    if (!value.empty())
    {
        obs_name = value;
    }
}

std::string Obs::getObsDescr()
{
    return obs_descr;
}

void Obs::setObsDescr(std::string value)
{
    if (!value.empty())
    {
        obs_descr = value;
    }
}

int Obs::getParentObsId()
{
    return parent_obs_id;
}

void Obs::setParentObsId(int value)
{
    if (value > 0)
    {
        parent_obs_id = value;
        parent_obs_id_str = std::to_string(value);
    }
}

int Obs::getSeqNum()
{
    return seq_num;
}

void Obs::setSeqNum(int value)
{
    if (value > 0)
    {
        seq_num = value;
        seq_num_str = std::to_string(value);
    }
}
