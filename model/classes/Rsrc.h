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
    std::vector<Rsrcrate> getRsrcRate();
    std::string get_tsv();
    Rsrc(const std::vector<std::string> header,
         const std::vector<std::string> params,
         Reader *readerObj);
    Rsrc *getParent();
    std::vector<Rsrc> getChildren();

private:
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
