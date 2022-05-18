
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
	int getRsrcRate();
	void setRsrcRate(int value);
	int getRsrcId();
	void setRsrcId(int value);
	int getMaxQtyPerHr();
	void setMaxQtyPerHr(int value);
	int getCostPerQty();
	void setCostPerQty(int value);
	int getCostPerQty2();
	void setCostPerQty2(int value);
	int getCostPerQty3();
	void setCostPerQty3(int value);
	int getCostPerQty4();
	void setCostPerQty4(int value);
	int getCostPerQty5();
	void setCostPerQty5(int value);
	int getShiftPeriodId();
	void setShiftPeriodId(int value);
	Date getStartDate();
	void setStartDate(Date value);

	std::string get_tsv();
	Rsrcrate(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj);

private:
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
