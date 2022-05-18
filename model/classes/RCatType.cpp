#include "RCatType.h"
#include "../../Reader.h"

RCatType::RCatType(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj)
{
    reader = readerObj;
    for (int i = 0; i < header.size(); i++)
    {
        if (header.at(i).empty())
            break;
        if (header.at(i) == "rsrc_catg_short_len")
        {
            if (!params.at(i).empty())
            {
                rsrc_catg_short_len = stoi(params.at(i));
                rsrc_catg_short_len_str = params.at(i);
            }
        }
        else if (header.at(i) == "rsrc_catg_type_id")
        {
            if (!params.at(i).empty())
            {
                rsrc_catg_type_id = stoi(params.at(i));
                rsrc_catg_type_id_str = params.at(i);
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
        else if (header.at(i) == "rsrc_catg_type")
        {
            rsrc_catg_type = params.at(i);
        }
        else if (header.at(i) == "super_flag")
        {
            super_flag = params.at(i);
        }
    }
    update_tsv();
}

void RCatType::update_tsv()
{
    tsv = "%R\t";
    tsv.append(rsrc_catg_short_len_str)
        .append("\t")
        .append(rsrc_catg_type)
        .append("\t")
        .append(rsrc_catg_type_id_str)
        .append("\t")
        .append(seq_num_str)
        .append("\t")
        .append(super_flag)
        .append("\n");
}

std::string RCatType::get_tsv()
{
    update_tsv();
    return tsv;
}

int RCatType::getRsrcCatgShortLen() { return rsrc_catg_short_len; }
void RCatType::setRsrcCatgShortLen(int value)
{
    if (value > 0)
    {
        rsrc_catg_short_len = value;
        rsrc_catg_short_len_str = std::to_string(value);
    }
}
std::string RCatType::getRsrcCatgType() { return rsrc_catg_type; }
void RCatType::setRsrcCatgType(std::string value)
{
    if (!value.empty())
    {
        rsrc_catg_type = value;
    }
}
int RCatType::getRsrcCatgTypeId() { return rsrc_catg_type_id; }
void RCatType::setRsrcCatgTypeId(int value)
{
    if (value > 0)
    {
        rsrc_catg_type_id = value;
        rsrc_catg_type_id_str = std::to_string(value);
    }
}
int RCatType::getSeqNum() { return seq_num; }
void RCatType::setSeqNum(int value)
{
    if (value > 0)
    {
        seq_num = value;
        seq_num_str = std::to_string(value);
    }
}
std::string RCatType::getSuperFlag() { return super_flag; }
void RCatType::setSuperFlag(std::string value)
{
    if (!value.empty())
    {
        super_flag = value;
    }
}