//
// Created by sorat on 12/05/2022.
//

#include "Schedoption.h"

#include "../../Reader.h"

Schedoption::Schedoption(const std::vector<std::string> header,
                         const std::vector<std::string> params,
                         Reader *readerObj) {
    reader = readerObj;
    tsv = "";
    for (int i = 0; i < params.size(); i++) {
        if (header.at(i) == "schedoptions_id") {
            if (!params.at(i).empty()) {
                schedoptions_id = stoi(params.at(i));
                schedoptions_id_str = params.at(i);
            }
        } else if (header.at(i) == "proj_id") {
            if (!params.at(i).empty()) {
                proj_id = stoi(params.at(i));
                proj_id_str = params.at(i);
            }
        } else if (header.at(i) == "sched_outer_depend_type") {
            if (!params.at(i).empty()) {
                sched_outer_depend_type = stoi(params.at(i));
            }
        } else if (header.at(i) == "sched_open_critical_flag") {
            if (!params.at(i).empty()) {
                sched_open_critical_flag = stoi(params.at(i));
            }
        } else if (header.at(i) == "sched_lag_early_start_flag") {
            if (!params.at(i).empty()) {
                sched_lag_early_start_flag = stoi(params.at(i));
            }
        } else if (header.at(i) == "sched_retained_logic") {
            if (!params.at(i).empty()) {
                sched_retained_logic = stoi(params.at(i));
            }
        } else if (header.at(i) == "sched_setplantoforecast") {
            if (!params.at(i).empty()) {
                sched_setplantoforecast = stoi(params.at(i));
            }
        } else if (header.at(i) == "sched_float_type") {
            if (!params.at(i).empty()) {
                sched_float_type = stoi(params.at(i));
            }
        } else if (header.at(i) == "sched_calendar_on_relationship_lag") {
            if (!params.at(i).empty()) {
                sched_calendar_on_relationship_lag = stoi(params.at(i));
            }
        } else if (header.at(i) == "sched_use_expect_end_flag") {
            if (!params.at(i).empty()) {
                sched_use_expect_end_flag = stoi(params.at(i));
            }
        } else if (header.at(i) == "sched_progress_override") {
            if (!params.at(i).empty()) {
                sched_progress_override = stoi(params.at(i));
            }
        } else if (header.at(i) == "level_float_hrs_cnt") {
            if (!params.at(i).empty()) {
                level_float_hrs_cnt = stoi(params.at(i));
            }
        } else if (header.at(i) == "level_outer_assign_flag") {
            if (!params.at(i).empty()) {
                level_outer_assign_flag = stoi(params.at(i));
            }
        } else if (header.at(i) == "level_outer_assign_priority") {
            if (!params.at(i).empty()) {
                level_outer_assign_priority = stoi(params.at(i));
            }
        } else if (header.at(i) == "level_over_alloc_pct") {
            if (!params.at(i).empty()) {
                level_over_alloc_pct = stoi(params.at(i));
            }
        } else if (header.at(i) == "level_within_float_flag") {
            if (!params.at(i).empty()) {
                level_within_float_flag = stoi(params.at(i));
            }
        } else if (header.at(i) == "level_keep_sched_date_flag") {
            if (!params.at(i).empty()) {
                level_keep_sched_date_flag = stoi(params.at(i));
            }
        } else if (header.at(i) == "level_all_rsrc_flag") {
            if (!params.at(i).empty()) {
                level_all_rsrc_flag = stoi(params.at(i));
            }
        } else if (header.at(i) == "sched_use_project_end_date_for_float") {
            if (!params.at(i).empty()) {
                sched_use_project_end_date_for_float = stoi(params.at(i));
            }
        } else if (header.at(i) == "enable_multiple_longest_path_calc") {
            if (!params.at(i).empty()) {
                enable_multiple_longest_path_calc = stoi(params.at(i));
            }
        } else if (header.at(i) == "limit_multiple_longest_path_calc") {
            if (!params.at(i).empty()) {
                limit_multiple_longest_path_calc = stoi(params.at(i));
            }
        } else if (header.at(i) == "max_multiple_longest_path") {
            if (!params.at(i).empty()) {
                max_multiple_longest_path = stoi(params.at(i));
            }
        } else if (header.at(i) == "use_total_float_multiple_longest_paths") {
            if (!params.at(i).empty()) {
                use_total_float_multiple_longest_paths = stoi(params.at(i));
            }
        } else if (header.at(i) == "key_activity_for_multiple_longest_paths") {
            if (!params.at(i).empty()) {
                key_activity_for_multiple_longest_paths = stoi(params.at(i));
            }
        } else if (header.at(i) == "LevelPriorityList") {
            if (!params.at(i).empty()) {
                LevelPriorityList = stoi(params.at(i));
            }
        }
    }
    update_tsv();
}

void Schedoption::update_tsv() {
    tsv = "%R\t";
    tsv.append(schedoptions_id_str)
        .append("\t")
        .append(proj_id_str)
        .append("\t")
        .append(sched_outer_depend_type)
        .append("\t")
        .append(sched_open_critical_flag)
        .append("\t")
        .append(sched_lag_early_start_flag)
        .append("\t")
        .append(sched_retained_logic)
        .append("\t")
        .append(sched_setplantoforecast)
        .append("\t")
        .append(sched_float_type)
        .append("\t")
        .append(sched_calendar_on_relationship_lag)
        .append("\t")
        .append(sched_use_expect_end_flag)
        .append("\t")
        .append(sched_progress_override)
        .append("\t")
        .append(level_float_hrs_cnt)
        .append("\t")
        .append(level_outer_assign_flag)
        .append("\t")
        .append(level_outer_assign_priority)
        .append("\t")
        .append(level_over_alloc_pct)
        .append("\t")
        .append(level_within_float_flag)
        .append("\t")
        .append(level_keep_sched_date_flag)
        .append("\t")
        .append(level_all_rsrc_flag)
        .append("\t")
        .append(sched_use_project_end_date_for_float)
        .append("\t")
        .append(enable_multiple_longest_path_calc)
        .append("\t")
        .append(limit_multiple_longest_path_calc)
        .append("\t")
        .append(max_multiple_longest_path)
        .append("\t")
        .append(use_total_float_multiple_longest_paths)
        .append("\t")
        .append(key_activity_for_multiple_longest_paths)
        .append("\t")
        .append(LevelPriorityList)
        .append("\n");
}

std::string Schedoption::get_tsv() {
    update_tsv();
    return tsv;
}

int Schedoption::getSchedoptionsId() { return schedoptions_id; }
void Schedoption::setSchedoptionsId(int value) {
    if (value > 0) {
        schedoptions_id = value;
        schedoptions_id_str = std::to_string(value);
    }
}
int Schedoption::getProjId() { return proj_id; }
void Schedoption::setProjId(int value) {
    if (value > 0) {
        proj_id = value;
        proj_id_str = std::to_string(value);
    }
}
std::string Schedoption::getSchedOuterDependType() { return sched_outer_depend_type; }
void Schedoption::setSchedOuterDependType(std::string value) {
    if (!value.empty()) {
        sched_outer_depend_type = value;
    }
}
std::string Schedoption::getSchedOpenCriticalFlag() { return sched_open_critical_flag; }
void Schedoption::setSchedOpenCriticalFlag(std::string value) {
    if (!value.empty()) {
        sched_open_critical_flag = value;
    }
}
std::string Schedoption::getSchedLagEarlyStartFlag() { return sched_lag_early_start_flag; }
void Schedoption::setSchedLagEarlyStartFlag(std::string value) {
    if (!value.empty()) {
        sched_lag_early_start_flag = value;
    }
}
std::string Schedoption::getSchedRetainedLogic() { return sched_retained_logic; }
void Schedoption::setSchedRetainedLogic(std::string value) {
    if (!value.empty()) {
        sched_retained_logic = value;
    }
}
std::string Schedoption::getSchedSetplantoforecast() { return sched_setplantoforecast; }
void Schedoption::setSchedSetplantoforecast(std::string value) {
    if (!value.empty()) {
        sched_setplantoforecast = value;
    }
}
std::string Schedoption::getSchedFloatType() { return sched_float_type; }
void Schedoption::setSchedFloatType(std::string value) {
    if (!value.empty()) {
        sched_float_type = value;
    }
}
std::string Schedoption::getSchedCalendarOnRelationshipLag() {
    return sched_calendar_on_relationship_lag;
}
void Schedoption::setSchedCalendarOnRelationshipLag(std::string value) {
    if (!value.empty()) {
        sched_calendar_on_relationship_lag = value;
    }
}
std::string Schedoption::getSchedUseExpectEndFlag() { return sched_use_expect_end_flag; }
void Schedoption::setSchedUseExpectEndFlag(std::string value) {
    if (!value.empty()) {
        sched_use_expect_end_flag = value;
    }
}
std::string Schedoption::getSchedProgressOverride() { return sched_progress_override; }
void Schedoption::setSchedProgressOverride(std::string value) {
    if (!value.empty()) {
        sched_progress_override = value;
    }
}
std::string Schedoption::getLevelFloatHrsCnt() { return level_float_hrs_cnt; }
void Schedoption::setLevelFloatHrsCnt(std::string value) {
    if (!value.empty()) {
        level_float_hrs_cnt = value;
    }
}
std::string Schedoption::getLevelOuterAssignFlag() { return level_outer_assign_flag; }
void Schedoption::setLevelOuterAssignFlag(std::string value) {
    if (!value.empty()) {
        level_outer_assign_flag = value;
    }
}
std::string Schedoption::getLevelOuterAssignPriority() { return level_outer_assign_priority; }
void Schedoption::setLevelOuterAssignPriority(std::string value) {
    if (!value.empty()) {
        level_outer_assign_priority = value;
    }
}
std::string Schedoption::getLevelOverAllocPct() { return level_over_alloc_pct; }
void Schedoption::setLevelOverAllocPct(std::string value) {
    if (!value.empty()) {
        level_over_alloc_pct = value;
    }
}
std::string Schedoption::getLevelWithinFloatFlag() { return level_within_float_flag; }
void Schedoption::setLevelWithinFloatFlag(std::string value) {
    if (!value.empty()) {
        level_within_float_flag = value;
    }
}
std::string Schedoption::getLevelKeepSchedDateFlag() { return level_keep_sched_date_flag; }
void Schedoption::setLevelKeepSchedDateFlag(std::string value) {
    if (!value.empty()) {
        level_keep_sched_date_flag = value;
    }
}
std::string Schedoption::getLevelAllRsrcFlag() { return level_all_rsrc_flag; }
void Schedoption::setLevelAllRsrcFlag(std::string value) {
    if (!value.empty()) {
        level_all_rsrc_flag = value;
    }
}
std::string Schedoption::getSchedUseProjectEndDateForFloat() {
    return sched_use_project_end_date_for_float;
}
void Schedoption::setSchedUseProjectEndDateForFloat(std::string value) {
    if (!value.empty()) {
        sched_use_project_end_date_for_float = value;
    }
}
std::string Schedoption::getEnableMultipleLongestPathCalc() {
    return enable_multiple_longest_path_calc;
}
void Schedoption::setEnableMultipleLongestPathCalc(std::string value) {
    if (!value.empty()) {
        enable_multiple_longest_path_calc = value;
    }
}
std::string Schedoption::getLimitMultipleLongestPathCalc() {
    return limit_multiple_longest_path_calc;
}
void Schedoption::setLimitMultipleLongestPathCalc(std::string value) {
    if (!value.empty()) {
        limit_multiple_longest_path_calc = value;
    }
}
std::string Schedoption::getMaxMultipleLongestPath() { return max_multiple_longest_path; }
void Schedoption::setMaxMultipleLongestPath(std::string value) {
    if (!value.empty()) {
        max_multiple_longest_path = value;
    }
}
std::string Schedoption::getUseTotalFloatMultipleLongestPaths() {
    return use_total_float_multiple_longest_paths;
}
void Schedoption::setUseTotalFloatMultipleLongestPaths(std::string value) {
    if (!value.empty()) {
        use_total_float_multiple_longest_paths = value;
    }
}
std::string Schedoption::getKeyActivityForMultipleLongestPaths() {
    return key_activity_for_multiple_longest_paths;
}
void Schedoption::setKeyActivityForMultipleLongestPaths(std::string value) {
    if (!value.empty()) {
        key_activity_for_multiple_longest_paths = value;
    }
}
std::string Schedoption::getLevelprioritylist() { return LevelPriorityList; }
void Schedoption::setLevelprioritylist(std::string value) {
    if (!value.empty()) {
        LevelPriorityList = value;
    }
}
