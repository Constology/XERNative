
#include "Actvtype.h"

Actvtype::Actvtype(std::vector<std::string> header,
                   std::vector<std::string> params,
                   Reader *readerObj)
{

    tsv = "";
    reader = readerObj;
    for (int i = 0; i < header.size(); i++)
    {
        if (header.at(i).empty())
            break;

        if (header.at(i) == "actv_code_type_id")
        {
            if (!params.at(i).empty())
            {
                actv_code_type_id = stoi(params.at(i));
                actv_code_type_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "actv_code_type_id")
        {
            if (!params.at(i).empty())
            {

                proj_id = stoi(params.at(i));
                proj_id_str = params.at(i);
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
        else if (header.at(i) == "actv_short_len")
        {
            if (!params.at(i).empty())
            {
                actv_short_len = stof(params.at(i));
                actv_code_type_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "actv_code_name")
        {
            actv_code_type = params.at(i);
        }
        else if (header.at(i) == "actv_code_type_scope")
        {
            actv_code_type_scope = params.at(i);
        }
        else if (header.at(i) == "short_name")
        {
            super_flag = params.at(i);
        }
    }
    update_tsv();
}

std::string Actvtype::update_tsv()
{
    tsv = "%R\t";
    tsv.append(actv_code_type_id_str)
        .append("\t")
        .append(proj_id_str)
        .append("\t")
        .append(seq_num_str)
        .append("\t")
        .append(actv_short_len_str)
        .append("\t")
        .append(actv_code_type)
        .append("\t")
        .append(actv_code_type_scope)
        .append("\t")
        .append(super_flag)
        .append("\n");
    return tsv;
}

std::string Actvtype::get_tsv()
{
    update_tsv();
    return tsv;
}

int Actvtype::getActvCodeTypeId() { return actv_code_type_id; }
void Actvtype::setActvCodeTypeId(int value)
{
    if (value > 0)
    {
        actv_code_type_id = value;
        actv_code_type_id_str = std::to_string(value);
    }
}

int Actvtype::getProjId() { return proj_id; }
void Actvtype::setProjId(int value)
{
    if (value > 0)
    {
        proj_id = value;
        proj_id_str = std::to_string(value);
    }
}

int Actvtype::getSeqNum() { return seq_num; }
void Actvtype::setSeqNum(int value)
{
    if (value > 0)
    {
        seq_num = value;
        seq_num_str = std::to_string(value);
    }
}

float Actvtype::getActvShortLen() { return actv_short_len; }
void Actvtype::setActvShortLen(float value)
{
    if (value > 0.0f)
    {
        actv_short_len = value;
        actv_short_len_str = std::to_string(value);
    }
}

std::string Actvtype::getActvCodeType() { return actv_code_type; }
void Actvtype::setActvCodeType(std::string value)
{
    if (!value.empty())
    {
        actv_code_type = value;
    }
}

std::string Actvtype::getActvCodeTypeScope() { return actv_code_type_scope; }
void Actvtype::setActvCodeTypeScope(std::string value)
{
    if (!value.empty())
    {
        actv_code_type_scope = value;
    }
}

std::string Actvtype::getSuperFlag() { return super_flag; }
void Actvtype::setSuperFlag(std::string value)
{
    if (!value.empty())
    {
        super_flag = value;
    }
}
