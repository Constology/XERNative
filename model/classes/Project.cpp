
#include "Project.h"

#include "../../Reader.h"

Project::Project(const std::vector<std::string> header,
                 const std::vector<std::string> params,
                 Reader *readerObj) {
    tsv = "";
    for (int i = 0; i < params.size(); i++) {
        if (header.at(i) == "proj_id") {
            if (!params.at(i).empty()) {
                proj_id = stoi(params.at(i));
                proj_id_str = params.at(i);
            }
        } else if (header.at(i) == "acct_id") {
            if (!params.at(i).empty()) {
                acct_id = stoi(params.at(i));
                acct_id_str = params.at(i);
            }
        } else if (header.at(i) == "orig_proj_id") {
            if (!params.at(i).empty()) {
                orig_proj_id = stoi(params.at(i));
                orig_proj_id_str = params.at(i);
            }
        } else if (header.at(i) == "source_proj_id") {
            if (!params.at(i).empty()) {
                source_proj_id = stoi(params.at(i));
                source_proj_id_str = params.at(i);
            }
        } else if (header.at(i) == "base_type_id") {
            if (!params.at(i).empty()) {
                base_type_id = stoi(params.at(i));
                base_type_id_str = params.at(i);
            }
        } else if (header.at(i) == "clndr_id") {
            if (!params.at(i).empty()) {
                clndr_id = stoi(params.at(i));
                clndr_id_str = params.at(i);
            }
        } else if (header.at(i) == "sum_base_proj_id") {
            if (!params.at(i).empty()) {
                sum_base_proj_id = stoi(params.at(i));
                sum_base_proj_id_str = params.at(i);
            }
        } else if (header.at(i) == "last_fin_dates_id") {
            if (!params.at(i).empty()) {
                last_fin_dates_id = stoi(params.at(i));
                last_fin_dates_id_str = params.at(i);
            }
        } else if (header.at(i) == "fintmpl_id") {
            if (!params.at(i).empty()) {
                fintmpl_id = stoi(params.at(i));
                fintmpl_id_str = params.at(i);
            }
        } else if (header.at(i) == "location_id") {
            if (!params.at(i).empty()) {
                location_id = stoi(params.at(i));
                location_id_str = params.at(i);
            }
        } else if (header.at(i) == "new_fin_dates_id") {
            if (!params.at(i).empty()) {
                new_fin_dates_id = stoi(params.at(i));
                new_fin_dates_id_str = params.at(i);
            }
        } else if (header.at(i) == "fy_start_month_num") {
            fy_start_month_num = params.at(i);
        } else if (header.at(i) == "rsrc_self_add_flag") {
            rsrc_self_add_flag = params.at(i);
        } else if (header.at(i) == "allow_complete_flag") {
            allow_complete_flag = params.at(i);
        } else if (header.at(i) == "rsrc_multi_assign_flag") {
            rsrc_multi_assign_flag = params.at(i);
        } else if (header.at(i) == "checkout_flag") {
            checkout_flag = params.at(i);
        } else if (header.at(i) == "project_flag") {
            project_flag = params.at(i);
        } else if (header.at(i) == "step_complete_flag") {
            step_complete_flag = params.at(i);
        } else if (header.at(i) == "cost_qty_recalc_flag") {
            cost_qty_recalc_flag = params.at(i);
        } else if (header.at(i) == "batch_sum_flag") {
            batch_sum_flag = params.at(i);
        } else if (header.at(i) == "name_sep_char") {
            name_sep_char = params.at(i);
        } else if (header.at(i) == "def_complete_pct_type") {
            def_complete_pct_type = params.at(i);
        } else if (header.at(i) == "proj_short_name") {
            proj_short_name = params.at(i);
        } else if (header.at(i) == "task_code_base") {
            task_code_base = params.at(i);
        } else if (header.at(i) == "task_code_step") {
            task_code_step = params.at(i);
        } else if (header.at(i) == "priority_num") {
            priority_num = params.at(i);
        } else if (header.at(i) == "wbs_max_sum_level") {
            wbs_max_sum_level = params.at(i);
        } else if (header.at(i) == "strgy_priority_num") {
            strgy_priority_num = params.at(i);
        } else if (header.at(i) == "last_checksum") {
            last_checksum = params.at(i);
        } else if (header.at(i) == "critical_drtn_hr_cnt") {
            critical_drtn_hr_cnt = params.at(i);
        } else if (header.at(i) == "def_cost_per_qty") {
            def_cost_per_qty = params.at(i);
        } else if (header.at(i) == "last_recalc_date") {
            last_recalc_date = params.at(i);
        } else if (header.at(i) == "plan_start_date") {
            plan_start_date = params.at(i);
        } else if (header.at(i) == "plan_end_date") {
            plan_end_date = params.at(i);
        } else if (header.at(i) == "scd_end_date") {
            scd_end_date = params.at(i);
        } else if (header.at(i) == "add_date") {
            add_date = params.at(i);
        } else if (header.at(i) == "last_tasksum_date") {
            last_tasksum_date = params.at(i);
        } else if (header.at(i) == "fcst_start_date") {
            fcst_start_date = params.at(i);
        } else if (header.at(i) == "def_duration_type") {
            def_duration_type = params.at(i);
        } else if (header.at(i) == "task_code_prefix") {
            task_code_prefix = params.at(i);
        } else if (header.at(i) == "guid") {
            guid = params.at(i);
        } else if (header.at(i) == "def_qty_type") {
            def_qty_type = params.at(i);
        } else if (header.at(i) == "add_by_name") {
            add_by_name = params.at(i);
        } else if (header.at(i) == "web_local_root_path") {
            web_local_root_path = params.at(i);
        } else if (header.at(i) == "proj_url") {
            proj_url = params.at(i);
        } else if (header.at(i) == "def_rate_type") {
            def_rate_type = params.at(i);
        } else if (header.at(i) == "add_act_remain_flag") {
            add_act_remain_flag = params.at(i);
        } else if (header.at(i) == "act_this_per_link_flag") {
            act_this_per_link_flag = params.at(i);
        } else if (header.at(i) == "def_task_type") {
            def_task_type = params.at(i);
        } else if (header.at(i) == "act_pct_link_flag") {
            act_pct_link_flag = params.at(i);
        } else if (header.at(i) == "critical_path_type") {
            critical_path_type = params.at(i);
        } else if (header.at(i) == "task_code_prefix_flag") {
            task_code_prefix_flag = params.at(i);
        } else if (header.at(i) == "def_rollup_dates_flag") {
            def_rollup_dates_flag = params.at(i);
        } else if (header.at(i) == "use_project_baseline_flag") {
            use_project_baseline_flag = params.at(i);
        } else if (header.at(i) == "rem_target_link_flag") {
            rem_target_link_flag = params.at(i);
        } else if (header.at(i) == "reset_planned_flag") {
            reset_planned_flag = params.at(i);
        } else if (header.at(i) == "allow_neg_act_flag") {
            allow_neg_act_flag = params.at(i);
        } else if (header.at(i) == "sum_assign_level") {
            sum_assign_level = params.at(i);
        } else if (header.at(i) == "last_baseline_update_date") {
            last_baseline_update_date = params.at(i);
        } else if (header.at(i) == "cr_external_key") {
            cr_external_key = params.at(i);
        } else if (header.at(i) == "apply_actuals_date") {
            apply_actuals_date = params.at(i);
        } else if (header.at(i) == "loaded_scope_level") {
            loaded_scope_level = params.at(i);
        } else if (header.at(i) == "export_flag") {
            export_flag = params.at(i);
        } else if (header.at(i) == "baselines_to_export") {
            baselines_to_export = params.at(i);
        } else if (header.at(i) == "baseline_names_to_export") {
            baseline_names_to_export = params.at(i);
        } else if (header.at(i) == "next_data_date") {
            next_data_date = params.at(i);
        } else if (header.at(i) == "close_period_flag") {
            close_period_flag = params.at(i);
        } else if (header.at(i) == "sum_refresh_date") {
            sum_refresh_date = params.at(i);
        } else if (header.at(i) == "trsrcsum_loaded") {
            trsrcsum_loaded = params.at(i);
        } else if (header.at(i) == "sumtask_loaded") {
            sumtask_loaded = params.at(i);
        }
    }
    update_tsv();
    reader = readerObj;
}

void Project::update_tsv() {
    tsv = "%R\t";
    tsv.append("\t")
        .append(proj_id_str)
        .append("\t")
        .append(fy_start_month_num)
        .append("\t")
        .append(rsrc_self_add_flag)
        .append("\t")
        .append(allow_complete_flag)
        .append("\t")
        .append(rsrc_multi_assign_flag)
        .append("\t")
        .append(checkout_flag)
        .append("\t")
        .append(project_flag)
        .append("\t")
        .append(step_complete_flag)
        .append("\t")
        .append(cost_qty_recalc_flag)
        .append("\t")
        .append(batch_sum_flag)
        .append("\t")
        .append(name_sep_char)
        .append("\t")
        .append(def_complete_pct_type)
        .append("\t")
        .append(proj_short_name)
        .append("\t")
        .append(acct_id_str)
        .append("\t")
        .append(orig_proj_id_str)
        .append("\t")
        .append(source_proj_id_str)
        .append("\t")
        .append(base_type_id_str)
        .append("\t")
        .append(clndr_id_str)
        .append("\t")
        .append(sum_base_proj_id_str)
        .append("\t")
        .append(task_code_base)
        .append("\t")
        .append(task_code_step)
        .append("\t")
        .append(priority_num)
        .append("\t")
        .append(wbs_max_sum_level)
        .append("\t")
        .append(strgy_priority_num)
        .append("\t")
        .append(last_checksum)
        .append("\t")
        .append(critical_drtn_hr_cnt)
        .append("\t")
        .append(def_cost_per_qty)
        .append("\t")
        .append(last_recalc_date)
        .append("\t")
        .append(plan_start_date)
        .append("\t")
        .append(plan_end_date)
        .append("\t")
        .append(scd_end_date)
        .append("\t")
        .append(add_date)
        .append("\t")
        .append(last_tasksum_date)
        .append("\t")
        .append(fcst_start_date)
        .append("\t")
        .append(def_duration_type)
        .append("\t")
        .append(task_code_prefix)
        .append("\t")
        .append(guid)
        .append("\t")
        .append(def_qty_type)
        .append("\t")
        .append(add_by_name)
        .append("\t")
        .append(web_local_root_path)
        .append("\t")
        .append(proj_url)
        .append("\t")
        .append(def_rate_type)
        .append("\t")
        .append(add_act_remain_flag)
        .append("\t")
        .append(act_this_per_link_flag)
        .append("\t")
        .append(def_task_type)
        .append("\t")
        .append(act_pct_link_flag)
        .append("\t")
        .append(critical_path_type)
        .append("\t")
        .append(task_code_prefix_flag)
        .append("\t")
        .append(def_rollup_dates_flag)
        .append("\t")
        .append(use_project_baseline_flag)
        .append("\t")
        .append(rem_target_link_flag)
        .append("\t")
        .append(reset_planned_flag)
        .append("\t")
        .append(allow_neg_act_flag)
        .append("\t")
        .append(sum_assign_level)
        .append("\t")
        .append(last_fin_dates_id_str)
        .append("\t")
        .append(last_baseline_update_date)
        .append("\t")
        .append(cr_external_key)
        .append("\t")
        .append(apply_actuals_date)
        .append("\t")
        .append(fintmpl_id_str)
        .append("\t")
        .append(location_id_str)
        .append("\t")
        .append(loaded_scope_level)
        .append("\t")
        .append(export_flag)
        .append("\t")
        .append(new_fin_dates_id_str)
        .append("\t")
        .append(baselines_to_export)
        .append("\t")
        .append(baseline_names_to_export)
        .append("\t")
        .append(next_data_date)
        .append("\t")
        .append(close_period_flag)
        .append("\t")
        .append(sum_refresh_date)
        .append("\t")
        .append(trsrcsum_loaded)
        .append("\t")
        .append(sumtask_loaded)
        .append("\n");
}

std::vector<Wbs> Project::getWbs() { return reader->wbss.getByProjectId(proj_id); }

std::vector<Projpcat> Project::getProjectCodes() {
    return reader->projpcats.getByProjectId(proj_id);
}

std::string Project::get_tsv() const { return tsv; }