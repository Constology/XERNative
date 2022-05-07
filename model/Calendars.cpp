//
// Created by sorat on 07/05/2022.
//

#include "Calendars.h"

void Calendars::add(const Calendar& calendar){ calendars.emplace_back(calendar); }

Calendar Calendars::findById(int id){
	for(auto & calendar : calendars){
		if(calendar.clndr_id == id){
			return calendar;
		}
	}
	printf("Account not found");
	exit(EXIT_FAILURE);
}
