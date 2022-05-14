#include "RCatType.h"

RCatType::RCatType(const std::vector<std::string> header, const std::vector<std::string> params)
{
    for (int i = 0; i < header.size(); i++)
    {
        if (header.at(i).empty())
            break;
        if (header.at(i) == "rsrc_catg_short_len")
        {
            if (!params.at(i).empty())
            {
                rsrc_catg_short_len = stoi(params.at(i));
            }
        }
        else if (header.at(i) == "rsrc_catg_type_id")
        {
            if (!params.at(i).empty())
            {
                rsrc_catg_type_id = stoi(params.at(i));
            }
        }
        else if (header.at(i) == "seq_num")
        {
            if (!params.at(i).empty())
            {
                seq_num = stoi(params.at(i));
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
}

std::string RCatType::get_tsv()
{
    tsv = "";
    tsv.append(std::to_string(rsrc_catg_short_len)).append("\t").append(rsrc_catg_type).append("\t").append(std::to_string(rsrc_catg_type_id)).append("\t").append(std::to_string(seq_num)).append("\t").append(super_flag).append("\n");

    return tsv;
}