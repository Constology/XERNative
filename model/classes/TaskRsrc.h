
#ifndef XERPARSER_TASKRSRC_H
#define XERPARSER_TASKRSRC_H

#include <iostream>
#include <string>
#include <vector>

class Task;
class Rsrc;
class Reader;

class Reader;

class TaskRsrc
{
public:
    int getTaskrsrcId();
    void setTaskrsrcId(int value);
    int getTaskId();
    void setTaskId(int value);
    int getProjId();
    void setProjId(int value);
    std::string getCostQtyLinkFlag();
    void setCostQtyLinkFlag(std::string value);
    int getRoleId();
    void setRoleId(int value);
    int getAcctId();
    void setAcctId(int value);
    int getRsrcId();
    void setRsrcId(int value);
    int getPobsId();
    void setPobsId(int value);
    std::string getSkillLevel();
    void setSkillLevel(std::string value);
    float getRemainQty();
    void setRemainQty(float value);
    float getTargetQty();
    void setTargetQty(float value);
    float getRemainQtyPerHour();
    void setRemainQtyPerHour(float value);
    float getTargetLagDrtnHrCnt();
    void setTargetLagDrtnHrCnt(float value);
    float getTargetQtyPerHour();
    void setTargetQtyPerHour(float value);
    std::string getActOtQty();
    void setActOtQty(std::string value);
    std::string getActRegQty();
    void setActRegQty(std::string value);
    std::string getRelagDrtnHrCnt();
    void setRelagDrtnHrCnt(std::string value);
    std::string getOtFactor();
    void setOtFactor(std::string value);
    std::string getCostPerQty();
    void setCostPerQty(std::string value);
    std::string getTargetCost();
    void setTargetCost(std::string value);
    std::string getActRegCost();
    void setActRegCost(std::string value);
    std::string getActOtCost();
    void setActOtCost(std::string value);
    std::string getRemainCost();
    void setRemainCost(std::string value);
    std::string getActStartDate();
    void setActStartDate(std::string value);
    std::string getActEndDate();
    void setActEndDate(std::string value);
    std::string getRestartDate();
    void setRestartDate(std::string value);
    std::string getReendDate();
    void setReendDate(std::string value);
    std::string getTargetStartDate();
    void setTargetStartDate(std::string value);
    std::string getTargetEndDate();
    void setTargetEndDate(std::string value);
    std::string getRemLateStartDate();
    void setRemLateStartDate(std::string value);
    std::string getRemLateEndDate();
    void setRemLateEndDate(std::string value);
    std::string getRollupDatesFlag();
    void setRollupDatesFlag(std::string value);
    std::string getTargetCrv();
    void setTargetCrv(std::string value);
    std::string getRemainCrv();
    void setRemainCrv(std::string value);
    std::string getActualCrv();
    void setActualCrv(std::string value);
    std::string getTsPendActEndFlag();
    void setTsPendActEndFlag(std::string value);
    std::string getGuid();
    void setGuid(std::string value);
    std::string getRateType();
    void setRateType(std::string value);
    std::string getActThisPerCost();
    void setActThisPerCost(std::string value);
    std::string getActThisPerQty();
    void setActThisPerQty(std::string value);
    std::string getCurvId();
    void setCurvId(std::string value);
    std::string getRsrcType();
    void setRsrcType(std::string value);
    std::string getCostPerQtySourceType();
    void setCostPerQtySourceType(std::string value);
    std::string getCreateUser();
    void setCreateUser(std::string value);
    std::string getCreateDate();
    void setCreateDate(std::string value);
    std::string getCbsId();
    void setCbsId(std::string value);
    std::string getHasRsrchours();
    void setHasRsrchours(std::string value);
    std::string getTaskrsrcSumId();
    void setTaskrsrcSumId(std::string value);

    Rsrc *rsrc;
    Task *task;
    std::string get_tsv();

    TaskRsrc(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj);

private:
    int taskrsrc_id;
    int task_id;
    int proj_id;
    std::string cost_qty_link_flag;
    int role_id;
    int acct_id;
    int rsrc_id;
    int pobs_id;
    std::string skill_level;
    float remain_qty;
    float target_qty;
    float remain_qty_per_hour;
    float target_lag_drtn_hr_cnt;
    float target_qty_per_hour;
    std::string act_ot_qty;
    std::string act_reg_qty;
    std::string relag_drtn_hr_cnt;
    std::string ot_factor;
    std::string cost_per_qty;
    std::string target_cost;
    std::string act_reg_cost;
    std::string act_ot_cost;
    std::string remain_cost;
    std::string act_start_date;
    std::string act_end_date;
    std::string restart_date;
    std::string reend_date;
    std::string target_start_date;
    std::string target_end_date;
    std::string rem_late_start_date;
    std::string rem_late_end_date;
    std::string rollup_dates_flag;
    std::string target_crv;
    std::string remain_crv;
    std::string actual_crv;
    std::string ts_pend_act_end_flag;
    std::string guid;
    std::string rate_type;
    std::string act_this_per_cost;
    std::string act_this_per_qty;
    std::string curv_id;
    std::string rsrc_type;
    std::string cost_per_qty_source_type;
    std::string create_user;
    std::string create_date;
    std::string cbs_id;
    std::string has_rsrchours;
    std::string taskrsrc_sum_id;

    Reader *reader;
    void update_tsv();
    std::string tsv;

    std::string taskrsrc_id_str;
    std::string task_id_str;
    std::string proj_id_str;
    std::string role_id_str;
    std::string acct_id_str;
    std::string rsrc_id_str;
    std::string pobs_id_str;

    std::string remain_qty_str;
    std::string target_qty_str;
    std::string remain_qty_per_hour_str;
    std::string target_lag_drtn_hr_cnt_str;
    std::string target_qty_per_hour_str;
};

#endif // XERPARSER_TASKRSRC_H
