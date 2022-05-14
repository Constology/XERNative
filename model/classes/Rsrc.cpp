//
// Created by sorat on 12/05/2022.
//

#include "Rsrc.h"
#include "../../Reader.h"

Rsrc::Rsrc(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj)
{
	tsv = "";
	for (int i = 0; i < params.size(); i++)
	{
		if (header.at(i) == "rsrc_id")
		{
			if (!params.at(i).empty())
			{
				rsrc_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "parent_rsrc_id")
		{
			if (!params.at(i).empty())
			{
				parent_rsrc_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "clndr_id")
		{
			if (!params.at(i).empty())
			{
				clndr_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "role_id")
		{
			if (!params.at(i).empty())
			{
				role_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "shift_id")
		{
			if (!params.at(i).empty())
			{
				shift_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "user_id")
		{
			if (!params.at(i).empty())
			{
				user_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "pobs_id")
		{
			if (!params.at(i).empty())
			{
				pobs_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "rsrc_seq_num")
		{
			if (!params.at(i).empty())
			{
				rsrc_seq_num = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "curr_id")
		{
			if (!params.at(i).empty())
			{
				curr_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "unit_id")
		{
			if (!params.at(i).empty())
			{
				unit_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "location_id")
		{
			if (!params.at(i).empty())
			{
				location_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "guid")
		{
			guid = params.at(i);
		}
		else if (header.at(i) == "email_addr")
		{
			email_addr = params.at(i);
		}
		else if (header.at(i) == "employee_code")
		{
			employee_code = params.at(i);
		}
		else if (header.at(i) == "office_phone")
		{
			office_phone = params.at(i);
		}
		else if (header.at(i) == "rsrc_name")
		{
			rsrc_name = params.at(i);
		}
		else if (header.at(i) == "rsrc_short_name")
		{
			rsrc_short_name = params.at(i);
		}
		else if (header.at(i) == "rsrc_title_name")
		{
			rsrc_title_name = params.at(i);
		}
		else if (header.at(i) == "def_qty_per_hr")
		{
			def_qty_per_hr = params.at(i);
		}
		else if (header.at(i) == "cost_qty_type")
		{
			cost_qty_type = params.at(i);
		}
		else if (header.at(i) == "ot_factor")
		{
			ot_factor = params.at(i);
		}
		else if (header.at(i) == "active_flag")
		{
			active_flag = params.at(i);
		}
		else if (header.at(i) == "auto_compute_act_flag")
		{
			auto_compute_act_flag = params.at(i);
		}
		else if (header.at(i) == "ot_flag")
		{
			ot_flag = params.at(i);
		}
		else if (header.at(i) == "rsrc_type")
		{
			rsrc_type = params.at(i);
		}
		else if (header.at(i) == "rsrc_notes")
		{
			rsrc_notes = params.at(i);
		}
		else if (header.at(i) == "load_tasks_flag")
		{
			load_tasks_flag = params.at(i);
		}
		else if (header.at(i) == "level_flag")
		{
			level_flag = params.at(i);
		}
		else if (header.at(i) == "last_checksum")
		{
			last_checksum = params.at(i);
		}
	}
	reader = readerObj;
	tsv
		.append(std::to_string(rsrc_id))
		.append("\t")
		.append(std::to_string(parent_rsrc_id))
		.append("\t")
		.append(std::to_string(clndr_id))
		.append("\t")
		.append(std::to_string(role_id))
		.append("\t")
		.append(std::to_string(shift_id))
		.append("\t")
		.append(std::to_string(user_id))
		.append("\t")
		.append(std::to_string(pobs_id))
		.append("\t")
		.append(std::to_string(rsrc_seq_num))
		.append("\t")
		.append(std::to_string(curr_id))
		.append("\t")
		.append(std::to_string(unit_id))
		.append("\t")
		.append(std::to_string(location_id))
		.append("\t")
		.append(guid)
		.append("\t")
		.append(email_addr)
		.append("\t")
		.append(employee_code)
		.append("\t")
		.append(office_phone)
		.append("\t")
		.append(other_phone)
		.append("\t")
		.append(rsrc_name)
		.append("\t")
		.append(rsrc_short_name)
		.append("\t")
		.append(rsrc_title_name)
		.append("\t")
		.append(def_qty_per_hr)
		.append("\t")
		.append(cost_qty_type)
		.append("\t")
		.append(ot_factor)
		.append("\t")
		.append(active_flag)
		.append("\t")
		.append(auto_compute_act_flag)
		.append("\t")
		.append(def_cost_qty_link_flag)
		.append("\t")
		.append(ot_flag)
		.append("\t")
		.append(rsrc_type)
		.append("\t")
		.append(rsrc_notes)
		.append("\t")
		.append(load_tasks_flag)
		.append("\t")
		.append(level_flag)
		.append("\t")
		.append(last_checksum)
		.append("\n");
}

Rsrc Rsrc::getParent()
{
	Rsrc rsr = reader->rsrcs.findById(parent_rsrc_id);
	return rsr;
}

std::vector<Rsrcrate> Rsrc::getRsrcRate()
{
	std::vector<Rsrcrate> toReturn;
	toReturn = reader->rsrcrates.getAll();
	return toReturn;
}

std::vector<Rsrc> Rsrc::getChildren()
{
	return reader->rsrcs.getChildren(rsrc_id);
}