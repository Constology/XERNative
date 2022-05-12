//
// Created by sorat on 12/05/2022.
//

#ifndef XERPARSER_TASKACTVS_H
#define XERPARSER_TASKACTVS_H

#include <vector>

#include "classes/Taskactv.h"

class Taskactvs{
public:
		void add(const Taskactv& taskactv);

		Taskactv findById(int id);
		std::vector<Taskactv> getAll();


		std::string get_tsv() const;


private:
		std::vector<Taskactv> taskactvs;
};


#endif //XERPARSER_TASKACTVS_H
