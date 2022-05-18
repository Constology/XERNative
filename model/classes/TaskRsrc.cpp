
#include "TaskRsrc.h"

#include "../../Reader.h"

TaskRsrc::TaskRsrc(const std::vector<std::string> header,
                   const std::vector<std::string> params,
                   Reader *readerObj) {
    reader = readerObj;
    tsv = "";
    for (int i = 0; i < header.size(); i++) {
        if (header.at(i) == "taskrsrc_id") {
            if (!params.at(i).empty()) {
                taskrsrc_id = stoi(params.at(i));
            }
        } else if (header.at(i) == "task_id") {
            if (!params.at(i).empty()) {
                task_id = stoi(params.at(i));
            }
        } else if (header.at(i) == "proj_id") {
            if (!params.at(i).empty()) {
                proj_id = stoi(params.at(i));
            }
        } else if (header.at(i) == "cost_qty_link_flag") {
            cost_qty_link_flag = params.at(i);
        } else if (header.at(i) == "role_id") {
            if (!params.at(i).empty()) {
                role_id = stoi(params.at(i));
            }
        } else if (header.at(i) == "acct_id") {
            if (!params.at(i).empty()) {
                acct_id = stoi(params.at(i));
            }
        } else if (header.at(i) == "rsrc_id") {
            if (!params.at(i).empty()) {
                rsrc_id = stoi(params.at(i));
            }
        } else if (header.at(i) == "pobs_id") {
            if (!params.at(i).empty()) {
                pobs_id = stoi(params.at(i));
            }
        } else if (header.at(i) == "skill_level") {
            skill_level = params.at(i);
        } else if (header.at(i) == "remain_qty") {
            if (!params.at(i).empty()) {
                if (!params.at(i).empty()) {
                    remain_qty = stof(params.at(i));
                }
            }
        } else if (header.at(i) == "target_qty") {
            if (!params.at(i).empty()) {
                target_qty = stof(params.at(i));
            }
        } else if (header.at(i) == "remain_qty_per_hour") {
            if (!params.at(i).empty()) {
                remain_qty_per_hour = stof(params.at(i));
            }
        } else if (header.at(i) == "target_lag_drtn_hr_cnt") {
            if (!params.at(i).empty()) {
                target_lag_drtn_hr_cnt = stof(params.at(i));
            }
        } else if (header.at(i) == "target_qty_per_hour") {
            if (!params.at(i).empty()) {
                target_qty_per_hour = stof(params.at(i));
            }
        } else if (header.at(i) == "act_ot_qty") {
            act_ot_qty = params.at(i);
        } else if (header.at(i) == "act_reg_qty") {
            act_reg_qty = params.at(i);
        } else if (header.at(i) == "relag_drtn_hr_cnt") {
            relag_drtn_hr_cnt = params.at(i);
        } else if (header.at(i) == "ot_factor") {
            ot_factor = params.at(i);
        } else if (header.at(i) == "cost_per_qty") {
            cost_per_qty = params.at(i);
        } else if (header.at(i) == "target_cost") {
            target_cost = params.at(i);
        } else if (header.at(i) == "act_reg_cost") {
            act_reg_cost = params.at(i);
        } else if (header.at(i) == "act_ot_cost") {
            act_ot_cost = params.at(i);
        } else if (header.at(i) == "remain_cost") {
            remain_cost = params.at(i);
        } else if (header.at(i) == "act_start_date") {
            act_start_date = params.at(i);
        } else if (header.at(i) == "act_end_date") {
            act_end_date = params.at(i);
        } else if (header.at(i) == "restart_date") {
            restart_date = params.at(i);
        } else if (header.at(i) == "reend_date") {
            reend_date = params.at(i);
        } else if (header.at(i) == "target_start_date") {
            target_start_date = params.at(i);
        } else if (header.at(i) == "target_end_date") {
            target_end_date = params.at(i);
        } else if (header.at(i) == "rem_late_start_date") {
            rem_late_start_date = params.at(i);
        } else if (header.at(i) == "rem_late_end_date") {
            rem_late_end_date = params.at(i);
        } else if (header.at(i) == "rollup_dates_flag") {
            rollup_dates_flag = params.at(i);
        } else if (header.at(i) == "target_crv") {
            target_crv = params.at(i);
        } else if (header.at(i) == "remain_crv") {
            remain_crv = params.at(i);
        } else if (header.at(i) == "actual_crv") {
            actual_crv = params.at(i);
        } else if (header.at(i) == "ts_pend_act_end_flag") {
            ts_pend_act_end_flag = params.at(i);
        } else if (header.at(i) == "guid") {
            guid = params.at(i);
        } else if (header.at(i) == "rate_type") {
            rate_type = params.at(i);
        } else if (header.at(i) == "act_this_per_cost") {
            act_this_per_cost = params.at(i);
        } else if (header.at(i) == "act_this_per_qty") {
            act_this_per_qty = params.at(i);
        } else if (header.at(i) == "curv_id") {
            curv_id = params.at(i);
        } else if (header.at(i) == "rsrc_type") {
            rsrc_type = params.at(i);
        } else if (header.at(i) == "cost_per_qty_source_type") {
            cost_per_qty_source_type = params.at(i);
        } else if (header.at(i) == "create_user") {
            create_user = params.at(i);
        } else if (header.at(i) == "create_date") {
            create_date = params.at(i);
        } else if (header.at(i) == "cbs_id") {
            cbs_id = params.at(i);
        } else if (header.at(i) == "has_rsrchours") {
            has_rsrchours = params.at(i);
        } else if (header.at(i) == "taskrsrc_sum_id") {
            taskrsrc_sum_id = params.at(i);
        }
    }
    update_tsv();
}

void TaskRsrc::update_tsv() {
    tsv = "%R\t";
    tsv.append(std::to_string(taskrsrc_id))
        .append("\t")
        .append(std::to_string(task_id))
        .append("\t")
        .append(std::to_string(proj_id))
        .append("\t")
        .append(cost_qty_link_flag)
        .append("\t")
        .append(std::to_string(role_id))
        .append("\t")
        .append(std::to_string(acct_id))
        .append("\t")
        .append(std::to_string(rsrc_id))
        .append("\t")
        .append(std::to_string(pobs_id))
        .append("\t")
        .append(skill_level)
        .append("\t")
        .append(std::to_string(remain_qty))
        .append("\t")
        .append(std::to_string(target_qty))
        .append("\t")
        .append(std::to_string(remain_qty_per_hour))
        .append("\t")
        .append(std::to_string(target_lag_drtn_hr_cnt))
        .append("\t")
        .append(std::to_string(target_qty_per_hour))
        .append("\t")
        .append(act_ot_qty)
        .append("\t")
        .append(act_reg_qty)
        .append("\t")
        .append(relag_drtn_hr_cnt)
        .append("\t")
        .append(ot_factor)
        .append("\t")
        .append(cost_per_qty)
        .append("\t")
        .append(target_cost)
        .append("\t")
        .append(act_reg_cost)
        .append("\t")
        .append(act_ot_cost)
        .append("\t")
        .append(remain_cost)
        .append("\t")
        .append(act_start_date)
        .append("\t")
        .append(act_end_date)
        .append("\t")
        .append(restart_date)
        .append("\t")
        .append(reend_date)
        .append("\t")
        .append(target_start_date)
        .append("\t")
        .append(target_end_date)
        .append("\t")
        .append(rem_late_start_date)
        .append("\t")
        .append(rem_late_end_date)
        .append("\t")
        .append(rollup_dates_flag)
        .append("\t")
        .append(target_crv)
        .append("\t")
        .append(remain_crv)
        .append("\t")
        .append(actual_crv)
        .append("\t")
        .append(ts_pend_act_end_flag)
        .append("\t")
        .append(guid)
        .append("\t")
        .append(rate_type)
        .append("\t")
        .append(act_this_per_cost)
        .append("\t")
        .append(act_this_per_qty)
        .append("\t")
        .append(curv_id)
        .append("\t")
        .append(rsrc_type)
        .append("\t")
        .append(cost_per_qty_source_type)
        .append("\t")
        .append(create_user)
        .append("\t")
        .append(create_date)
        .append("\t")
        .append(cbs_id)
        .append("\t")
        .append(has_rsrchours)
        .append("\t")
        .append(taskrsrc_sum_id)
        .append("\n");
}

std::string TaskRsrc::get_tsv() {
    update_tsv();
    return tsv;
}

int TaskRsrc::getTaskrsrcId() { return taskrsrc_id; }
void TaskRsrc::setTaskrsrcId(int value) {
    if (value > 0) {
        taskrsrc_id = value;
        taskrsrc_id_str = std::to_string(value);
    }
}
int TaskRsrc::getTaskId() { return task_id; }
void TaskRsrc::setTaskId(int value) {
    if (value > 0) {
        task_id = value;
        task_id_str = std::to_string(value);
    }
}
int TaskRsrc::getProjId() { return proj_id; }
void TaskRsrc::setProjId(int value) {
    if (value > 0) {
        proj_id = value;
        proj_id_str = std::to_string(value);
    }
}
std::string TaskRsrc::getCostQtyLinkFlag() { return cost_qty_link_flag; }
void TaskRsrc::setCostQtyLinkFlag(std::string value) {
    if (!value.empty()) {
        cost_qty_link_flag = value;
    }
}
int TaskRsrc::getRoleId() { return role_id; }
void TaskRsrc::setRoleId(int value) {
    if (value > 0) {
        role_id = value;
        role_id_str = std::to_string(value);
    }
}
int TaskRsrc::getAcctId() { return acct_id; }
void TaskRsrc::setAcctId(int value) {
    if (value > 0) {
        acct_id = value;
        acct_id_str = std::to_string(value);
    }
}
int TaskRsrc::getRsrcId() { return rsrc_id; }
void TaskRsrc::setRsrcId(int value) {
    if (value > 0) {
        rsrc_id = value;
        rsrc_id_str = std::to_string(value);
    }
}
int TaskRsrc::getPobsId() { return pobs_id; }
void TaskRsrc::setPobsId(int value) {
    if (value > 0) {
        pobs_id = value;
        pobs_id_str = std::to_string(value);
    }
}
std::string TaskRsrc::getSkillLevel() { return skill_level; }
void TaskRsrc::setSkillLevel(std::string value) {
    if (!value.empty()) {
        skill_level = value;
    }
}
float TaskRsrc::getRemainQty() { return remain_qty; }
void TaskRsrc::setRemainQty(float value) {
    if (value > 0.0f) {
        remain_qty = value;
        remain_qty_str = std::to_string(value);
    }
}
float TaskRsrc::getTargetQty() { return target_qty; }
void TaskRsrc::setTargetQty(float value) {
    if (value > 0.0f) {
        target_qty = value;
        target_qty_str = std::to_string(value);
    }
}
float TaskRsrc::getRemainQtyPerHour() { return remain_qty_per_hour; }
void TaskRsrc::setRemainQtyPerHour(float value) {
    if (value > 0.0f) {
        remain_qty_per_hour = value;
        remain_qty_per_hour_str = std::to_string(value);
    }
}
float TaskRsrc::getTargetLagDrtnHrCnt() { return target_lag_drtn_hr_cnt; }
void TaskRsrc::setTargetLagDrtnHrCnt(float value) {
    if (value > 0.0f) {
        target_lag_drtn_hr_cnt = value;
        target_lag_drtn_hr_cnt_str = std::to_string(value);
    }
}
float TaskRsrc::getTargetQtyPerHour() { return target_qty_per_hour; }
void TaskRsrc::setTargetQtyPerHour(float value) {
    if (value > 0.0f) {
        target_qty_per_hour = value;
        target_qty_per_hour_str = std::to_string(value);
    }
}
std::string TaskRsrc::getActOtQty() { return act_ot_qty; }
void TaskRsrc::setActOtQty(std::string value) {
    if (!value.empty()) {
        act_ot_qty = value;
    }
}
std::string TaskRsrc::getActRegQty() { return act_reg_qty; }
void TaskRsrc::setActRegQty(std::string value) {
    if (!value.empty()) {
        act_reg_qty = value;
    }
}
std::string TaskRsrc::getRelagDrtnHrCnt() { return relag_drtn_hr_cnt; }
void TaskRsrc::setRelagDrtnHrCnt(std::string value) {
    if (!value.empty()) {
        relag_drtn_hr_cnt = value;
    }
}
std::string TaskRsrc::getOtFactor() { return ot_factor; }
void TaskRsrc::setOtFactor(std::string value) {
    if (!value.empty()) {
        ot_factor = value;
    }
}
std::string TaskRsrc::getCostPerQty() { return cost_per_qty; }
void TaskRsrc::setCostPerQty(std::string value) {
    if (!value.empty()) {
        cost_per_qty = value;
    }
}
std::string TaskRsrc::getTargetCost() { return target_cost; }
void TaskRsrc::setTargetCost(std::string value) {
    if (!value.empty()) {
        target_cost = value;
    }
}
std::string TaskRsrc::getActRegCost() { return act_reg_cost; }
void TaskRsrc::setActRegCost(std::string value) {
    if (!value.empty()) {
        act_reg_cost = value;
    }
}
std::string TaskRsrc::getActOtCost() { return act_ot_cost; }
void TaskRsrc::setActOtCost(std::string value) {
    if (!value.empty()) {
        act_ot_cost = value;
    }
}
std::string TaskRsrc::getRemainCost() { return remain_cost; }
void TaskRsrc::setRemainCost(std::string value) {
    if (!value.empty()) {
        remain_cost = value;
    }
}
std::string TaskRsrc::getActStartDate() { return act_start_date; }
void TaskRsrc::setActStartDate(std::string value) {
    if (!value.empty()) {
        act_start_date = value;
    }
}
std::string TaskRsrc::getActEndDate() { return act_end_date; }
void TaskRsrc::setActEndDate(std::string value) {
    if (!value.empty()) {
        act_end_date = value;
    }
}
std::string TaskRsrc::getRestartDate() { return restart_date; }
void TaskRsrc::setRestartDate(std::string value) {
    if (!value.empty()) {
        restart_date = value;
    }
}
std::string TaskRsrc::getReendDate() { return reend_date; }
void TaskRsrc::setReendDate(std::string value) {
    if (!value.empty()) {
        reend_date = value;
    }
}
std::string TaskRsrc::getTargetStartDate() { return target_start_date; }
void TaskRsrc::setTargetStartDate(std::string value) {
    if (!value.empty()) {
        target_start_date = value;
    }
}
std::string TaskRsrc::getTargetEndDate() { return target_end_date; }
void TaskRsrc::setTargetEndDate(std::string value) {
    if (!value.empty()) {
        target_end_date = value;
    }
}
std::string TaskRsrc::getRemLateStartDate() { return rem_late_start_date; }
void TaskRsrc::setRemLateStartDate(std::string value) {
    if (!value.empty()) {
        rem_late_start_date = value;
    }
}
std::string TaskRsrc::getRemLateEndDate() { return rem_late_end_date; }
void TaskRsrc::setRemLateEndDate(std::string value) {
    if (!value.empty()) {
        rem_late_end_date = value;
    }
}
std::string TaskRsrc::getRollupDatesFlag() { return rollup_dates_flag; }
void TaskRsrc::setRollupDatesFlag(std::string value) {
    if (!value.empty()) {
        rollup_dates_flag = value;
    }
}
std::string TaskRsrc::getTargetCrv() { return target_crv; }
void TaskRsrc::setTargetCrv(std::string value) {
    if (!value.empty()) {
        target_crv = value;
    }
}
std::string TaskRsrc::getRemainCrv() { return remain_crv; }
void TaskRsrc::setRemainCrv(std::string value) {
    if (!value.empty()) {
        remain_crv = value;
    }
}
std::string TaskRsrc::getActualCrv() { return actual_crv; }
void TaskRsrc::setActualCrv(std::string value) {
    if (!value.empty()) {
        actual_crv = value;
    }
}
std::string TaskRsrc::getTsPendActEndFlag() { return ts_pend_act_end_flag; }
void TaskRsrc::setTsPendActEndFlag(std::string value) {
    if (!value.empty()) {
        ts_pend_act_end_flag = value;
    }
}
std::string TaskRsrc::getGuid() { return guid; }
void TaskRsrc::setGuid(std::string value) {
    if (!value.empty()) {
        guid = value;
    }
}
std::string TaskRsrc::getRateType() { return rate_type; }
void TaskRsrc::setRateType(std::string value) {
    if (!value.empty()) {
        rate_type = value;
    }
}
std::string TaskRsrc::getActThisPerCost() { return act_this_per_cost; }
void TaskRsrc::setActThisPerCost(std::string value) {
    if (!value.empty()) {
        act_this_per_cost = value;
    }
}
std::string TaskRsrc::getActThisPerQty() { return act_this_per_qty; }
void TaskRsrc::setActThisPerQty(std::string value) {
    if (!value.empty()) {
        act_this_per_qty = value;
    }
}
std::string TaskRsrc::getCurvId() { return curv_id; }
void TaskRsrc::setCurvId(std::string value) {
    if (!value.empty()) {
        curv_id = value;
    }
}
std::string TaskRsrc::getRsrcType() { return rsrc_type; }
void TaskRsrc::setRsrcType(std::string value) {
    if (!value.empty()) {
        rsrc_type = value;
    }
}
std::string TaskRsrc::getCostPerQtySourceType() { return cost_per_qty_source_type; }
void TaskRsrc::setCostPerQtySourceType(std::string value) {
    if (!value.empty()) {
        cost_per_qty_source_type = value;
    }
}
std::string TaskRsrc::getCreateUser() { return create_user; }
void TaskRsrc::setCreateUser(std::string value) {
    if (!value.empty()) {
        create_user = value;
    }
}
std::string TaskRsrc::getCreateDate() { return create_date; }
void TaskRsrc::setCreateDate(std::string value) {
    if (!value.empty()) {
        create_date = value;
    }
}
std::string TaskRsrc::getCbsId() { return cbs_id; }
void TaskRsrc::setCbsId(std::string value) {
    if (!value.empty()) {
        cbs_id = value;
    }
}
std::string TaskRsrc::getHasRsrchours() { return has_rsrchours; }
void TaskRsrc::setHasRsrchours(std::string value) {
    if (!value.empty()) {
        has_rsrchours = value;
    }
}
std::string TaskRsrc::getTaskrsrcSumId() { return taskrsrc_sum_id; }
void TaskRsrc::setTaskrsrcSumId(std::string value) {
    if (!value.empty()) {
        taskrsrc_sum_id = value;
    }
}
