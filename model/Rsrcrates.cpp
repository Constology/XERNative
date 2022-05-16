//
// Created by sorat on 12/05/2022.
//

#include "Rsrcrates.h"

void Rsrcrates::add(Rsrcrate &rsrcrate) { rsrcrates.emplace_back(rsrcrate); }

Rsrcrate Rsrcrates::findById(int id)
{
	for (auto &rsrcrate : rsrcrates)
	{
		if (rsrcrate.rsrc_id == id)
		{
			return rsrcrate;
		}
	}
	printf("Rsrcrate not found");
	exit(EXIT_FAILURE);
}

std::vector<Rsrcrate> Rsrcrates::getAll()
{
	return rsrcrates;
}

std::string Rsrcrates::get_tsv()
{
	std::string tsv;
	tsv.append("%T\tRSRCRATE\n");
	tsv.append("%F\trsrc_rate\trsrc_id\tmax_qty_per_hr\tcost_per_qty\tcost_per_qty2\t"
			   "cost_per_qty3\tcost_per_qty4\tcost_per_qty5\tshift_period_id\tstart_date\n");
	for (auto &rsrcrate : rsrcrates)
	{
		tsv.append(rsrcrate.tsv);
	}
	return tsv;
}

std::vector<Rsrcrate> Rsrcrates::getByRsrcId(int id)
{
	std::vector<Rsrcrate> toReturn;
	for (Rsrcrate rr : rsrcrates)
	{
		if (rr.rsrc_id == id)
		{
			toReturn.emplace_back(rr);
		}
	}
	return toReturn;
}
