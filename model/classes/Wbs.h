#ifndef XERPARSER_WBS_H
#define XERPARSER_WBS_H

#include <vector>
#include <string>

#include "../../Date/Date.h"
#include "../Tasks.h"

class Reader;

// TODO: convert dates from string to Date
class Wbs
{
public:
    int getWbsId();
    void setWbsId(int value);
    int getProjId();
    void setProjId(int value);
    int getObsId();
    void setObsId(int value);
    int getSeqNum();
    void setSeqNum(int value);
    int getEstWt();
    void setEstWt(int value);
    std::string getProjNodeFlag();
    void setProjNodeFlag(std::string value);
    std::string getSumDataFlag();
    void setSumDataFlag(std::string value);
    std::string getStatusCode();
    void setStatusCode(std::string value);
    std::string getWbsShortName();
    void setWbsShortName(std::string value);
    std::string getWbsName();
    void setWbsName(std::string value);
    int getPhaseId();
    void setPhaseId(int value);
    int getParentWbsId();
    void setParentWbsId(int value);
    int getEvUserPct();
    void setEvUserPct(int value);
    double getEvEtcUserValue();
    void setEvEtcUserValue(double value);
    double getOrigCost();
    void setOrigCost(double value);
    double getIndepRemainTotalCost();
    void setIndepRemainTotalCost(double value);
    double getAnnDscntRatePct();
    void setAnnDscntRatePct(double value);
    int getDscntPeriodType();
    void setDscntPeriodType(int value);
    double getIndepRemainWorkQty();
    void setIndepRemainWorkQty(double value);
    std::string getEvComputeType();
    void setEvComputeType(std::string value);
    std::string getEvEtcComputeType();
    void setEvEtcComputeType(std::string value);
    std::string getGuid();
    void setGuid(std::string value);
    std::string getTmplGuid();
    void setTmplGuid(std::string value);
    std::string getPlanOpenState();
    void setPlanOpenState(std::string value);
    Date getAnticipStartDate();
    void setAnticipStartDate(Date value);
    Date getAnticipEndDate();
    void setAnticipEndDate(Date value);

    std::vector<Task> getTasks();

    Wbs(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj);
    std::string get_tsv();

private:
    int wbs_id;
    std::string wbs_id_str;
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

    std::string tsv;
    Reader *reader;
    void update_tsv();

    std::string bs_id_str;
    std::string proj_id_str;
    std::string obs_id_str;
    std::string seq_num_str;
    std::string est_wt_str;
    std::string phase_id_str;
    std::string parent_wbs_id_str;
    std::string ev_user_pct_str;
    std::string ev_etc_user_value_str;
    std::string orig_cost_str;
    std::string indep_remain_total_cost_str;
    std::string ann_dscnt_rate_pct_str;
    std::string dscnt_period_type_str;
    std::string indep_remain_work_qty_str;
    std::string anticip_start_date_str;
    std::string anticip_end_date_str;
};

#endif // EXRPARSER_ACCOUNTS_H