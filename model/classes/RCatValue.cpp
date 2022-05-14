#include "RCatValue.h"

RCatValue::RCatValue(const std::vector<std::string> header, const std::vector<std::string> params)
{
    for (int i = 0; i < header.size(); i++)
    {
        if (header.at(i).empty())
            break;
        if (header.at(i) == "parent_rsrc_catg_id")
        {
            if (!params.at(i).empty())
            {
                parent_rsrc_catg_id = stoi(params.at(i));
            }
        }
        else if (header.at(i) == "rsrc_catg_id")
        {
            if (!params.at(i).empty())
            {
                rsrc_catg_id = stoi(params.at(i));
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
        else if (header.at(i) == "rsrc_catg_name")
        {
            rsrc_catg_name = params.at(i);
        }
        else if (header.at(i) == "rsrc_catg_short_name")
        {
            rsrc_catg_short_name = params.at(i);
        }
    }
}

std::string RCatValue::get_tsv()
{
    tsv = "";
    tsv.append(std::to_string(rsrc_catg_id).append("\t"))
        .append(std::to_string(rsrc_catg_type_id))
        .append("\t")
        .append(rsrc_catg_short_name)
        .append("\t")
        .append(rsrc_catg_name)
        .append("\t")
        .append(std::to_string(parent_rsrc_catg_id))
        .append("\t")
        .append(std::to_string(seq_num))
        .append("\n");
    return tsv;
}