//
// Created by sorat on 12/05/2022.
//

#include "Pcattypes.h"

void Pcattypes::add(Pcattype &pcattype) { pcattypes.emplace_back(pcattype); }

Pcattype Pcattypes::findById(int id) {
    for (auto &pcattype : pcattypes) {
        if (pcattype.proj_catg_type_id == id) {
            return pcattype;
        }
    }
    printf("Pcattype not found");
    exit(EXIT_FAILURE);
}

std::vector<Pcattype> Pcattypes::getAll() { return pcattypes; }

std::string Pcattypes::get_tsv() {
    std::string tsv;
    tsv.append("%T\tPCATTYPE\n");
    tsv.append(
        "%F\tproj_catg_type_id\tseq_num\tproj_catg_short_len\tproj_catg_type\texport_flag\n");
    for (auto &pcattype : pcattypes) {
        tsv.append(pcattype.get_tsv());
    }
    return tsv;
}
