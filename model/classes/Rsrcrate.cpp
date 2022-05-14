//
// Created by sorat on 12/05/2022.
//

#include "Rsrcrate.h"

Rsrcrate::Rsrcrate(const std::vector<std::string> header, const std::vector<std::string> params)
{
	tsv = "";
	for (int i = 0; i < params.size(); i++)
	{
		if (header.at(i) == "rsrc_rate")
		{
			if (!params.at(i).empty())
			{
				rsrc_rate = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "rsrc_id")
		{
			if (!params.at(i).empty())
			{
				rsrc_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "max_qty_per_hr")
		{
			if (!params.at(i).empty())
			{
				max_qty_per_hr = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "cost_per_qty")
		{
			if (!params.at(i).empty())
			{
				cost_per_qty = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "cost_per_qty2")
		{
			if (!params.at(i).empty())
			{
				cost_per_qty2 = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "cost_per_qty3")
		{
			if (!params.at(i).empty())
			{
				cost_per_qty3 = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "cost_per_qty4")
		{
			if (!params.at(i).empty())
			{
				cost_per_qty4 = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "cost_per_qty5")
		{
			if (!params.at(i).empty())
			{
				cost_per_qty5 = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "shift_period_id")
		{
			if (!params.at(i).empty())
			{
				shift_period_id = stoi(params.at(i));
			}
		}
		else if (header.at(i) == "start_date")
		{
			if (!params.at(i).empty())
			{
				start_date = Date(params.at(i));
			}
		}
	}
	tsv
		.append(std::to_string(rsrc_rate))
		.append("\t")
		.append(std::to_string(rsrc_id))
		.append("\t")
		.append(std::to_string(max_qty_per_hr))
		.append("\t")
		.append(std::to_string(cost_per_qty))
		.append("\t")
		.append(std::to_string(cost_per_qty2))
		.append("\t")
		.append(std::to_string(cost_per_qty3))
		.append("\t")
		.append(std::to_string(cost_per_qty4))
		.append("\t")
		.append(std::to_string(cost_per_qty5))
		.append("\t")
		.append(std::to_string(shift_period_id))
		.append("\t")
		.append(start_date.to_string())
		.append("\n");
}