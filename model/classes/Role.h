#ifndef XERPARSER_ROLE_H
#define XERPARSER_ROLE_H

#include "../RoleRates.h"

#include <string>
#include <vector>
class Reader;

class Role {
public:
    Role(Reader *reader);

    int getRoleId();
    void setRoleId(int value);
    int getParentRoleId();
    void setParentRoleId(int value);
    int getSeqNum();
    void setSeqNum(int value);
    std::string getRoleName();
    void setRoleName(std::string value);
    std::string getRoleShortName();
    void setRoleShortName(std::string value);
    int getPobsId();
    void setPobsId(int value);
    std::string getDefCostQtyLinkFlag();
    void setDefCostQtyLinkFlag(std::string value);
    std::string getCostQtyType();
    void setCostQtyType(std::string value);
    std::string getRoleDescr();
    void setRoleDescr(std::string value);
    std::string getLastChecksum();
    void setLastChecksum(std::string value);

    Role( std::vector<std::string> header,
          std::vector<std::string> params,
         Reader *reader);
    std::string get_tsv();
    std::vector<RoleRate> getRoleRate();

private:
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

    std::string tsv;
    RoleRates roleRates;
    Reader *reader;
    std::string role_id_str;
    std::string parent_role_id_str;
    std::string seq_num_str;
    std::string pobs_id_str;
    void update_tsv();
};

#endif // XERPARSER_ROLE_H