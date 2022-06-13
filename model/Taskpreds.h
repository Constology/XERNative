
#ifndef XERPARSER_TASKPREDS_H
#define XERPARSER_TASKPREDS_H


#include <vector>

#include "classes/Taskpred.h"

class Taskpreds{
public:
		void add( Taskpred& taskpred);

		Taskpred findById(int id);
		std::vector<Taskpred> getAll();


		std::string get_tsv() ;


private:
		std::vector<Taskpred> taskpreds;
};


#endif //XERPARSER_TASKPREDS_H
