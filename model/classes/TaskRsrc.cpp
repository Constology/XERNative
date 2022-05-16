//
// Created by Taraxtix on 10/05/2022.
//

#include "TaskRsrc.h"

#include "../../Reader.h"

TaskRsrc::TaskRsrc(const std::vector<std::string> header,
                   const std::vector<std::string> params,
                   Reader *readerObj) {
    tsv = "";
    reader = readerObj;
    for (int i = 0; i < header.size(); i++) {
        if (header.at(i) == "taskrsrc_id") {
            if (!params.at(i).empty()) {
                taskrsrc_id = stoi(params.at(i));
            }
        } else if (header.at(i) == "task_id") {
            if (header.at(i) == "taskrsrc_id") {
                task_id = stoi(params.at(i));
                Task tt = reader->tasks.findById(task_id);
                task = &tt;
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
                rsrc = reader->rsrcs.findById(rsrc_id);
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