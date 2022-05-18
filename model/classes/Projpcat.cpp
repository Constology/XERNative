
#include "Projpcat.h"

#include "../../Reader.h"

Projpcat::Projpcat( std::vector<std::string> header,
                    std::vector<std::string> params,
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

std::string Projpcat::get_tsv()
{
    update_tsv();
    return tsv;
}

int Projpcat::getProjId() { return proj_id; }
void Projpcat::setProjId(int value)
{
    if (value > 0)
    {
        proj_id = value;
        proj_id_str = std::to_string(value);
    }
}
int Projpcat::getProjCatgTypeId() { return proj_catg_type_id; }
void Projpcat::setProjCatgTypeId(int value)
{
    if (value > 0)
    {
        proj_catg_type_id = value;
        proj_catg_type_id_str = std::to_string(value);
    }
}
int Projpcat::getProjCatgId() { return proj_catg_id; }
void Projpcat::setProjCatgId(int value)
{
    if (value > 0)
    {
        proj_catg_id = value;
        proj_catg_id_str = std::to_string(value);
    }
}
