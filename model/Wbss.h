#ifndef XERPARSER_WBSS1_H
#define XERPARSER_WBSS1_H

#include <vector>

#include "classes/Wbs.h"

class Wbss
{
public:
    void add(Wbs &wbs);

    Wbs findById(int id);
    std::vector<Wbs> getByProjectId(int projectId);
    std::vector<Wbs> getChildren(int curid);
    Wbs getParent(int id);
    std::vector<Wbs> getAll();
    std::string get_tsv();

private:
    std::vector<Wbs> wbss;
};

#endif // XERPARSER_WBSS1_H
