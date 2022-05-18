

#include "Rsrcrate.h"
#include "../../Reader.h"

Rsrcrate::Rsrcrate(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj)
{
	reader = readerObj;
	tsv = "";
	for (int i = 0; i < params.size(); i++)
	{
		if (header.at(i) == "rsrc_rate")
		{
			if (!params.at(i).empty())
			{
				rsrc_rate = stoi(params.at(i));
				rsrc_rate_str = params.at(i);
			}
		}
		else if (header.at(i) == "rsrc_id")
		{
			if (!params.at(i).empty())
			{
				rsrc_id = stoi(params.at(i));
				rsrc_id_str = params.at(i);
			}
		}
		else if (header.at(i) == "max_qty_per_hr")
		{
			if (!params.at(i).empty())
			{
				max_qty_per_hr = stoi(params.at(i));
				max_qty_per_hr_str = params.at(i);
			}
		}
		else if (header.at(i) == "cost_per_qty")
		{
			if (!params.at(i).empty())
			{
				cost_per_qty = stoi(params.at(i));
				cost_per_qty2_str = params.at(i);
			}
		}
		else if (header.at(i) == "cost_per_qty2")
		{
			if (!params.at(i).empty())
			{
				cost_per_qty2 = stoi(params.at(i));
				cost_per_qty2_str = params.at(i);
			}
		}
		else if (header.at(i) == "cost_per_qty3")
		{
			if (!params.at(i).empty())
			{
				cost_per_qty3 = stoi(params.at(i));
				cost_per_qty3_str = params.at(i);
			}
		}
		else if (header.at(i) == "cost_per_qty4")
		{
			if (!params.at(i).empty())
			{
				cost_per_qty4 = stoi(params.at(i));
				cost_per_qty4_str = params.at(i);
			}
		}
		else if (header.at(i) == "cost_per_qty5")
		{
			if (!params.at(i).empty())
			{
				cost_per_qty5 = stoi(params.at(i));
				cost_per_qty5_str = params.at(i);
			}
		}
		else if (header.at(i) == "shift_period_id")
		{
			if (!params.at(i).empty())
			{
				shift_period_id = stoi(params.at(i));
				shift_period_id_str = params.at(i);
			}
		}
		else if (header.at(i) == "start_date")
		{
			if (!params.at(i).empty())
			{
				start_date = Date(params.at(i));
				start_date_str = params.at(i);
			}
		}
	}
	update_tsv();
}

void Rsrcrate::update_tsv()
{
	tsv = "%R\t";
	tsv.append(rsrc_rate_str)
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

std::string Rsrcrate::get_tsv(){
	update_tsv();
	return tsv;
}

int Rsrcrate::getRsrcRate() { return rsrc_rate; }
void Rsrcrate::setRsrcRate(int value)
{
	if (value > 0)
	{
		rsrc_rate = value;
		rsrc_rate_str = std::to_string(value);
	}
}
int Rsrcrate::getRsrcId() { return rsrc_id; }
void Rsrcrate::setRsrcId(int value)
{
	if (value > 0)
	{
		rsrc_id = value;
		rsrc_id_str = std::to_string(value);
	}
}
int Rsrcrate::getMaxQtyPerHr() { return max_qty_per_hr; }
void Rsrcrate::setMaxQtyPerHr(int value)
{
	if (value > 0)
	{
		max_qty_per_hr = value;
		max_qty_per_hr_str = std::to_string(value);
	}
}
int Rsrcrate::getCostPerQty() { return cost_per_qty; }
void Rsrcrate::setCostPerQty(int value)
{
	if (value > 0)
	{
		cost_per_qty = value;
		cost_per_qty_str = std::to_string(value);
	}
}
int Rsrcrate::getCostPerQty2() { return cost_per_qty2; }
void Rsrcrate::setCostPerQty2(int value)
{
	if (value > 0)
	{
		cost_per_qty2 = value;
		cost_per_qty2_str = std::to_string(value);
	}
}
int Rsrcrate::getCostPerQty3() { return cost_per_qty3; }
void Rsrcrate::setCostPerQty3(int value)
{
	if (value > 0)
	{
		cost_per_qty3 = value;
		cost_per_qty3_str = std::to_string(value);
	}
}
int Rsrcrate::getCostPerQty4() { return cost_per_qty4; }
void Rsrcrate::setCostPerQty4(int value)
{
	if (value > 0)
	{
		cost_per_qty4 = value;
		cost_per_qty4_str = std::to_string(value);
	}
}
int Rsrcrate::getCostPerQty5() { return cost_per_qty5; }
void Rsrcrate::setCostPerQty5(int value)
{
	if (value > 0)
	{
		cost_per_qty5 = value;
		cost_per_qty5_str = std::to_string(value);
	}
}
int Rsrcrate::getShiftPeriodId() { return shift_period_id; }
void Rsrcrate::setShiftPeriodId(int value)
{
	if (value > 0)
	{
		shift_period_id = value;
		shift_period_id_str = std::to_string(value);
	}
}
Date Rsrcrate::getStartDate() { return start_date; }
void Rsrcrate::setStartDate(Date value) { start_date = value; }