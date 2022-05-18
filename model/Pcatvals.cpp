
#include "Pcatvals.h"

void Pcatvals::add(Pcatval &pcatval) { pcatvals.emplace_back(pcatval); }

Pcatval Pcatvals::findById(int id)
{
    for (auto &pcatval : pcatvals)
    {
        if (pcatval.getProjCatgId() == id)
        {
            return pcatval;
        }
    }
    printf("Pcatval not found");
    exit(EXIT_FAILURE);
}

std::vector<Pcatval> Pcatvals::getAll() { return pcatvals; }

std::string Pcatvals::get_tsv()
{
    std::string tsv;
    tsv.append("%T\tPCATVAL\n");
    tsv.append("%F\tproj_catg_id\tproj_catg_type_id\tseq_num\tacct_name\tparent_proj_catg_id"
               "\tproj_catg_short_name\tproj_catg_name\n");
    for (auto &pcatval : pcatvals)
    {
        tsv.append(pcatval.get_tsv());
    }
    return tsv;
}

std::vector<Pcatval> Pcatvals::getByTypeId(int id)
{
    std::vector<Pcatval> toReturn;
    for (Pcatval pval : pcatvals)
    {
        if (pval.getProjCatgTypeId() == id)
        {
            toReturn.emplace_back(pval);
        }
    }
    return toReturn;
}
