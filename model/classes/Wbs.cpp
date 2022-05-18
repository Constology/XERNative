#include "Wbs.h"

#include "../../Reader.h"

// TODO: Convert string types to dates anticip_start_date & anticip_end_date
Wbs::Wbs(const std::vector<std::string> header,
         const std::vector<std::string> params,
         Reader *readerObj) {
    tsv = "";
    for (int i = 0; i < header.size(); i++) {
        if (header.at(i).empty())
            break;
        if (header.at(i) == "wbs_id") {
            if (!params.at(i).empty()) {
                wbs_id = stoi(params.at(i));
            }
        } else if (header.at(i) == "proj_id") {
            if (!params.at(i).empty()) {
                proj_id = stoi(params.at(i));
            }
        } else if (header.at(i) == "obs_id") {
            if (!params.at(i).empty()) {
                obs_id = stoi(params.at(i));
            }
        } else if (header.at(i) == "seq_num") {
            if (!params.at(i).empty()) {
                seq_num = stoi(params.at(i));
            }
        } else if (header.at(i) == "est_wt") {
            if (!params.at(i).empty()) {
                est_wt = stoi(params.at(i));
            }
        } else if (header.at(i) == "proj_node_flag") {
            proj_node_flag = params.at(i);
        } else if (header.at(i) == "sum_data_flag") {
            sum_data_flag = params.at(i);
        } else if (header.at(i) == "status_code") {
            status_code = params.at(i);
        } else if (header.at(i) == "wbs_short_name") {
            wbs_short_name = params.at(i);
        } else if (header.at(i) == "wbs_name") {
            wbs_name = params.at(i);
        } else if (header.at(i) == "phase_id") {
            if (!params.at(i).empty()) {
                phase_id = stoi(params.at(i));
            }
        } else if (header.at(i) == "prent_wbs_id") {
            if (!params.at(i).empty()) {
                parent_wbs_id = stoi(params.at(i));
            }
        } else if (header.at(i) == "ev_user_pct") {
            if (!params.at(i).empty()) {
                ev_user_pct = stoi(params.at(i));
            }
        } else if (header.at(i) == "ev_etc_user_value") {
            if (!params.at(i).empty()) {
                ev_etc_user_value = stod(params.at(i));
            }
        } else if (header.at(i) == "orig_cost") {
            if (!params.at(i).empty()) {
                orig_cost = stod(params.at(i));
            }
        } else if (header.at(i) == "indep_remain_total_cost") {
            if (!params.at(i).empty()) {
                indep_remain_total_cost = stod(params.at(i));
            }
        } else if (header.at(i) == "ann_dscnt_rate_pct") {
            if (!params.at(i).empty()) {
                ann_dscnt_rate_pct = stod(params.at(i));
            }
        } else if (header.at(i) == "dscnt_period_type") {
            if (!params.at(i).empty()) {
                dscnt_period_type = params.at(i);
            }
        } else if (header.at(i) == "indep_remain_work_qty") {
            if (!params.at(i).empty()) {
                indep_remain_work_qty = stod(params.at(i));
            }
        } else if (header.at(i) == "anticip_start_date") {
            if (!params.at(i).empty()) {
                anticip_start_date = Date(params.at(i));
            }
        } else if (header.at(i) == "anticip_end_date") {
            if (!params.at(i).empty()) {
                anticip_end_date = Date(params.at(i));
            }
        } else if (header.at(i) == "ev_compute_type") {
            ev_compute_type = params.at(i);
        } else if (header.at(i) == "ev_etc_compute_type") {
            ev_etc_compute_type = params.at(i);
        } else if (header.at(i) == "guid") {
            guid = params.at(i);
        } else if (header.at(i) == "tmpl_guid") {
            tmpl_guid = params.at(i);
        } else if (header.at(i) == "plan_open_state") {
            plan_open_state = params.at(i);
        }
    }
    reader = readerObj;
    update_tsv();
}

void Wbs::update_tsv() {
    tsv = "%R\t";
    tsv.append(std::to_string(wbs_id))
        .append("\t")
        .append(std::to_string(proj_id))
        .append("\t")
        .append(std::to_string(obs_id))
        .append("\t")
        .append(std::to_string(seq_num))
        .append("\t")
        .append(std::to_string(est_wt))
        .append("\t")
        .append(proj_node_flag)
        .append("\t")
        .append(sum_data_flag)
        .append("\t")
        .append(status_code)
        .append("\t")
        .append(wbs_short_name)
        .append("\t")
        .append(wbs_name)
        .append("\t")
        .append(std::to_string(phase_id))
        .append("\t")
        .append(std::to_string(parent_wbs_id))
        .append("\t")
        .append(std::to_string(ev_user_pct))
        .append("\t")
        .append(std::to_string(ev_etc_user_value))
        .append("\t")
        .append(std::to_string(orig_cost))
        .append("\t")
        .append(std::to_string(indep_remain_total_cost))
        .append("\t")
        .append(std::to_string(ann_dscnt_rate_pct))
        .append("\t")
        .append(dscnt_period_type)
        .append("\t")
        .append(std::to_string(indep_remain_work_qty))
        .append("\t")
        .append(anticip_start_date.to_string())
        .append("\t")
        .append(anticip_end_date.to_string())
        .append("\t")
        .append(ev_compute_type)
        .append("\t")
        .append(ev_etc_compute_type)
        .append("\t")
        .append(guid)
        .append("\t")
        .append(tmpl_guid)
        .append("\t")
        .append(plan_open_state)
        .append("\n");
}

std::string Wbs::get_tsv() {
    update_tsv();
    return tsv;
}

std::vector<Task> Wbs::getTasks() { return reader->tasks.getByWbs(wbs_id); }

int Wbs::getWbsId() { return wbs_id; }
void Wbs::setWbsId(int value) {
    if (value > 0) {
        wbs_id = value;
        wbs_id_str = std::to_string(value);
    }
}
int Wbs::getProjId() { return proj_id; }
void Wbs::setProjId(int value) {
    if (value > 0) {
        proj_id = value;
        proj_id_str = std::to_string(value);
    }
}
int Wbs::getObsId() { return obs_id; }
void Wbs::setObsId(int value) {
    if (value > 0) {
        obs_id = value;
        obs_id_str = std::to_string(value);
    }
}
int Wbs::getSeqNum() { return seq_num; }
void Wbs::setSeqNum(int value) {
    if (value > 0) {
        seq_num = value;
        seq_num_str = std::to_string(value);
    }
}
int Wbs::getEstWt() { return est_wt; }
void Wbs::setEstWt(int value) {
    if (value > 0) {
        est_wt = value;
        est_wt_str = std::to_string(value);
    }
}
std::string Wbs::getProjNodeFlag() { return proj_node_flag; }
void Wbs::setProjNodeFlag(std::string value) {
    if (!value.empty()) {
        proj_node_flag = value;
    }
}
std::string Wbs::getSumDataFlag() { return sum_data_flag; }
void Wbs::setSumDataFlag(std::string value) {
    if (!value.empty()) {
        sum_data_flag = value;
    }
}
std::string Wbs::getStatusCode() { return status_code; }
void Wbs::setStatusCode(std::string value) {
    if (!value.empty()) {
        status_code = value;
    }
}
std::string Wbs::getWbsShortName() { return wbs_short_name; }
void Wbs::setWbsShortName(std::string value) {
    if (!value.empty()) {
        wbs_short_name = value;
    }
}
std::string Wbs::getWbsName() { return wbs_name; }
void Wbs::setWbsName(std::string value) {
    if (!value.empty()) {
        wbs_name = value;
    }
}
int Wbs::getPhaseId() { return phase_id; }
void Wbs::setPhaseId(int value) {
    if (value > 0) {
        phase_id = value;
        phase_id_str = std::to_string(value);
    }
}
int Wbs::getParentWbsId() { return parent_wbs_id; }
void Wbs::setParentWbsId(int value) {
    if (value > 0) {
        parent_wbs_id = value;
        parent_wbs_id_str = std::to_string(value);
    }
}
int Wbs::getEvUserPct() { return ev_user_pct; }
void Wbs::setEvUserPct(int value) {
    if (value > 0) {
        ev_user_pct = value;
        ev_user_pct_str = std::to_string(value);
    }
}
double Wbs::getEvEtcUserValue() { return ev_etc_user_value; }
void Wbs::setEvEtcUserValue(double value) {
    if (value > 0.0f) {
        ev_etc_user_value = value;
        ev_etc_user_value_str = std::to_string(value);
    }
}
double Wbs::getOrigCost() { return orig_cost; }
void Wbs::setOrigCost(double value) {
    if (value > 0.0f) {
        orig_cost = value;
        orig_cost_str = std::to_string(value);
    }
}
double Wbs::getIndepRemainTotalCost() { return indep_remain_total_cost; }
void Wbs::setIndepRemainTotalCost(double value) {
    if (value > 0.0f) {
        indep_remain_total_cost = value;
        indep_remain_total_cost_str = std::to_string(value);
    }
}
double Wbs::getAnnDscntRatePct() { return ann_dscnt_rate_pct; }
void Wbs::setAnnDscntRatePct(double value) {
    if (value > 0.0f) {
        ann_dscnt_rate_pct = value;
        ann_dscnt_rate_pct_str = std::to_string(value);
    }
}
std::string Wbs::getDscntPeriodType() { return dscnt_period_type; }
void Wbs::setDscntPeriodType(std::string value) {
    if (!value.empty()) {
        dscnt_period_type = value;
    }
}
double Wbs::getIndepRemainWorkQty() { return indep_remain_work_qty; }
void Wbs::setIndepRemainWorkQty(double value) {
    if (value > 0.0f) {
        indep_remain_work_qty = value;
        indep_remain_work_qty_str = std::to_string(value);
    }
}
std::string Wbs::getEvComputeType() { return ev_compute_type; }
void Wbs::setEvComputeType(std::string value) {
    if (!value.empty()) {
        ev_compute_type = value;
    }
}
std::string Wbs::getEvEtcComputeType() { return ev_etc_compute_type; }
void Wbs::setEvEtcComputeType(std::string value) {
    if (!value.empty()) {
        ev_etc_compute_type = value;
    }
}
std::string Wbs::getGuid() { return guid; }
void Wbs::setGuid(std::string value) {
    if (!value.empty()) {
        guid = value;
    }
}
std::string Wbs::getTmplGuid() { return tmpl_guid; }
void Wbs::setTmplGuid(std::string value) {
    if (!value.empty()) {
        tmpl_guid = value;
    }
}
std::string Wbs::getPlanOpenState() { return plan_open_state; }
void Wbs::setPlanOpenState(std::string value) {
    if (!value.empty()) {
        plan_open_state = value;
    }
}
Date Wbs::getAnticipStartDate() { return anticip_start_date; }
void Wbs::setAnticipStartDate(Date value) { anticip_start_date = value; }
Date Wbs::getAnticipEndDate() { return anticip_end_date; }
void Wbs::setAnticipEndDate(Date value) { anticip_end_date = value; }