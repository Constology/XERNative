
#include "Fintmpls.h"

void Fintmpls::add(Fintmpl &fintmpl) { fintmpls.emplace_back(fintmpl); }

Fintmpl Fintmpls::findById(int id)
{
    for (auto &fintmpl : fintmpls)
    {
        if (fintmpl.getFinTmplId() == id)
        {
            return fintmpl;
        }
    }
    printf("Account not found");
    exit(EXIT_FAILURE);
}

std::vector<Fintmpl> Fintmpls::getAll() { return fintmpls; }

std::string Fintmpls::get_tsv()
{
    std::string tsv;
    tsv.append("%T\tFINTMPL\n");
    tsv.append("%F\tfintmpl_id\tfintmpl_name\tdefault_tag\n");
    for (auto &fintmpl : fintmpls)
    {
        tsv.append(fintmpl.get_tsv());
    }
    return tsv;
}
