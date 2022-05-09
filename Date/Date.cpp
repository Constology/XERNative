#include "Date.h"
#include <ctime>
#include<iostream>

Date::Date(){
    
}

Date::Date(std::string strDate){
    struct tm timeinfo;
    if (!strptime(strDate.c_str(), "%Y-%m-%d %H:%M", &timeinfo))
        std::cout << "Error."<<std::endl;
    day = timeinfo.tm_mday;
    month = timeinfo.tm_mon + 1;
    year = timeinfo.tm_year + 1900;
    hour = timeinfo.tm_hour;
    min = timeinfo.tm_min;
}

void Date::parse(std::string strDate){
    struct tm timeinfo;
    if (!strptime(strDate.c_str(), "%Y-%m-%d %H:%M", &timeinfo))
        std::cout << "Error."<<std::endl;
    day = timeinfo.tm_mday;
    month = timeinfo.tm_mon + 1;
    year = timeinfo.tm_year + 1900;
    hour = timeinfo.tm_hour;
    min = timeinfo.tm_min;
}

std::string formatStr(int val){
    if(val<10){
        return ("0" + std::to_string(val));
    }
    return std::to_string(val);
}

std::string Date::to_string(){
    std::string dateStr = "";
    std::string strDay = formatStr(day);
    std::string strMonth = formatStr(month);
    std::string strHour = formatStr(hour);
    std::string strMin = formatStr(min);
    

    dateStr.append(std::to_string(year)).append("-")
            .append(strMonth).append("-")
            .append(strDay).append(" ")
            .append(strHour).append(":")
            .append(strMin);
    return dateStr;


}