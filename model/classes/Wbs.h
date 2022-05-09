#ifndef XERPARSER_WBS_H
#define XERPARSER_WBS_H

#include <vector>
#include<string>

#include "../../Date/Date.h"

// TODO: convert dates from string to Date
class Wbs
{
public:
    int wbs_id;
    int proj_id;
    int obs_id;
    int seq_num;
    int est_wt;
    std::string proj_node_flag;
    std::string sum_data_flag;
    std::string status_code;
    std::string wbs_short_name;
    std::string wbs_name;
    int phase_id;
    int parent_wbs_id;
    int ev_user_pct;
    double ev_etc_user_value;
    double orig_cost;
    double indep_remain_total_cost;
    double ann_dscnt_rate_pct;
    int dscnt_period_type;
    double indep_remain_work_qty;
    std::string ev_compute_type;
    std::string ev_etc_compute_type;
    std::string guid;
    std::string tmpl_guid;
    std::string plan_open_state;
    Date anticip_start_date;
    Date anticip_end_date;

    Wbs(const std::string *header, const std::string *params);
    std::string get_tsv();

private:
    std::string tsv;
};

#endif //EXRPARSER_ACCOUNTS_H