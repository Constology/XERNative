#include "Wbss.h"

void Wbss::add(const Wbs &wbs)
{
    wbss.emplace_back(wbs);
}

Wbs Wbss::findById(int id)
{
    for (auto &wb : wbss)
    {
        if (wb.wbs_id == id)
        {
            return wb;
        }
    }
    printf("Wbs not found");
    exit(EXIT_FAILURE);
}

Wbs Wbss::getParent(int id)
{
    Wbs cur_wbs = findById(id);
    int parent_id = cur_wbs.parent_wbs_id;
    return findById(parent_id);
}

std::vector<Wbs> Wbss::getChildren(int id)
{
    std::vector<Wbs> toReturn;
    for (auto &wb : wbss)
    {
        if (wb.parent_wbs_id == id)
        {
            toReturn.push_back(wb);
        }
    }
    if (toReturn.empty())
    {
        printf("No Children found");
    }
    return toReturn;
}

std::vector<Wbs> Wbss::getByProjectId(int id)
{
    std::vector<Wbs> toReturn;
    for (auto &wbs : wbss)
    {
        if (wbs.proj_id == id)
        {
            toReturn.push_back(wbs);
        }
    }
    return toReturn;
}

std::vector<Wbs> Wbss::getAll()
{
    return wbss;
}

std::string Wbss::get_tsv() const
{
    std::string tsv;
    tsv.append("%T\tPROJWBS\n");
    tsv.append("%F\twbs_id\tproj_id\tobs_id\tseq_num\test_wt\tproj_node_flag\tsum_data_flag\t"
               "status_code\twbs_short_name\twbs_name\tphase_id\tparent_wbs_id\tev_user_pct\t"
               "ev_etc_user_value\torig_cost\tindep_remain_total_cost\tann_dscnt_rate_pct\t"
               "dscnt_period_type\tindep_remain_work_qty\tanticip_start_date\tanticip_end_date\t"
               "ev_compute_type\tev_etc_compute_type\tguid\ttmpl_guid\tplan_open_state\n");
    for (auto wbs : wbss)
    {
        tsv.append(wbs.get_tsv());
    }
    return tsv;
}
