
#include "Projpcat.h"

#include "../../Reader.h"

Projpcat::Projpcat(const std::vector<std::string> header,
                   const std::vector<std::string> params,
                   Reader *readerObj)
{
    tsv = "";
    for (int i = 0; i < params.size(); i++)
    {
        if (header.at(i) == "proj_id")
        {
            if (!params.at(i).empty())
            {
                proj_id = stoi(params.at(i));
            }
        }
        else if (header.at(i) == "proj_catg_type_id")
        {
            if (!params.at(i).empty())
            {
                proj_catg_type_id = stoi(params.at(i));
            }
        }
        else if (header.at(i) == "proj_catg_id")
        {
            if (!params.at(i).empty())
            {

                proj_catg_id = stoi(params.at(i));
            }
        }
    }
    update_tsv();
    reader = readerObj;
}

Pcatval Projpcat::getValue() { return reader->pcatvals.findById(proj_catg_id); }

void Projpcat::update_tsv()
{
    tsv = "%R\t";
    tsv.append(proj_id_str)
        .append("\t")
        .append(proj_catg_type_id_str)
        .append("\t")
        .append(proj_catg_id_str)
        .append("\n");
}

std::string Projpcat::get_tsv() const { return tsv; }
