#ifndef DATE_H_
#define DATE_H_

#include <string>

class Date{
    public:
        int year;
        int month;
        int day;
        int hour;
        int min;
        Date();
        Date(std::string strDate);
        Date(int day, int month, int year, int hour, int min);
        void parse(std::string strDate);
        std::string to_string();
};

#endif