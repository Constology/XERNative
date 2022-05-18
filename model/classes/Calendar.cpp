

#include "Calendar.h"

#include "../../Reader.h"

Calendar::Calendar(const std::vector<std::string> header,
                   const std::vector<std::string> params,
                   Reader *readerObj)
{
    reader = readerObj;
    tsv = "";

    for (int i = 0; i < header.size(); i++)
    {
        if (header.at(i).empty())
            break;

        if (header.at(i) == "clndr_id")
        {
            if (!params.at(i).empty())
            {
                clndr_id = stoi(params.at(i));
                clndr_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "day_hr_cnt")
        {
            if (!params.at(i).empty())
            {

                day_hr_cnt = stof(params.at(i));
                day_hr_cnt_str = params.at(i);
            }
        }
        else if (header.at(i) == "week_hr_cnt")
        {
            if (!params.at(i).empty())
            {
                week_hr_cnt = stof(params.at(i));
                week_hr_cnt_str = params.at(i);
            }
        }
        else if (header.at(i) == "month_hr_cnt")
        {
            if (!params.at(i).empty())
            {
                month_hr_cnt = stof(params.at(i));
                month_hr_cnt_str = params.at(i);
            }
        }
        else if (header.at(i) == "year_hr_cnt")
        {
            if (!params.at(i).empty())
            {
                year_hr_cnt = stof(params.at(i));
                year_hr_cnt_str = params.at(i);
            }
        }
        else if (header.at(i) == "base_clndr_id")
        {
            if (!params.at(i).empty())
            {
                base_clndr_id = stoi(params.at(i));
                base_clndr_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "clndr_data")
        {
            clndr_data = params.at(i);
        }
        else if (header.at(i) == "clndr_name")
        {
            clndr_name = params.at(i);
        }
        else if (header.at(i) == "clndr_type")
        {
            clndr_type = params.at(i);
        }
        else if (header.at(i) == "default_flag")
        {
            default_flag = params.at(i);
        }
        else if (header.at(i) == "last_chng_date")
        {
            last_chng_date = params.at(i);
        }
        else if (header.at(i) == "proj_id")
        {
            if (!params.at(i).empty())
            {
                proj_id_str = params.at(i);
                proj_id = stoi(params.at(i));
            }
        }
    }
}

void Calendar::update_tsv()
{
    tsv = "%R\t";
    tsv.append(clndr_id_str)
        .append("\t")
        .append(day_hr_cnt_str)
        .append("\t")
        .append(week_hr_cnt_str)
        .append("\t")
        .append(month_hr_cnt_str)
        .append("\t")
        .append(year_hr_cnt_str)
        .append("\t")
        .append(base_clndr_id_str)
        .append("\t")
        .append(clndr_data)
        .append("\t")
        .append(clndr_name)
        .append("\t")
        .append(clndr_type)
        .append("\t")
        .append(default_flag)
        .append("\t")
        .append(last_chng_date)
        .append("\t")
        .append(proj_id_str)
        .append("\n");
}

std::string Calendar::get_tsv()
{
    update_tsv();
    return tsv;
}

int Calendar::getClndrId() { return clndr_id; }
void Calendar::setClndrId(int value)
{
    if (value > 0)
    {
        clndr_id = value;
        clndr_id_str = std::to_string(value);
    }
}

float Calendar::getDayHrCnt() { return day_hr_cnt; }
void Calendar::setDayHrCnt(float value)
{
    if (value > 0.0f)
    {
        day_hr_cnt = value;
        day_hr_cnt_str = std::to_string(value);
    }
}
float Calendar::getMonthHrCnt() { return month_hr_cnt; }
void Calendar::setMonthHrCnt(float value)
{
    if (value > 0.0f)
    {
        day_hr_cnt = value;
        day_hr_cnt_str = std::to_string(value);
    }
}
float Calendar::getYearHrCnt() { return year_hr_cnt; }
void Calendar::setYearHrCnt(float value)
{
    if (value > 0.0f)
    {
        day_hr_cnt = value;
        day_hr_cnt_str = std::to_string(value);
    }
}

int Calendar::getBaseClndrId()
{
    return base_clndr_id;
}
void Calendar::setBaseClndrId(int value)
{
    if (value > 0)
    {
        base_clndr_id = value;
    }
}
std::string Calendar::getClndrData()
{
    return clndr_data;
}
void Calendar::setClndrData(std::string value)
{
    if (!value.empty())
    {
        clndr_data = value;
    }
}
std::string Calendar::getClndrName()
{
    return clndr_name;
}
void Calendar::setClndrName(std::string value)
{
    if (!value.empty())
    {
        clndr_name = value;
    }
}
std::string Calendar::getClndrType()
{
    return clndr_type;
}
void Calendar::setClndrType(std::string value)
{
    if (!value.empty())
    {
        clndr_type = value;
    }
}
std::string Calendar::getDefaultFlag()
{
    return default_flag;
}
void Calendar::setDefaultFlag(std::string value)
{
    if (!value.empty())
    {
        default_flag = value;
    }
}
std::string Calendar::getLastChangeDate()
{
    return last_chng_date;
}
void Calendar::setLastChangeDate(std::string value)
{
    if (!value.empty())
    {
        last_chng_date = value;
    }
}
int Calendar::getProjId()
{
    return proj_id;
}

void Calendar::setProjId(int value)
{
    if (value>0)
    {
        proj_id = value;
    }
}