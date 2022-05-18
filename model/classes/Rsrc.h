#ifndef XERPARSER_RSRC_H
#define XERPARSER_RSRC_H

#include "../Rsrcrates.h"

#include <iostream>
#include <string>
#include <vector>

class Reader;

class Rsrc
{
public:
        Rsrc(const std::vector<std::string> header,
         const std::vector<std::string> params,
         Reader *readerObj);
    Rsrc *getParent();
    std::vector<Rsrc> getChildren();

    int getRsrcId();
    void setRsrcId(int value);
    int getParentRsrcId();
    void setParentRsrcId(int value);
    int getClndrId();
    void setClndrId(int value);
    int getRoleId();
    void setRoleId(int value);
    int getShiftId();
    void setShiftId(int value);
    int getUserId();
    void setUserId(int value);
    int getPobsId();
    void setPobsId(int value);
    int getRsrcSeqNum();
    void setRsrcSeqNum(int value);
    int getCurrId();
    void setCurrId(int value);
    int getUnitId();
    void setUnitId(int value);
    int getLocationId();
    void setLocationId(int value);
    std::string getGuid();
    void setGuid(std::string value);
    std::string getEmailAddr();
    void setEmailAddr(std::string value);
    std::string getEmployeeCode();
    void setEmployeeCode(std::string value);
    std::string getOfficePhone();
    void setOfficePhone(std::string value);
    std::string getOtherPhone();
    void setOtherPhone(std::string value);
    std::string getRsrcName();
    void setRsrcName(std::string value);
    std::string getRsrcShortName();
    void setRsrcShortName(std::string value);
    std::string getRsrcTitleName();
    void setRsrcTitleName(std::string value);
    std::string getDefQtyPerHr();
    void setDefQtyPerHr(std::string value);
    std::string getCostQtyType();
    void setCostQtyType(std::string value);
    std::string getOtFactor();
    void setOtFactor(std::string value);
    std::string getActiveFlag();
    void setActiveFlag(std::string value);
    std::string getAutoComputeActFlag();
    void setAutoComputeActFlag(std::string value);
    std::string getDefCostQtyLinkFlag();
    void setDefCostQtyLinkFlag(std::string value);
    std::string getOtFlag();
    void setOtFlag(std::string value);
    std::string getRsrcType();
    void setRsrcType(std::string value);
    std::string getRsrcNotes();
    void setRsrcNotes(std::string value);
    std::string getLoadTasksFlag();
    void setLoadTasksFlag(std::string value);
    std::string getLevelFlag();
    void setLevelFlag(std::string value);
    std::string getLastChecksum();
    void setLastChecksum(std::string value);

    std::vector<Rsrcrate> getRsrcRate();
    std::string get_tsv();

private:
    int rsrc_id;
    int parent_rsrc_id;
    int clndr_id;
    int role_id;
    int shift_id;
    int user_id;
    int pobs_id;
    int rsrc_seq_num;
    int curr_id;
    int unit_id;
    int location_id;
    std::string guid;
    std::string email_addr;
    std::string employee_code;
    std::string office_phone;
    std::string other_phone;
    std::string rsrc_name;
    std::string rsrc_short_name;
    std::string rsrc_title_name;
    std::string def_qty_per_hr;
    std::string cost_qty_type;
    std::string ot_factor;
    std::string active_flag;
    std::string auto_compute_act_flag;
    std::string def_cost_qty_link_flag;
    std::string ot_flag;
    std::string rsrc_type;
    std::string rsrc_notes;
    std::string load_tasks_flag;
    std::string level_flag;
    std::string last_checksum;
    

    Reader *reader;
    std::string tsv;
    std::string rsrc_id_str;
    std::string parent_rsrc_id_str;
    std::string clndr_id_str;
    std::string role_id_str;
    std::string shift_id_str;
    std::string user_id_str;
    std::string pobs_id_str;
    std::string rsrc_seq_num_str;
    std::string curr_id_str;
    std::string unit_id_str;
    std::string location_id_str;
    void update_tsv();
};

#endif // XERPARSER_RSRC_H
