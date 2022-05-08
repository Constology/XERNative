#ifndef XERPARSER_ROLE_H
#define XERPARSER_ROLE_H

#include <vector>
#include<string>


class Role
{
public:
    int role_id;
    int parent_role_id;
    int seq_num;
    std::string role_name;
    std::string role_short_name;
    int pobs_id;
    std::string def_cost_qty_link_flag;
    std::string cost_qty_type;
    std::string role_descr;
    std::string last_checksum;

    Role(const std::string *header, const std::string *params);
    std::string get_tsv();

private:
    std::string tsv;
};

#endif //XERPARSER_ROLE_H