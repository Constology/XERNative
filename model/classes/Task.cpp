#include "Task.h"

#include "../../Reader.h"

Task::Task(std::vector<std::string> header, std::vector<std::string> params, Reader *readerObj) {
    tsv = "";
    for (int i = 0; i < header.size(); i++) {
        if (header.at(i) == "task_id") {
            if (!params.at(i).empty()) {
                task_id = stoi(params.at(i));
                task_id_str = params.at(i);
            }
        } else if (header.at(i) == "proj_id") {
            if (!params.at(i).empty()) {
                proj_id = stoi(params.at(i));
                proj_id_str = params.at(i);
            }
        } else if (header.at(i) == "wbs_id") {
            if (!params.at(i).empty()) {
                wbs_id = stoi(params.at(i));
                wbs_id_str = params.at(i);
            }
        } else if (header.at(i) == "clndr_id") {
            if (!params.at(i).empty()) {
                clndr_id = stoi(params.at(i));
                clndr_id_str = params.at(i);
            }
        } else if (header.at(i) == "rsrc_id") {
            if (!params.at(i).empty()) {
                rsrc_id = stoi(params.at(i));
                rsrc_id_str = params.at(i);
            }
        }

        else if (header.at(i) == "location_id") {
            if (!params.at(i).empty()) {
                location_id = stoi(params.at(i));
                location_id_str = params.at(i);
            }
        } else if (header.at(i) == "total_float_hr_cnt") {
            if (!params.at(i).empty()) {
                total_float_hr_cnt = stof(params.at(i));
                total_float_hr_cnt_str = params.at(i);
            }
        } else if (header.at(i) == "free_float_hr_cnt") {
            if (!params.at(i).empty()) {
                free_float_hr_cnt = stof(params.at(i));
                free_float_hr_cnt_str = params.at(i);
            }
        } else if (header.at(i) == "remain_drtn_hr_cnt") {
            if (!params.at(i).empty()) {
                remain_drtn_hr_cnt = stof(params.at(i));
                remain_drtn_hr_cnt_str = params.at(i);
            }
        } else if (header.at(i) == "float_path") {
            if (!params.at(i).empty()) {
                float_path = stof(params.at(i));
                float_path_str = params.at(i);
            }
        } else if (header.at(i) == "float_path_order") {
            if (!params.at(i).empty()) {
                float_path_order = stof(params.at(i));
                float_path_order_str = params.at(i);
            }
        } else if (header.at(i) == "phys_complete_pct") {
            phys_complete_pct = params.at(i);
        } else if (header.at(i) == "rev_fdbk_flag") {
            rev_fdbk_flag = params.at(i);
        } else if (header.at(i) == "est_wt") {
            est_wt = params.at(i);
        } else if (header.at(i) == "lock_plan_flag") {
            lock_plan_flag = params.at(i);
        } else if (header.at(i) == "auto_compute_act_flag") {
            auto_compute_act_flag = params.at(i);
        } else if (header.at(i) == "complete_pct_type") {
            complete_pct_type = params.at(i);
        } else if (header.at(i) == "task_type") {
            task_type = params.at(i);
        } else if (header.at(i) == "duration_type") {
            duration_type = params.at(i);
        } else if (header.at(i) == "status_code") {
            status_code = params.at(i);
        } else if (header.at(i) == "task_code") {
            task_code = params.at(i);
        } else if (header.at(i) == "task_name") {
            task_name = params.at(i);
        } else if (header.at(i) == "act_work_qty") {
            act_work_qty = params.at(i);
        } else if (header.at(i) == "remain_work_qty") {
            remain_work_qty = params.at(i);
        } else if (header.at(i) == "target_work_qty") {
            target_work_qty = params.at(i);
        } else if (header.at(i) == "target_drtn_hr_cnt") {
            target_drtn_hr_cnt = params.at(i);
        } else if (header.at(i) == "target_equip_qty") {
            target_equip_qty = params.at(i);
        } else if (header.at(i) == "act_equip_qty") {
            act_equip_qty = params.at(i);
        } else if (header.at(i) == "remain_equip_qty") {
            remain_equip_qty = params.at(i);
        } else if (header.at(i) == "cstr_type") {
            cstr_type = params.at(i);
        } else if (header.at(i) == "priority_type") {
            priority_type = params.at(i);
        } else if (header.at(i) == "guid") {
            guid = params.at(i);
        } else if (header.at(i) == "tmpl_guid") {
            tmpl_guid = params.at(i);
        } else if (header.at(i) == "cstr_type2") {
            cstr_type2 = params.at(i);
        } else if (header.at(i) == "driving_path_flag") {
            driving_path_flag = params.at(i);
        } else if (header.at(i) == "act_this_per_work_qty") {
            act_this_per_work_qty = params.at(i);
        } else if (header.at(i) == "act_this_per_equip_qty") {
            act_this_per_equip_qty = params.at(i);
        } else if (header.at(i) == "create_user") {
            create_user = params.at(i);
        } else if (header.at(i) == "update_user") {
            update_user = params.at(i);
        } else if (header.at(i) == "cstr_date") {
            if (!params.at(i).empty()) {
                cstr_date = Date(params.at(i));
                cstr_date = params.at(i);
            }
        } else if (header.at(i) == "act_start_date") {
            if (!params.at(i).empty()) {
                act_start_date = Date(params.at(i));
                act_start_date_str = params.at(i);
            }
        } else if (header.at(i) == "act_end_date") {
            if (!params.at(i).empty()) {
                act_end_date = Date(params.at(i));
                act_end_date_str = params.at(i);
            }
        } else if (header.at(i) == "late_start_date") {
            if (!params.at(i).empty()) {
                late_start_date = Date(params.at(i));
                late_end_date_str = params.at(i);
            }
        } else if (header.at(i) == "late_end_date") {
            if (!params.at(i).empty()) {
                late_end_date = Date(params.at(i));
                late_end_date_str = params.at(i);
            }
        } else if (header.at(i) == "expect_end_date") {
            if (!params.at(i).empty()) {
                expect_end_date = Date(params.at(i));
                expect_end_date_str = params.at(i);
            }
        } else if (header.at(i) == "early_start_date") {
            if (!params.at(i).empty()) {
                early_start_date = Date(params.at(i));
                early_start_date_str = params.at(i);
            }
        } else if (header.at(i) == "early_end_date") {
            if (!params.at(i).empty()) {
                early_end_date = Date(params.at(i));
                early_end_date = params.at(i);
            }
        } else if (header.at(i) == "restart_date") {
            if (!params.at(i).empty()) {
                restart_date = Date(params.at(i));
                restart_date_str = params.at(i);
            }
        } else if (header.at(i) == "reend_date") {
            if (!params.at(i).empty()) {
                reend_date = Date(params.at(i));
                reend_date_str = params.at(i);
            }
        } else if (header.at(i) == "target_end_date") {
            if (!params.at(i).empty()) {
                target_end_date = Date(params.at(i));
                target_end_date_str = params.at(i);
            }
        } else if (header.at(i) == "rem_late_start_date") {
            if (!params.at(i).empty()) {
                rem_late_start_date = Date(params.at(i));
                rem_late_start_date_str = params.at(i);
            }
        } else if (header.at(i) == "rem_late_end_date") {
            if (!params.at(i).empty()) {
                rem_late_end_date = Date(params.at(i));
                rem_late_end_date_str = params.at(i);
            }
        } else if (header.at(i) == "suspend_date") {
            if (!params.at(i).empty()) {
                suspend_date = Date(params.at(i));
                suspend_date_str = params.at(i);
            }
        } else if (header.at(i) == "resume_date") {
            if (!params.at(i).empty()) {
                resume_date = Date(params.at(i));
                resume_date_str = params.at(i);
            }
        } else if (header.at(i) == "cstr_date2") {
            if (!params.at(i).empty()) {
                cstr_date2 = Date(params.at(i));
                cstr_date2 = params.at(i);
            }
        } else if (header.at(i) == "external_early_start_date") {
            if (!params.at(i).empty()) {
                external_early_start_date = Date(params.at(i));
                external_early_start_date_str = params.at(i);
            }
        } else if (header.at(i) == "external_late_end_date") {
            if (!params.at(i).empty()) {
                external_late_end_date = Date(params.at(i));
                external_late_end_date_str = params.at(i);
            }
        } else if (header.at(i) == "create_date") {
            if (!params.at(i).empty()) {
                create_date = Date(params.at(i));
                create_date_str = params.at(i);
            }
        } else if (header.at(i) == "update_date") {
            if (!params.at(i).empty()) {
                update_date = Date(params.at(i));
                update_date_str = params.at(i);
            }
        }
    }
    reader = readerObj;
    update_tsv();
}

void Task::update_tsv() {
    tsv = "%R\t";
    tsv.append(std::to_string(task_id))
        .append("\t")
        .append(std::to_string(proj_id))
        .append("\t")
        .append(std::to_string(wbs_id))
        .append("\t")
        .append(std::to_string(clndr_id))
        .append("\t")
        .append(std::to_string(rsrc_id))
        .append("\t")
        .append(std::to_string(location_id))
        .append("\t")
        .append(std::to_string(total_float_hr_cnt))
        .append("\t")
        .append(std::to_string(free_float_hr_cnt))
        .append("\t")
        .append(std::to_string(remain_drtn_hr_cnt))
        .append("\t")
        .append(std::to_string(float_path))
        .append("\t")
        .append(std::to_string(float_path_order))
        .append("\t")
        .append(phys_complete_pct)
        .append("\t")
        .append(rev_fdbk_flag)
        .append("\t")
        .append(est_wt)
        .append("\t")
        .append(lock_plan_flag)
        .append("\t")
        .append(auto_compute_act_flag)
        .append("\t")
        .append(complete_pct_type)
        .append("\t")
        .append(task_type)
        .append("\t")
        .append(duration_type)
        .append("\t")
        .append(status_code)
        .append("\t")
        .append(task_code)
        .append("\t")
        .append(task_name)
        .append("\t")
        .append(act_work_qty)
        .append("\t")
        .append(remain_work_qty)
        .append("\t")
        .append(target_work_qty)
        .append("\t")
        .append(target_drtn_hr_cnt)
        .append("\t")
        .append(target_equip_qty)
        .append("\t")
        .append(act_equip_qty)
        .append("\t")
        .append(remain_equip_qty)
        .append("\t")
        .append(cstr_type)
        .append("\t")
        .append(priority_type)
        .append("\t")
        .append(guid)
        .append("\t")
        .append(tmpl_guid)
        .append("\t")
        .append(cstr_type2)
        .append("\t")
        .append(driving_path_flag)
        .append("\t")
        .append(act_this_per_work_qty)
        .append("\t")
        .append(act_this_per_equip_qty)
        .append("\t")
        .append(create_user)
        .append("\t")
        .append(update_user)
        .append("\t")
        .append(cstr_date.to_string())
        .append("\t")
        .append(act_start_date.to_string())
        .append("\t")
        .append(act_end_date.to_string())
        .append("\t")
        .append(late_start_date.to_string())
        .append("\t")
        .append(late_end_date.to_string())
        .append("\t")
        .append(expect_end_date.to_string())
        .append("\t")
        .append(early_start_date.to_string())
        .append("\t")
        .append(early_end_date.to_string())
        .append("\t")
        .append(restart_date.to_string())
        .append("\t")
        .append(reend_date.to_string())
        .append("\t")
        .append(target_start_date.to_string())
        .append("\t")
        .append(target_end_date.to_string())
        .append("\t")
        .append(rem_late_start_date.to_string())
        .append("\t")
        .append(rem_late_end_date.to_string())
        .append("\t")
        .append(suspend_date.to_string())
        .append("\t")
        .append(resume_date.to_string())
        .append("\t")
        .append(cstr_date2.to_string())
        .append("\t")
        .append(external_early_start_date.to_string())
        .append("\t")
        .append(external_late_end_date.to_string())
        .append("\t")
        .append(create_date.to_string())
        .append("\t")
        .append(update_date.to_string())
        .append("\n");
}

std::string Task::get_tsv() {
    update_tsv();
    return tsv;
}

std::vector<TaskRsrc> Task::getResources() {
    std::vector<TaskRsrc> toReturn;
    toReturn = reader->taskRsrcs.getByTaskId(task_id);
    return toReturn;
}

int Task::getTaskId() { return task_id; }
void Task::setTaskId(int value) {
    if (value > 0) {
        task_id = value;
        task_id_str = std::to_string(value);
    }
}
int Task::getProjId() { return proj_id; }
void Task::setProjId(int value) {
    if (value > 0) {
        proj_id = value;
        proj_id_str = std::to_string(value);
    }
}
int Task::getWbsId() { return wbs_id; }
void Task::setWbsId(int value) {
    if (value > 0) {
        wbs_id = value;
        wbs_id_str = std::to_string(value);
    }
}
int Task::getClndrId() { return clndr_id; }
void Task::setClndrId(int value) {
    if (value > 0) {
        clndr_id = value;
        clndr_id_str = std::to_string(value);
    }
}
int Task::getRsrcId() { return rsrc_id; }
void Task::setRsrcId(int value) {
    if (value > 0) {
        rsrc_id = value;
        rsrc_id_str = std::to_string(value);
    }
}
int Task::getLocationId() { return location_id; }
void Task::setLocationId(int value) {
    if (value > 0) {
        location_id = value;
        location_id_str = std::to_string(value);
    }
}
float Task::getTotalFloatHrCnt() { return total_float_hr_cnt; }
void Task::setTotalFloatHrCnt(float value) {
    if (value > 0.0f) {
        total_float_hr_cnt = value;
        total_float_hr_cnt_str = std::to_string(value);
    }
}
float Task::getFreeFloatHrCnt() { return free_float_hr_cnt; }
void Task::setFreeFloatHrCnt(float value) {
    if (value > 0.0f) {
        free_float_hr_cnt = value;
        free_float_hr_cnt_str = std::to_string(value);
    }
}
float Task::getRemainDrtnHrCnt() { return remain_drtn_hr_cnt; }
void Task::setRemainDrtnHrCnt(float value) {
    if (value > 0.0f) {
        remain_drtn_hr_cnt = value;
        remain_drtn_hr_cnt_str = std::to_string(value);
    }
}
float Task::getFloatPath() { return float_path; }
void Task::setFloatPath(float value) {
    if (value > 0.0f) {
        float_path = value;
        float_path_str = std::to_string(value);
    }
}
float Task::getFloatPathOrder() { return float_path_order; }
void Task::setFloatPathOrder(float value) {
    if (value > 0.0f) {
        float_path_order = value;
        float_path_order_str = std::to_string(value);
    }
}
std::string Task::getPhysCompletePct() { return phys_complete_pct; }
void Task::setPhysCompletePct(std::string value) {
    if (!value.empty()) {
        phys_complete_pct = value;
    }
}
std::string Task::getRevFdbkFlag() { return rev_fdbk_flag; }
void Task::setRevFdbkFlag(std::string value) {
    if (!value.empty()) {
        rev_fdbk_flag = value;
    }
}
std::string Task::getEstWt() { return est_wt; }
void Task::setEstWt(std::string value) {
    if (!value.empty()) {
        est_wt = value;
    }
}
std::string Task::getLockPlanFlag() { return lock_plan_flag; }
void Task::setLockPlanFlag(std::string value) {
    if (!value.empty()) {
        lock_plan_flag = value;
    }
}
std::string Task::getAutoComputeActFlag() { return auto_compute_act_flag; }
void Task::setAutoComputeActFlag(std::string value) {
    if (!value.empty()) {
        auto_compute_act_flag = value;
    }
}
std::string Task::getCompletePctType() { return complete_pct_type; }
void Task::setCompletePctType(std::string value) {
    if (!value.empty()) {
        complete_pct_type = value;
    }
}
std::string Task::getTaskType() { return task_type; }
void Task::setTaskType(std::string value) {
    if (!value.empty()) {
        task_type = value;
    }
}
std::string Task::getDurationType() { return duration_type; }
void Task::setDurationType(std::string value) {
    if (!value.empty()) {
        duration_type = value;
    }
}
std::string Task::getStatusCode() { return status_code; }
void Task::setStatusCode(std::string value) {
    if (!value.empty()) {
        status_code = value;
    }
}
std::string Task::getTaskCode() { return task_code; }
void Task::setTaskCode(std::string value) {
    if (!value.empty()) {
        task_code = value;
    }
}
std::string Task::getTaskName() { return task_name; }
void Task::setTaskName(std::string value) {
    if (!value.empty()) {
        task_name = value;
    }
}
std::string Task::getActWorkQty() { return act_work_qty; }
void Task::setActWorkQty(std::string value) {
    if (!value.empty()) {
        act_work_qty = value;
    }
}
std::string Task::getRemainWorkQty() { return remain_work_qty; }
void Task::setRemainWorkQty(std::string value) {
    if (!value.empty()) {
        remain_work_qty = value;
    }
}
std::string Task::getTargetWorkQty() { return target_work_qty; }
void Task::setTargetWorkQty(std::string value) {
    if (!value.empty()) {
        target_work_qty = value;
    }
}
std::string Task::getTargetDrtnHrCnt() { return target_drtn_hr_cnt; }
void Task::setTargetDrtnHrCnt(std::string value) {
    if (!value.empty()) {
        target_drtn_hr_cnt = value;
    }
}
std::string Task::getTargetEquipQty() { return target_equip_qty; }
void Task::setTargetEquipQty(std::string value) {
    if (!value.empty()) {
        target_equip_qty = value;
    }
}
std::string Task::getActEquipQty() { return act_equip_qty; }
void Task::setActEquipQty(std::string value) {
    if (!value.empty()) {
        act_equip_qty = value;
    }
}
std::string Task::getRemainEquipQty() { return remain_equip_qty; }
void Task::setRemainEquipQty(std::string value) {
    if (!value.empty()) {
        remain_equip_qty = value;
    }
}
std::string Task::getCstrType() { return cstr_type; }
void Task::setCstrType(std::string value) {
    if (!value.empty()) {
        cstr_type = value;
    }
}
std::string Task::getPriorityType() { return priority_type; }
void Task::setPriorityType(std::string value) {
    if (!value.empty()) {
        priority_type = value;
    }
}
std::string Task::getGuid() { return guid; }
void Task::setGuid(std::string value) {
    if (!value.empty()) {
        guid = value;
    }
}
std::string Task::getTmplGuid() { return tmpl_guid; }
void Task::setTmplGuid(std::string value) {
    if (!value.empty()) {
        tmpl_guid = value;
    }
}
std::string Task::getCstrType2() { return cstr_type2; }
void Task::setCstrType2(std::string value) {
    if (!value.empty()) {
        cstr_type2 = value;
    }
}
std::string Task::getDrivingPathFlag() { return driving_path_flag; }
void Task::setDrivingPathFlag(std::string value) {
    if (!value.empty()) {
        driving_path_flag = value;
    }
}
std::string Task::getActThisPerWorkQty() { return act_this_per_work_qty; }
void Task::setActThisPerWorkQty(std::string value) {
    if (!value.empty()) {
        act_this_per_work_qty = value;
    }
}
std::string Task::getActThisPerEquipQty() { return act_this_per_equip_qty; }
void Task::setActThisPerEquipQty(std::string value) {
    if (!value.empty()) {
        act_this_per_equip_qty = value;
    }
}
std::string Task::getCreateUser() { return create_user; }
void Task::setCreateUser(std::string value) {
    if (!value.empty()) {
        create_user = value;
    }
}
std::string Task::getUpdateUser() { return update_user; }
void Task::setUpdateUser(std::string value) {
    if (!value.empty()) {
        update_user = value;
    }
}
Date Task::getCstrDate() { return cstr_date; }
void Task::setCstrDate(Date value) { cstr_date = value; }
Date Task::getActStartDate() { return act_start_date; }
void Task::setActStartDate(Date value) { act_start_date = value; }
Date Task::getActEndDate() { return act_end_date; }
void Task::setActEndDate(Date value) { act_end_date = value; }
Date Task::getLateStartDate() { return late_start_date; }
void Task::setLateStartDate(Date value) { late_start_date = value; }
Date Task::getLateEndDate() { return late_end_date; }
void Task::setLateEndDate(Date value) { late_end_date = value; }
Date Task::getExpectEndDate() { return expect_end_date; }
void Task::setExpectEndDate(Date value) { expect_end_date = value; }
Date Task::getEarlyStartDate() { return early_start_date; }
void Task::setEarlyStartDate(Date value) { early_start_date = value; }
Date Task::getEarlyEndDate() { return early_end_date; }
void Task::setEarlyEndDate(Date value) { early_end_date = value; }
Date Task::getRestartDate() { return restart_date; }
void Task::setRestartDate(Date value) { restart_date = value; }
Date Task::getReendDate() { return reend_date; }
void Task::setReendDate(Date value) { reend_date = value; }
Date Task::getTargetStartDate() { return target_start_date; }
void Task::setTargetStartDate(Date value) { target_start_date = value; }
Date Task::getTargetEndDate() { return target_end_date; }
void Task::setTargetEndDate(Date value) { target_end_date = value; }
Date Task::getRemLateStartDate() { return rem_late_start_date; }
void Task::setRemLateStartDate(Date value) { rem_late_start_date = value; }
Date Task::getRemLateEndDate() { return rem_late_end_date; }
void Task::setRemLateEndDate(Date value) { rem_late_end_date = value; }
Date Task::getSuspendDate() { return suspend_date; }
void Task::setSuspendDate(Date value) { suspend_date = value; }
Date Task::getResumeDate() { return resume_date; }
void Task::setResumeDate(Date value) { resume_date = value; }
Date Task::getCstrDate2() { return cstr_date2; }
void Task::setCstrDate2(Date value) { cstr_date2 = value; }
Date Task::getExternalEarlyStartDate() { return external_early_start_date; }
void Task::setExternalEarlyStartDate(Date value) { external_early_start_date = value; }
Date Task::getExternalLateEndDate() { return external_late_end_date; }
void Task::setExternalLateEndDate(Date value) { external_late_end_date = value; }
Date Task::getCreateDate() { return create_date; }
void Task::setCreateDate(Date value) { create_date = value; }
Date Task::getUpdateDate() { return update_date; }
void Task::setUpdateDate(Date value) { update_date = value; }