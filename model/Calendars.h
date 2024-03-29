//
// Created by Taraxtix on 07/05/2022.
//

#ifndef EXRPARSER_CALENDARS_H
#define EXRPARSER_CALENDARS_H

#include <vector>

#include "classes/Calendar.h"

class Calendars
{
public:
	void add(Calendar &account);

	Calendar findById(int id);
	std::vector<Calendar> getAll();

	std::string get_tsv();

private:
	std::vector<Calendar> calendars;
};

#endif // EXRPARSER_CALENDARS_H
