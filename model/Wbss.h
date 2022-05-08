#ifndef XERPARSER_WBSS_H
#define XERPARSER_WBSS_H

#include <vector>

#include "classes/Wbs.h"

class Wbss{
public:
		void add(const Wbs& wbs);

		Wbs findById(int id);
        std::vector<Wbs> getByProject(int projectId);
        std::vector<Wbs> getChildren(int id);
        Wbs getParent(int id);

    private:
        std::vector<Wbs> wbss;
};


#endif //EXRPARSER_ACCOUNTS_H