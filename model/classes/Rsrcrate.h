//
// Created by sorat on 12/05/2022.
//

#ifndef XERPARSER_RSRCRATE_H
#define XERPARSER_RSRCRATE_H

#include <iostream>
#include "../../Date/Date.h"
#include <vector>
#include <string>

class Rsrcrate
{
public:
	int rsrc_rate;
	int rsrc_id;
	int max_qty_per_hr;
	int cost_per_qty;
	int cost_per_qty2;
	int cost_per_qty3;
	int cost_per_qty4;
	int cost_per_qty5;
	int shift_period_id;
	Date start_date;

	std::string tsv;

	Rsrcrate(const std::vector<std::string> header, const std::vector<std::string> params);
};

#endif // XERPARSER_RSRCRATE_H
