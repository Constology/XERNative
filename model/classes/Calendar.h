

#ifndef EXRPARSER_CALENDAR_H
#define EXRPARSER_CALENDAR_H

#include <iostream>
#include <vector>
class Reader;

class Calendar
{
public:
    int getClndrId();
    void setClndrId(int value);
    float getDayHrCnt();
    void setDayHrCnt(float value);
    float getMonthHrCnt();
    void setMonthHrCnt(float value);
    float getYearHrCnt();
    void setYearHrCnt(float value);
    int getBaseClndrId();
    void setBaseClndrId(int);
    std::string getClndrData();
    void setClndrData(std::string value);
    std::string getClndrName();
    void setClndrName(std::string value);
    std::string getClndrType();
    void setClndrType(std::string value);
    std::string getDefaultFlag();
    void setDefaultFlag(std::string value);
    std::string getLastChangeDate();
    void setLastChangeDate(std::string value);
    int getProjId();
    void setProjId(int value);

    std::string get_tsv();

    Calendar(const std::vector<std::string> header,
             const std::vector<std::string> params,
             Reader *readerObj);

private:
    int clndr_id;
    float day_hr_cnt;
    float week_hr_cnt;
    float month_hr_cnt;
    float year_hr_cnt;
    int base_clndr_id;
    std::string clndr_data;
    std::string clndr_name;
    std::string clndr_type;
    std::string default_flag;
    std::string last_chng_date;
    int proj_id;

    std::string clndr_id_str;
    std::string day_hr_cnt_str;
    std::string week_hr_cnt_str;
    std::string month_hr_cnt_str;
    std::string year_hr_cnt_str;
    std::string base_clndr_id_str;
    std::string proj_id_str;
    std::string tsv;
    void update_tsv();
    Reader *reader;
};

#endif // EXRPARSER_CALENDAR_H
