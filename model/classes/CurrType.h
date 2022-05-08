#if !defined(XERPARSER_CURRTYPE_H)
#define XERPARSER_CURRTYPE_H
#include <string>
#include <vector>


#include <string>
#include <vector>


class CurrType {
    public:
        CurrType(std::vector<std::string> params);
        double base_exch_rate;
        int curr_id;
        std::string curr_short_name;
        std::string curr_symbol;
        std::string curr_type;
        int decimal_digit_cnt;
        std::string decimal_symbol;
        std::string digit_group_symbol;
        int group_digit_cnt;
        std::string neg_curr_fmt_type;
        std::string pos_curr_fmt_type;
        void printCurrency();
        std::string get_tsv();

    private:
        std::string tsv;
};

#endif // XERPARSER_CURRTYPE_H
