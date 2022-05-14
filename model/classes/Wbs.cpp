#include "Wbs.h"

#include "../../Reader.h"

// TODO: Convert string types to dates anticip_start_date & anticip_end_date
Wbs::Wbs(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj)
{
    tsv = "";
    for (int i = 0; i < header.size(); i++)
    {
        if (header.at(i).empty())
            break;
        if (header.at(i) == "wbs_id")
        {
            if (!params.at(i).empty())
            {
                wbs_id = stoi(params.at(i));
            }
        }
        else if (header.at(i) == "proj_id")
        {
            if (!params.at(i).empty())
            {
                proj_id = stoi(params.at(i));
            }
        }
        else if (header.at(i) == "obs_id")
        {
            if (!params.at(i).empty())
            {
                obs_id = stoi(params.at(i));
            }
        }
        else if (header.at(i) == "seq_num")
        {
            if (!params.at(i).empty())
            {
                seq_num = stoi(params.at(i));
            }
        }
        else if (header.at(i) == "est_wt")
        {
            if (!params.at(i).empty())
            {
                est_wt = stoi(params.at(i));
            }
        }
        else if (header.at(i) == "proj_node_flag")
        {
            proj_node_flag = params.at(i);
        }
        else if (header.at(i) == "sum_data_flag")
        {
            sum_data_flag = params.at(i);
        }
        else if (header.at(i) == "status_code")
        {
            status_code = params.at(i);
        }
        else if (header.at(i) == "wbs_short_name")
        {
            wbs_short_name = params.at(i);
        }
        else if (header.at(i) == "wbs_name")
        {
            wbs_name = params.at(i);
        }
        else if (header.at(i) == "phase_id")
        {
            if (!params.at(i).empty())
            {
                phase_id = stoi(params.at(i));
            }
        }
        else if (header.at(i) == "prent_wbs_id")
        {
            if (!params.at(i).empty())
            {
                parent_wbs_id = stoi(params.at(i));
            }
        }
        else if (header.at(i) == "ev_user_pct")
        {
            if (!params.at(i).empty())
            {
                ev_user_pct = stoi(params.at(i));
            }
        }
        else if (header.at(i) == "ev_etc_user_value")
        {
            if (!params.at(i).empty())
            {
                ev_etc_user_value = stod(params.at(i));
            }
        }
        else if (header.at(i) == "orig_cost")
        {
            if (!params.at(i).empty())
            {
                orig_cost = stod(params.at(i));
            }
        }
        else if (header.at(i) == "indep_remain_total_cost")
        {
            if (!params.at(i).empty())
            {
                indep_remain_total_cost = stod(params.at(i));
            }
        }
        else if (header.at(i) == "ann_dscnt_rate_pct")
        {
            if (!params.at(i).empty())
            {
                ann_dscnt_rate_pct = stod(params.at(i));
            }
        }
        else if (header.at(i) == "dscnt_period_type")
        {
            if (!params.at(i).empty())
            {
                dscnt_period_type = stoi(params.at(i));
            }
        }
        else if (header.at(i) == "indep_remain_work_qty")
        {
            if (!params.at(i).empty())
            {
                indep_remain_work_qty = stod(params.at(i));
            }
        }
        else if (header.at(i) == "anticip_start_date")
        {
            if (!params.at(i).empty())
            {
                anticip_start_date = Date(params.at(i));
            }
        }
        else if (header.at(i) == "anticip_end_date")
        {
            if (!params.at(i).empty())
            {
                anticip_end_date = Date(params.at(i));
            }
        }
        else if (header.at(i) == "ev_compute_type")
        {
            ev_compute_type = params.at(i);
        }
        else if (header.at(i) == "ev_etc_compute_type")
        {
            ev_etc_compute_type = params.at(i);
        }
        else if (header.at(i) == "guid")
        {
            guid = params.at(i);
        }
        else if (header.at(i) == "tmpl_guid")
        {
            tmpl_guid = params.at(i);
        }
        else if (header.at(i) == "plan_open_state")
        {
            plan_open_state = params.at(i);
        }
    }
    reader = readerObj;
    tsv.append(std::to_string(wbs_id)).append("\t").append(std::to_string(proj_id)).append("\t").append(std::to_string(obs_id)).append("\t").append(std::to_string(seq_num)).append("\t").append(std::to_string(est_wt)).append("\t").append(proj_node_flag).append("\t").append(sum_data_flag).append("\t").append(status_code).append("\t").append(wbs_short_name).append("\t").append(wbs_name).append("\t").append(std::to_string(phase_id)).append("\t").append(std::to_string(parent_wbs_id)).append("\t").append(std::to_string(ev_user_pct)).append("\t").append(std::to_string(ev_etc_user_value)).append("\t").append(std::to_string(orig_cost)).append("\t").append(std::to_string(indep_remain_total_cost)).append("\t").append(std::to_string(ann_dscnt_rate_pct)).append("\t").append(std::to_string(dscnt_period_type)).append("\t").append(std::to_string(indep_remain_work_qty)).append("\t").append(anticip_start_date.to_string()).append("\t").append(anticip_end_date.to_string()).append("\t").append(ev_compute_type).append("\t").append(ev_etc_compute_type).append("\t").append(guid).append("\t").append(tmpl_guid).append("\t").append(plan_open_state).append("\n");
}

std::string Wbs::get_tsv()
{
    return tsv;
}

std::vector<Task> Wbs::getTasks()
{
    return reader->tasks.getByWbs(wbs_id);
}