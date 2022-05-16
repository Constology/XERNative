//
// Created by sorat on 12/05/2022.
//

#ifndef XERPARSER_RSRCS_H
#define XERPARSER_RSRCS_H

#include "classes/Rsrc.h"

#include <vector>

class Rsrcs
{
public:
    void add(Rsrc &rsrc);

    Rsrc findById(int id);
    std::vector<Rsrc> getAll();
    std::vector<Rsrc> getChildren(int id);

    std::string get_tsv();

private:
    std::vector<Rsrc> rsrcs;
};

#endif // XERPARSER_RSRCS_H
