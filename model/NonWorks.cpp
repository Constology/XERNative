//
// Created by Taraxtix on 10/05/2022.
//

#include "NonWorks.h"

void NonWorks::add(const NonWork &nonWork) { nonWorks.emplace_back(nonWork); }

NonWork NonWorks::findById(int id) {
    for (auto &nonWork : nonWorks) {
        if (nonWork.nonwork_type_id == id) {
            return nonWork;
        }
    }
    printf("NonWork not found");
    exit(EXIT_FAILURE);
}

std::vector<NonWork> NonWorks::getAll() { return nonWorks; }

std::string NonWorks::get_tsv() const {
    std::string tsv;
    tsv.append("%T\tNONWORK\n");
    tsv.append("%F\tnonwork_type_id\tseq_num\tnonwork_code\tnonwork_type\n");
    for (auto &nonWork : nonWorks) {
        tsv.append(nonWork.get_tsv());
    }
    return tsv;
}
