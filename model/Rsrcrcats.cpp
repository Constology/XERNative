

#include "Rsrcrcats.h"

void Rsrcrcats::add(Rsrcrcat &rsrcrcat) { rsrcrcats.emplace_back(rsrcrcat); }

Rsrcrcat Rsrcrcats::findById(int id)
{
	for (auto &rsrcrcat : rsrcrcats)
	{
		if (rsrcrcat.getRsrcId() == id)
		{
			return rsrcrcat;
		}
	}
	printf("Rsrcrcat not found");
	exit(EXIT_FAILURE);
}

std::vector<Rsrcrcat> Rsrcrcats::getAll()
{
	return rsrcrcats;
}

std::string Rsrcrcats::get_tsv()
{
	std::string tsv;
	tsv.append("%T\tRSRCRCAT\n");
	tsv.append("%F\trsrc_id\trsrc_catg_type_id\trsrc_catg_id\n");
	for (auto &rsrcrcat : rsrcrcats)
	{
		tsv.append(rsrcrcat.get_tsv());
	}
	return tsv;
}
