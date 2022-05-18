
#include "Actvcode.h"

#include "../../Reader.h"

Actvcode::Actvcode(const std::vector<std::string> header,
                   const std::vector<std::string> params,
                   Reader *readerObj)
{

    tsv = "";
    reader = readerObj;
    for (int i = 0; i < header.size(); i++)
    {
        if (header.at(i).empty())
            break;

        if (header.at(i) == "actv_code_id")
        {
            if (!params.at(i).empty())
            {
                actv_code_id = stoi(params.at(i));
                actv_code_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "actv_code_type_id")
        {
            if (!params.at(i).empty())
            {
                actv_code_type_id = stoi(params.at(i));
                actv_code_type_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "parent_actv_code_id")
        {
            if (!params.at(i).empty())
            {
                parent_actv_code_id = stoi(params.at(i));
                parent_actv_code_id_str = params.at(i);
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
        else if (header.at(i) == "actv_code_name")
        {
            actv_code_name = params.at(i);
        }
        else if (header.at(i) == "short_name")
        {
            short_name = params.at(i);
        }
    }
    update_tsv();
}

void Actvcode::update_tsv()
{
    tsv = "%R\t";
    tsv.append(actv_code_id_str)
        .append("\t")
        .append(actv_code_type_id_str)
        .append("\t")
        .append(parent_actv_code_id_str)
        .append("\t")
        .append(seq_num_str)
        .append("\t")
        .append(actv_code_name)
        .append("\t")
        .append(short_name)
        .append("\n");
}

std::string Actvcode::get_tsv()
{
    update_tsv();
    return tsv;
}

int Actvcode::getActvCodeId() { return actv_code_id; }
void Actvcode::setActvCodeId(int value)
{
    if (value > 0)
    {
        actv_code_id = value;
        actv_code_id_str = std::to_string(value);
    }
}

int Actvcode::getActvCodeTypeId() { return actv_code_type_id; }
void Actvcode::setActvCodeTypeId(int value)
{
    if (value > 0)
    {
        actv_code_type_id = value;
        actv_code_type_id_str = std::to_string(value);
    }
}

int Actvcode::getParentActvCodeId() { return parent_actv_code_id; }
void Actvcode::setParentActvCodeId(int value)
{
    if (value > 0)
    {
        parent_actv_code_id = value;
        parent_actv_code_id_str = std::to_string(value);
    }
}

int Actvcode::getSeqNum() { return seq_num; }
void Actvcode::setSeqNum(int value)
{
    if (value > 0)
    {
        seq_num = value;
        seq_num_str = std::to_string(value);
    }
}

std::string Actvcode::getActvCodeName() { return actv_code_name; }
void Actvcode::setActvCodeName(std::string value)
{
    if (!value.empty())
    {
        actv_code_name = value;
    }
}

std::string Actvcode::getShortName() { return short_name; }
void Actvcode::setShortName(std::string value){
    if(!value.empty()){
        short_name = value;
    }
}