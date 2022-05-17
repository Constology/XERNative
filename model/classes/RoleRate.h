#if !defined(XERPARSER_ROLERATE_H)
#define XERPARSER_ROLERATE_H
#include <string>
#include <vector>
class Reader;
class RoleRate
{
public:
    RoleRate(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj);
    int role_rate_id;
    int role_id;
    double cost_per_qty;
    double cost_per_qty2;
    double cost_per_qty3;
    double cost_per_qty4;
    double cost_per_qty5;

    std::string get_tsv();

private:
    std::string tsv;
    std::string role_rate_id_str;
    std::string role_id_str;
    std::string cost_per_qty_str;
    std::string cost_per_qty2_str;
    std::string cost_per_qty3_str;
    std::string cost_per_qty4_str;
    std::string cost_per_qty5_str;
    void update_tsv();
    Reader *reader;
};

#endif // XERPARSER_ROLERATE_H
