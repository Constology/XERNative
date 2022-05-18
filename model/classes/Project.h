
#ifndef XERPARSER_PROJECT_H
#define XERPARSER_PROJECT_H

#include "../Projpcats.h"
#include "../Wbss.h"

#include <iostream>
#include <vector>

class Reader;

class Project
{
public:
    int getProjId();
    void setProjId(int value);
    int getAcctId();
    void setAcctId(int value);
    int getOrigProjId();
    void setOrigProjId(int value);
    int getSourceProjId();
    void setSourceProjId(int value);
    int getBaseTypeId();
    void setBaseTypeId(int value);
    int getClndrId();
    void setClndrId(int value);
    int getSumBaseProjId();
    void setSumBaseProjId(int value);
    int getLastFinDatesId();
    void setLastFinDatesId(int value);
    int getFintmplId();
    void setFintmplId(int value);
    int getLocationId();
    void setLocationId(int value);
    int getNewFinDatesId();
    void setNewFinDatesId(int value);
    std::string getFyStartMonthNum();
    void setFyStartMonthNum(std::string value);
    std::string getRsrcSelfAddFlag();
    void setRsrcSelfAddFlag(std::string value);
    std::string getAllowCompleteFlag();
    void setAllowCompleteFlag(std::string value);
    std::string getRsrcMultiAssignFlag();
    void setRsrcMultiAssignFlag(std::string value);
    std::string getCheckoutFlag();
    void setCheckoutFlag(std::string value);
    std::string getProjectFlag();
    void setProjectFlag(std::string value);
    std::string getStepCompleteFlag();
    void setStepCompleteFlag(std::string value);
    std::string getCostQtyRecalcFlag();
    void setCostQtyRecalcFlag(std::string value);
    std::string getBatchSumFlag();
    void setBatchSumFlag(std::string value);
    std::string getNameSepChar();
    void setNameSepChar(std::string value);
    std::string getDefCompletePctType();
    void setDefCompletePctType(std::string value);
    std::string getProjShortName();
    void setProjShortName(std::string value);
    std::string getTaskCodeBase();
    void setTaskCodeBase(std::string value);
    std::string getTaskCodeStep();
    void setTaskCodeStep(std::string value);
    std::string getPriorityNum();
    void setPriorityNum(std::string value);
    std::string getWbsMaxSumLevel();
    void setWbsMaxSumLevel(std::string value);
    std::string getStrgyPriorityNum();
    void setStrgyPriorityNum(std::string value);
    std::string getLastChecksum();
    void setLastChecksum(std::string value);
    std::string getCriticalDrtnHrCnt();
    void setCriticalDrtnHrCnt(std::string value);
    std::string getDefCostPerQty();
    void setDefCostPerQty(std::string value);
    std::string getLastRecalcDate();
    void setLastRecalcDate(std::string value);
    std::string getPlanStartDate();
    void setPlanStartDate(std::string value);
    std::string getPlanEndDate();
    void setPlanEndDate(std::string value);
    std::string getScdEndDate();
    void setScdEndDate(std::string value);
    std::string getAddDate();
    void setAddDate(std::string value);
    std::string getLastTasksumDate();
    void setLastTasksumDate(std::string value);
    std::string getFcstStartDate();
    void setFcstStartDate(std::string value);
    std::string getDefDurationType();
    void setDefDurationType(std::string value);
    std::string getTaskCodePrefix();
    void setTaskCodePrefix(std::string value);
    std::string getGuid();
    void setGuid(std::string value);
    std::string getDefQtyType();
    void setDefQtyType(std::string value);
    std::string getAddByName();
    void setAddByName(std::string value);
    std::string getWebLocalRootPath();
    void setWebLocalRootPath(std::string value);
    std::string getProjUrl();
    void setProjUrl(std::string value);
    std::string getDefRateType();
    void setDefRateType(std::string value);
    std::string getAddActRemainFlag();
    void setAddActRemainFlag(std::string value);
    std::string getActThisPerLinkFlag();
    void setActThisPerLinkFlag(std::string value);
    std::string getDefTaskType();
    void setDefTaskType(std::string value);
    std::string getActPctLinkFlag();
    void setActPctLinkFlag(std::string value);
    std::string getCriticalPathType();
    void setCriticalPathType(std::string value);
    std::string getTaskCodePrefixFlag();
    void setTaskCodePrefixFlag(std::string value);
    std::string getDefRollupDatesFlag();
    void setDefRollupDatesFlag(std::string value);
    std::string getUseProjectBaselineFlag();
    void setUseProjectBaselineFlag(std::string value);
    std::string getRemTargetLinkFlag();
    void setRemTargetLinkFlag(std::string value);
    std::string getResetPlannedFlag();
    void setResetPlannedFlag(std::string value);
    std::string getAllowNegActFlag();
    void setAllowNegActFlag(std::string value);
    std::string getSumAssignLevel();
    void setSumAssignLevel(std::string value);
    std::string getLastBaselineUpdateDate();
    void setLastBaselineUpdateDate(std::string value);
    std::string getCrExternalKey();
    void setCrExternalKey(std::string value);
    std::string getApplyActualsDate();
    void setApplyActualsDate(std::string value);
    std::string getLoadedScopeLevel();
    void setLoadedScopeLevel(std::string value);
    std::string getExportFlag();
    void setExportFlag(std::string value);
    std::string getBaselinesToExport();
    void setBaselinesToExport(std::string value);
    std::string getBaselineNamesToExport();
    void setBaselineNamesToExport(std::string value);
    std::string getNextDataDate();
    void setNextDataDate(std::string value);
    std::string getClosePeriodFlag();
    void setClosePeriodFlag(std::string value);
    std::string getSumRefreshDate();
    void setSumRefreshDate(std::string value);
    std::string getTrsrcsumLoaded();
    void setTrsrcsumLoaded(std::string value);
    std::string getSumtaskLoaded();
    void setSumtaskLoaded(std::string value);

    std::string get_tsv();
    Project(std::vector<std::string> header,
            std::vector<std::string> params,
            Reader *readerObj);
    std::vector<Wbs> getWbs();
    std::vector<Projpcat> getProjectCodes();

private:
    int proj_id;
    int acct_id;
    int orig_proj_id;
    int source_proj_id;
    int base_type_id;
    int clndr_id;
    int sum_base_proj_id;
    int last_fin_dates_id;
    int fintmpl_id;
    int location_id;
    int new_fin_dates_id;
    std::string fy_start_month_num;
    std::string rsrc_self_add_flag;
    std::string allow_complete_flag;
    std::string rsrc_multi_assign_flag;
    std::string checkout_flag;
    std::string project_flag;
    std::string step_complete_flag;
    std::string cost_qty_recalc_flag;
    std::string batch_sum_flag;
    std::string name_sep_char;
    std::string def_complete_pct_type;
    std::string proj_short_name;
    std::string task_code_base;
    std::string task_code_step;
    std::string priority_num;
    std::string wbs_max_sum_level;
    std::string strgy_priority_num;
    std::string last_checksum;
    std::string critical_drtn_hr_cnt;
    std::string def_cost_per_qty;
    std::string last_recalc_date;
    std::string plan_start_date;
    std::string plan_end_date;
    std::string scd_end_date;
    std::string add_date;
    std::string last_tasksum_date;
    std::string fcst_start_date;
    std::string def_duration_type;
    std::string task_code_prefix;
    std::string guid;
    std::string def_qty_type;
    std::string add_by_name;
    std::string web_local_root_path;
    std::string proj_url;
    std::string def_rate_type;
    std::string add_act_remain_flag;
    std::string act_this_per_link_flag;
    std::string def_task_type;
    std::string act_pct_link_flag;
    std::string critical_path_type;
    std::string task_code_prefix_flag;
    std::string def_rollup_dates_flag;
    std::string use_project_baseline_flag;
    std::string rem_target_link_flag;
    std::string reset_planned_flag;
    std::string allow_neg_act_flag;
    std::string sum_assign_level;
    std::string last_baseline_update_date;
    std::string cr_external_key;
    std::string apply_actuals_date;
    std::string loaded_scope_level;
    std::string export_flag;
    std::string baselines_to_export;
    std::string baseline_names_to_export;
    std::string next_data_date;
    std::string close_period_flag;
    std::string sum_refresh_date;
    std::string trsrcsum_loaded;
    std::string sumtask_loaded;

    Reader *reader;
    std::string tsv;
    void update_tsv();
    std::string proj_id_str;
    std::string acct_id_str;
    std::string orig_proj_id_str;
    std::string source_proj_id_str;
    std::string base_type_id_str;
    std::string clndr_id_str;
    std::string sum_base_proj_id_str;
    std::string last_fin_dates_id_str;
    std::string fintmpl_id_str;
    std::string location_id_str;
    std::string new_fin_dates_id_str;
};

#endif // XERPARSER_PROJECT_H
