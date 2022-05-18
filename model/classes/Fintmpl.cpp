

#include "Fintmpl.h"

#include "../../Reader.h"

Fintmpl::Fintmpl(const std::vector<std::string> header,
                 const std::vector<std::string> params,
                 Reader *readerObj)
{
    tsv = "";
    reader = readerObj;
    for (int i = 0; i < header.size(); i++)
    {
        if (header.at(i) == "fintmpl_id")
        {
            if (!params.at(i).empty())
            {
                fintmpl_id = stoi(params.at(i));
                fintmpl_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "fintmpl_name")
        {
            fintmpl_name = params.at(i);
        }
        else if (header.at(i) == "default_flag")
        {
            default_flag = params.at(i);
        }
    }
    update_tsv();
}

void Fintmpl::update_tsv()
{
    tsv = "%R\t";
    tsv.append(fintmpl_id_str)
        .append("\t")
        .append(fintmpl_name)
        .append("\t")
        .append(default_flag)
        .append("\n");
}

std::string Fintmpl::get_tsv()
{
    update_tsv();
    return tsv;
}

int Fintmpl::getFinTmplId()
{
    return fintmpl_id;
}
void Fintmpl::setFinTmplId(int value)
{
    if (value > 0)
    {
        fintmpl_id = value;
    }
}
std::string Fintmpl::getFintmplName()
{
    return fintmpl_name;
}
void Fintmpl::setFintmplName(std::string value)
{
    if (!value.empty())
    {
        fintmpl_name = value;
    }
}
std::string Fintmpl::getDefaultFlag()
{
    return default_flag;
}
void Fintmpl::setDefaultFlag(std::string value)
{
    if (!value.empty())
    {
        default_flag = value;
    }
}