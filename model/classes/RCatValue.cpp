#include "RCatValue.h"
#include "../../Reader.h"

RCatValue::RCatValue(const std::vector<std::string> header,
                     const std::vector<std::string> params,
                     Reader *readerObj)
{
    reader = readerObj;
    for (int i = 0; i < header.size(); i++)
    {
        if (header.at(i).empty())
            break;
        if (header.at(i) == "parent_rsrc_catg_id")
        {
            if (!params.at(i).empty())
            {
                parent_rsrc_catg_id = stoi(params.at(i));
                parent_rsrc_catg_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "rsrc_catg_id")
        {
            if (!params.at(i).empty())
            {
                rsrc_catg_id = stoi(params.at(i));
                rsrc_catg_id_str = params.at(i);
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
        else if (header.at(i) == "rsrc_catg_name")
        {
            rsrc_catg_name = params.at(i);
        }
        else if (header.at(i) == "rsrc_catg_short_name")
        {
            rsrc_catg_short_name = params.at(i);
        }
    }
    update_tsv();
}

void RCatValue::update_tsv()
{
    tsv = "%R\t";
    tsv.append(rsrc_catg_id_str).append("\t").append(rsrc_catg_type_id_str).append("\t").append(rsrc_catg_short_name).append("\t").append(rsrc_catg_name).append("\t").append(parent_rsrc_catg_id_str).append("\t").append(seq_num_str).append("\n");
}

std::string RCatValue::get_tsv() const { return tsv; }