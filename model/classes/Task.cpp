//
// Created by sorat on 13/05/2022.
//

#include "Task.h"

Task::Task(std::vector<std::string> header, std::vector<std::string> params)
{
	tsv = "";
	for (int i = 0; i < header.size(); i++)
	{
		if (header.at(i) == "task_id")
		{
			if (!params.at(i).empty())
			{
				task_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "proj_id")
		{
			if (!params.at(i).empty())
			{
				proj_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "wbs_id")
		{
			if (!params.at(i).empty())
			{
				wbs_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "clndr_id")
		{
			if (!params.at(i).empty())
			{
				clndr_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "rsrc_id")
		{
			if (!params.at(i).empty())
			{
				rsrc_id = stoi(params.at(i));
			}
		}

		else if (header.at(i) == "location_id")
		{
			if (!params.at(i).empty())
			{
				location_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "total_float_hr_cnt")
		{
			if (!params.at(i).empty())
			{
				total_float_hr_cnt = stof(params.at(i));
			}
		}
		else if (header.at(i) == "free_float_hr_cnt")
		{
			if (!params.at(i).empty())
			{
				free_float_hr_cnt = stof(params.at(i));
			}
		}
		else if (header.at(i) == "remain_drtn_hr_cnt")
		{
			if (!params.at(i).empty())
			{
				remain_drtn_hr_cnt = stof(params.at(i));
			}
		}
		else if (header.at(i) == "float_path")
		{
			if (!params.at(i).empty())
			{
				float_path = stof(params.at(i));
			}
		}
		else if (header.at(i) == "float_path_order")
		{
			if (!params.at(i).empty())
			{
				float_path_order = stof(params.at(i));
			}
		}
		else if (header.at(i) == "phys_complete_pct")
		{
			phys_complete_pct = params.at(i);
		}
		else if (header.at(i) == "rev_fdbk_flag")
		{
			rev_fdbk_flag = params.at(i);
		}
		else if (header.at(i) == "est_wt")
		{
			est_wt = params.at(i);
		}
		else if (header.at(i) == "lock_plan_flag")
		{
			lock_plan_flag = params.at(i);
		}
		else if (header.at(i) == "auto_compute_act_flag")
		{
			auto_compute_act_flag = params.at(i);
		}
		else if (header.at(i) == "complete_pct_type")
		{
			complete_pct_type = params.at(i);
		}
		else if (header.at(i) == "task_type")
		{
			task_type = params.at(i);
		}
		else if (header.at(i) == "duration_type")
		{
			duration_type = params.at(i);
		}
		else if (header.at(i) == "status_code")
		{
			status_code = params.at(i);
		}
		else if (header.at(i) == "task_code")
		{
			task_code = params.at(i);
		}
		else if (header.at(i) == "task_name")
		{
			task_name = params.at(i);
		}
		else if (header.at(i) == "act_work_qty")
		{
			act_work_qty = params.at(i);
		}
		else if (header.at(i) == "remain_work_qty")
		{
			remain_work_qty = params.at(i);
		}
		else if (header.at(i) == "target_work_qty")
		{
			target_work_qty = params.at(i);
		}
		else if (header.at(i) == "target_drtn_hr_cnt")
		{
			target_drtn_hr_cnt = params.at(i);
		}
		else if (header.at(i) == "target_equip_qty")
		{
			target_equip_qty = params.at(i);
		}
		else if (header.at(i) == "act_equip_qty")
		{
			act_equip_qty = params.at(i);
		}
		else if (header.at(i) == "remain_equip_qty")
		{
			remain_equip_qty = params.at(i);
		}
		else if (header.at(i) == "cstr_type")
		{
			cstr_type = params.at(i);
		}
		else if (header.at(i) == "priority_type")
		{
			priority_type = params.at(i);
		}
		else if (header.at(i) == "guid")
		{
			guid = params.at(i);
		}
		else if (header.at(i) == "tmpl_guid")
		{
			tmpl_guid = params.at(i);
		}
		else if (header.at(i) == "cstr_type2")
		{
			cstr_type2 = params.at(i);
		}
		else if (header.at(i) == "driving_path_flag")
		{
			driving_path_flag = params.at(i);
		}
		else if (header.at(i) == "act_this_per_work_qty")
		{
			act_this_per_work_qty = params.at(i);
		}
		else if (header.at(i) == "act_this_per_equip_qty")
		{
			act_this_per_equip_qty = params.at(i);
		}
		else if (header.at(i) == "create_user")
		{
			create_user = params.at(i);
		}
		else if (header.at(i) == "update_user")
		{
			update_user = params.at(i);
		}
		else if (header.at(i) == "cstr_date")
		{
			if (!params.at(i).empty())
			{
				cstr_date = Date(params.at(i));
			}
		}
		else if (header.at(i) == "act_start_date")
		{
			if (!params.at(i).empty())
			{
				act_start_date = Date(params.at(i));
			}
		}
		else if (header.at(i) == "act_end_date")
		{
			if (!params.at(i).empty())
			{
				act_end_date = Date(params.at(i));
			}
		}
		else if (header.at(i) == "late_start_date")
		{
			if (!params.at(i).empty())
			{
				late_start_date = Date(params.at(i));
			}
		}
		else if (header.at(i) == "late_end_date")
		{
			if (!params.at(i).empty())
			{
				late_end_date = Date(params.at(i));
			}
		}
		else if (header.at(i) == "expect_end_date")
		{
			if (!params.at(i).empty())
			{
				expect_end_date = Date(params.at(i));
			}
		}
		else if (header.at(i) == "early_start_date")
		{
			if (!params.at(i).empty())
			{
				early_start_date = Date(params.at(i));
			}
		}
		else if (header.at(i) == "early_end_date")
		{
			if (!params.at(i).empty())
			{
				early_end_date = Date(params.at(i));
			}
		}
		else if (header.at(i) == "restart_date")
		{
			if (!params.at(i).empty())
			{
				restart_date = Date(params.at(i));
			}
		}
		else if (header.at(i) == "reend_date")
		{
			if (!params.at(i).empty())
			{
				reend_date = Date(params.at(i));
			}
		}
		else if (header.at(i) == "target_end_date")
		{
			if (!params.at(i).empty())
			{
				target_end_date = Date(params.at(i));
			}
		}
		else if (header.at(i) == "rem_late_start_date")
		{
			if (!params.at(i).empty())
			{
				rem_late_start_date = Date(params.at(i));
			}
		}
		else if (header.at(i) == "rem_late_end_date")
		{
			if (!params.at(i).empty())
			{
				rem_late_end_date = Date(params.at(i));
			}
		}
		else if (header.at(i) == "suspend_date")
		{
			if (!params.at(i).empty())
			{
				suspend_date = Date(params.at(i));
			}
		}
		else if (header.at(i) == "resume_date")
		{
			if (!params.at(i).empty())
			{
				resume_date = Date(params.at(i));
			}
		}
		else if (header.at(i) == "cstr_date2")
		{
			if (!params.at(i).empty())
			{
				cstr_date2 = Date(params.at(i));
			}
		}
		else if (header.at(i) == "external_early_start_date")
		{
			if (!params.at(i).empty())
			{
				external_early_start_date = Date(params.at(i));
			}
		}
		else if (header.at(i) == "external_late_end_date")
		{
			if (!params.at(i).empty())
			{
				external_late_end_date = Date(params.at(i));
			}
		}
		else if (header.at(i) == "create_date")
		{
			if (!params.at(i).empty())
			{
				create_date = Date(params.at(i));
			}
		}
		else if (header.at(i) == "update_date")
		{
			if (!params.at(i).empty())
			{
				update_date = Date(params.at(i));
			}
		}
	}
	tsv.append(std::to_string(task_id)).append("\t").append(std::to_string(proj_id)).append("\t").append(std::to_string(wbs_id)).append("\t").append(std::to_string(clndr_id)).append("\t").append(std::to_string(rsrc_id)).append("\t").append(std::to_string(location_id)).append("\t").append(std::to_string(total_float_hr_cnt)).append("\t").append(std::to_string(free_float_hr_cnt)).append("\t").append(std::to_string(remain_drtn_hr_cnt)).append("\t").append(std::to_string(float_path)).append("\t").append(std::to_string(float_path_order)).append("\t").append(phys_complete_pct).append("\t").append(rev_fdbk_flag).append("\t").append(est_wt).append("\t").append(lock_plan_flag).append("\t").append(auto_compute_act_flag).append("\t").append(complete_pct_type).append("\t").append(task_type).append("\t").append(duration_type).append("\t").append(status_code).append("\t").append(task_code).append("\t").append(task_name).append("\t").append(act_work_qty).append("\t").append(remain_work_qty).append("\t").append(target_work_qty).append("\t").append(target_drtn_hr_cnt).append("\t").append(target_equip_qty).append("\t").append(act_equip_qty).append("\t").append(remain_equip_qty).append("\t").append(cstr_type).append("\t").append(priority_type).append("\t").append(guid).append("\t").append(tmpl_guid).append("\t").append(cstr_type2).append("\t").append(driving_path_flag).append("\t").append(act_this_per_work_qty).append("\t").append(act_this_per_equip_qty).append("\t").append(create_user).append("\t").append(update_user).append("\t").append(cstr_date.to_string()).append("\t").append(act_start_date.to_string()).append("\t").append(act_end_date.to_string()).append("\t").append(late_start_date.to_string()).append("\t").append(late_end_date.to_string()).append("\t").append(expect_end_date.to_string()).append("\t").append(early_start_date.to_string()).append("\t").append(early_end_date.to_string()).append("\t").append(restart_date.to_string()).append("\t").append(reend_date.to_string()).append("\t").append(target_start_date.to_string()).append("\t").append(target_end_date.to_string()).append("\t").append(rem_late_start_date.to_string()).append("\t").append(rem_late_end_date.to_string()).append("\t").append(suspend_date.to_string()).append("\t").append(resume_date.to_string()).append("\t").append(cstr_date2.to_string()).append("\t").append(external_early_start_date.to_string()).append("\t").append(external_late_end_date.to_string()).append("\t").append(create_date.to_string()).append("\t").append(update_date.to_string()).append("\n");
}