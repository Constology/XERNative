#ifndef XERPARSER_WBSS_H
#define XERPARSER_WBSS_H

#include <vector>

#include "classes/wbs.h"

class WBSs{
public:
		void add(const WBS& wbs);

		WBS findById(int id);
        std::vector<WBS> getByProject(int projectId);
        std::vector<WBS> getChilds(int id);
        WBS getParent(int id);
        std::vector<WBS> getAll();

    private:
        std::vector<WBS> wbss;
};


#endif //EXRPARSER_ACCOUNTS_H