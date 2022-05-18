

#include "Rsrcs.h"

void Rsrcs::add(Rsrc &rsrc) { rsrcs.emplace_back(rsrc); }

Rsrc *Rsrcs::findById(int id)
{
    for (auto &rsrc : rsrcs)
    {
        if (rsrc.getRsrcId() == id)
        {
            return &rsrc;
        }
    }
    printf("Rsrc not found");
    exit(EXIT_FAILURE);
}

std::vector<Rsrc> Rsrcs::getAll() { return rsrcs; }

std::vector<Rsrc> Rsrcs::getChildren(int id)
{
    std::vector<Rsrc> toReturn;
    for (Rsrc rsr : rsrcs)
    {
        if (rsr.getParentRsrcId() == id)
        {
            toReturn.emplace_back(rsr);
        }
    }
    return toReturn;
}

std::string Rsrcs::get_tsv()
{
    std::string tsv;
    tsv.append("%T\tRSRC\n");
    tsv.append(
        "%F\trsrc_id\tparent_rsrc_id\tclndr_id\trole_id\tshift_id\tuser_id\tpobs_id\t"
        "rsrc_seq_num\tcurr_id\tunit_id\tlocation_id\tguid\tuser_id\temail_addr\t"
        "employee_code\toffice_phone\tother_phone\trsrc_name\trsrc_short_name\trsrc_title_name\t"
        "def_qty_per_hr\tcost_qty_type\tot_factor\tactive_flag\tauto_compute_act_flag\t"
        "def_cost_qty_link_flag\tot_flag\trsrc_type\trsrc_notes\tload_tasks_flag\t"
        "level_flag\tlast_checksum\n");
    for (auto &rsrc : rsrcs)
    {
        tsv.append(rsrc.get_tsv());
    }
    return tsv;
}
