#if !defined(XERPARSER_ROLERATE_H)
#define XERPARSER_ROLERATE_H
#include <string>
#include <vector>

class RoleRate
{
public:
    RoleRate(const std::vector<std::string> header, const std::vector<std::string> params);
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
};

#endif // XERPARSER_ROLERATE_H
