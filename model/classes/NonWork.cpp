
#include "NonWork.h"

#include "../../Reader.h"

NonWork::NonWork(std::vector<std::string> header,
                 std::vector<std::string> params,
                 Reader *readerObj)
{
    tsv = "";
    reader = readerObj;
    for (int i = 0; i < header.size(); i++)
    {
        if (header.at(i) == "nonwork_type_id")
        {
            if (!params.at(i).empty())
            {
                nonwork_type_id = std::stoi(params.at(i));
                nonwork_type_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "seq_num")
        {
            if (!params.at(i).empty())
            {
                seq_num = std::stoi(params.at(i));
                seq_num_str = params.at(i);
            }
        }
        else if (header.at(i) == "nonwork_code")
        {
            nonwork_code = params.at(i);
        }
        else if (header.at(i) == "nonwork_type")
        {
            nonwork_type = params.at(i);
        }
    }
    update_tsv();
}

void NonWork::update_tsv()
{
    tsv = "%R\t";
    tsv.append(nonwork_type_id_str)
        .append("\t")
        .append(seq_num_str)
        .append("\t")
        .append(nonwork_code)
        .append("\t")
        .append(nonwork_type)
        .append("\n");
}

std::string NonWork::get_tsv() { return tsv; }

int NonWork::getNonworkTypeId()
{
    return nonwork_type_id;
}
void NonWork::setNonworkTypeId(int value)
{
    if (value > 0)
    {
        nonwork_type_id = value;
        nonwork_type_id_str = std::to_string(value);
    }
}
int NonWork::getSeqNum()
{
    return seq_num;
}
void NonWork::setSeqNum(int value)
{
    if (value > 0)
    {
        seq_num = value;
        seq_num_str = std::to_string(value);
    }
}
std::string NonWork::getNonworkCode()
{
    return nonwork_code;
}
void NonWork::setNonworkCode(std::string value)
{
    if (!value.empty())
    {
        nonwork_code = value;
    }
}
std::string NonWork::getNonworkType()
{
    return nonwork_type;
}
void NonWork::setNonworkType(std::string value)
{
    if (!value.empty())
    {
        nonwork_type = value;
    }
}