
#ifndef XERPARSER_RSRCRATE_H
#define XERPARSER_RSRCRATE_H

#include <iostream>
#include "../../Date/Date.h"
#include <vector>
#include <string>
class Reader;

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

	std::string get_tsv();
	Rsrcrate(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj);

private:
	Reader *reader;
	std::string rsrc_rate_str;
	std::string rsrc_id_str;
	std::string max_qty_per_hr_str;
	std::string cost_per_qty_str;
	std::string cost_per_qty2_str;
	std::string cost_per_qty3_str;
	std::string cost_per_qty4_str;
	std::string cost_per_qty5_str;
	std::string shift_period_id_str;
	std::string start_date_str;
	void update_tsv();
	std::string tsv;
};

#endif // XERPARSER_RSRCRATE_H
