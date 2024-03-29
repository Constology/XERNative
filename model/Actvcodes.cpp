
#include "Actvcodes.h"

void Actvcodes::add(Actvcode &actvcode) { actvcodes.emplace_back(actvcode); }

Actvcode Actvcodes::findById(int id)
{
    for (auto &actvcode : actvcodes)
    {
        if (actvcode.getActvCodeId() == id)
        {
            return actvcode;
        }
    }
    printf("Account not found");
    exit(EXIT_FAILURE);
}

std::vector<Actvcode> Actvcodes::getAll() { return actvcodes; }

std::string Actvcodes::get_tsv()
{
    std::string tsv;
    tsv.append("%T\tACTVCODE\n");
    tsv.append("%F\tactv_code_id\tactv_code_type_id\tparent_actv_code_id\tseq_num\tactv_code_name"
               "\tshort_name\n");
    for (auto &actvcode : actvcodes)
    {
        tsv.append(actvcode.get_tsv());
    }
    return tsv;
}
