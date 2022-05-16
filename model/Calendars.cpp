//
// Created by Taraxtix on 07/05/2022.
//

#include "Calendars.h"

void Calendars::add(Calendar &calendar) { calendars.emplace_back(calendar); }

Calendar Calendars::findById(int id)
{
    for (auto &calendar : calendars)
    {
        if (calendar.clndr_id == id)
        {
            return calendar;
        }
    }
    printf("Account not found");
    exit(EXIT_FAILURE);
}

std::vector<Calendar> Calendars::getAll() { return calendars; }
std::string Calendars::get_tsv()
{
    std::string tsv;
    tsv.append("%T\tCALENDAR\n");
    tsv.append("%F\tclndr_id\tday_hr_cnt\tweek_hr_cnt\tmonth_hr_cnt\tyear_hr_cnt\tbase_clndr_id"
               "\tclndr_data\tclndr_name\tclndr_type\tdefault_flag\tlast_chng_date\tproj_id\n");
    for (auto &calendar : calendars)
    {
        tsv.append(calendar.get_tsv());
    }
    return tsv;
}
