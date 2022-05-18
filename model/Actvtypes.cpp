
#include "Actvtypes.h"

void Actvtypes::add(Actvtype &actvtype) { actvtypes.emplace_back(actvtype); }

Actvtype Actvtypes::findById(int id)
{
    for (auto &actvtype : actvtypes)
    {
        if (actvtype.getActvCodeTypeId() == id)
        {
            return actvtype;
        }
    }
    printf("Account not found");
    exit(EXIT_FAILURE);
}

std::vector<Actvtype> Actvtypes::getAll() { return actvtypes; }

std::string Actvtypes::get_tsv()
{
    std::string tsv;
    tsv.append("%T\tACTVTYPE\n");
    tsv.append("%F\tactv_code_type_id\tproj_id\tseq_num\tactv_short_len\tactv_code_type"
               "\tactv_code_type_scope\tsuper_flag\n");
    for (auto &actvtype : actvtypes)
    {
        tsv.append(actvtype.get_tsv());
    }
    return tsv;
}
