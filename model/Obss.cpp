//
// Created by sorat on 10/05/2022.
//

#include "Obss.h"

void Obss::add(Obs &obs) { obss.emplace_back(obs); }

Obs Obss::findById(int id)
{
    for (auto &obs : obss)
    {
        if (obs.obs_id == id)
        {
            return obs;
        }
    }
    printf("Account not found");
    exit(EXIT_FAILURE);
}

std::vector<Obs> Obss::getAll() { return obss; }

std::string Obss::get_tsv()
{
    std::string tsv;
    tsv.append("%T\tOBS\n");
    tsv.append("%F\tobs_id\tparent_obs_id\tguid\tseq_num\tobs_name\tobs_descr\n");
    for (auto &obs : obss)
    {
        tsv.append(obs.get_tsv());
    }
    return tsv;
}
