
#include "Rsrc.h"

#include "../../Reader.h"

Rsrc::Rsrc(const std::vector<std::string> header,
           const std::vector<std::string> params,
           Reader *readerObj)
{
    tsv = "";
    for (int i = 0; i < params.size(); i++)
    {
        if (header.at(i) == "rsrc_id")
        {
            if (!params.at(i).empty())
            {
                rsrc_id = stoi(params.at(i));
                rsrc_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "parent_rsrc_id")
        {
            if (!params.at(i).empty())
            {
                parent_rsrc_id = stoi(params.at(i));
                parent_rsrc_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "clndr_id")
        {
            if (!params.at(i).empty())
            {
                clndr_id = stoi(params.at(i));
                clndr_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "role_id")
        {
            if (!params.at(i).empty())
            {
                role_id = stoi(params.at(i));
                role_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "shift_id")
        {
            if (!params.at(i).empty())
            {
                shift_id = stoi(params.at(i));
                shift_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "user_id")
        {
            if (!params.at(i).empty())
            {
                user_id = stoi(params.at(i));
                user_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "pobs_id")
        {
            if (!params.at(i).empty())
            {
                pobs_id = stoi(params.at(i));
                pobs_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "rsrc_seq_num")
        {
            if (!params.at(i).empty())
            {
                rsrc_seq_num = stoi(params.at(i));
                rsrc_seq_num_str = params.at(i);
            }
        }
        else if (header.at(i) == "curr_id")
        {
            if (!params.at(i).empty())
            {
                curr_id = stoi(params.at(i));
                curr_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "unit_id")
        {
            if (!params.at(i).empty())
            {
                unit_id = stoi(params.at(i));
                unit_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "location_id")
        {
            if (!params.at(i).empty())
            {
                location_id = stoi(params.at(i));
                location_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "guid")
        {
            guid = params.at(i);
        }
        else if (header.at(i) == "email_addr")
        {
            email_addr = params.at(i);
        }
        else if (header.at(i) == "employee_code")
        {
            employee_code = params.at(i);
        }
        else if (header.at(i) == "office_phone")
        {
            office_phone = params.at(i);
        }
        else if (header.at(i) == "rsrc_name")
        {
            rsrc_name = params.at(i);
        }
        else if (header.at(i) == "rsrc_short_name")
        {
            rsrc_short_name = params.at(i);
        }
        else if (header.at(i) == "rsrc_title_name")
        {
            rsrc_title_name = params.at(i);
        }
        else if (header.at(i) == "def_qty_per_hr")
        {
            def_qty_per_hr = params.at(i);
        }
        else if (header.at(i) == "cost_qty_type")
        {
            cost_qty_type = params.at(i);
        }
        else if (header.at(i) == "ot_factor")
        {
            ot_factor = params.at(i);
        }
        else if (header.at(i) == "active_flag")
        {
            active_flag = params.at(i);
        }
        else if (header.at(i) == "auto_compute_act_flag")
        {
            auto_compute_act_flag = params.at(i);
        }
        else if (header.at(i) == "ot_flag")
        {
            ot_flag = params.at(i);
        }
        else if (header.at(i) == "rsrc_type")
        {
            rsrc_type = params.at(i);
        }
        else if (header.at(i) == "rsrc_notes")
        {
            rsrc_notes = params.at(i);
        }
        else if (header.at(i) == "load_tasks_flag")
        {
            load_tasks_flag = params.at(i);
        }
        else if (header.at(i) == "level_flag")
        {
            level_flag = params.at(i);
        }
        else if (header.at(i) == "last_checksum")
        {
            last_checksum = params.at(i);
        }
    }
    reader = readerObj;
    update_tsv();
}

void Rsrc::update_tsv()
{
    tsv = "%R\t";
    tsv.append(std::to_string(rsrc_id))
        .append("\t")
        .append(std::to_string(parent_rsrc_id))
        .append("\t")
        .append(std::to_string(clndr_id))
        .append("\t")
        .append(std::to_string(role_id))
        .append("\t")
        .append(std::to_string(shift_id))
        .append("\t")
        .append(std::to_string(user_id))
        .append("\t")
        .append(std::to_string(pobs_id))
        .append("\t")
        .append(std::to_string(rsrc_seq_num))
        .append("\t")
        .append(std::to_string(curr_id))
        .append("\t")
        .append(std::to_string(unit_id))
        .append("\t")
        .append(std::to_string(location_id))
        .append("\t")
        .append(guid)
        .append("\t")
        .append(email_addr)
        .append("\t")
        .append(employee_code)
        .append("\t")
        .append(office_phone)
        .append("\t")
        .append(other_phone)
        .append("\t")
        .append(rsrc_name)
        .append("\t")
        .append(rsrc_short_name)
        .append("\t")
        .append(rsrc_title_name)
        .append("\t")
        .append(def_qty_per_hr)
        .append("\t")
        .append(cost_qty_type)
        .append("\t")
        .append(ot_factor)
        .append("\t")
        .append(active_flag)
        .append("\t")
        .append(auto_compute_act_flag)
        .append("\t")
        .append(def_cost_qty_link_flag)
        .append("\t")
        .append(ot_flag)
        .append("\t")
        .append(rsrc_type)
        .append("\t")
        .append(rsrc_notes)
        .append("\t")
        .append(load_tasks_flag)
        .append("\t")
        .append(level_flag)
        .append("\t")
        .append(last_checksum)
        .append("\n");
}

Rsrc *Rsrc::getParent()
{
    Rsrc *rsr = reader->rsrcs.findById(parent_rsrc_id);
    return rsr;
}

std::vector<Rsrcrate> Rsrc::getRsrcRate()
{
    std::vector<Rsrcrate> toReturn;
    toReturn = reader->rsrcrates.getAll();
    return toReturn;
}

std::vector<Rsrc> Rsrc::getChildren() { return reader->rsrcs.getChildren(rsrc_id); }

std::string Rsrc::get_tsv()
{
    update_tsv();
    return tsv;
}

int Rsrc::getRsrcId() { return rsrc_id; }
void Rsrc::setRsrcId(int value)
{
    if (value > 0)
    {
        rsrc_id = value;
        rsrc_id_str = std::to_string(value);
    }
}
int Rsrc::getParentRsrcId() { return parent_rsrc_id; }
void Rsrc::setParentRsrcId(int value)
{
    if (value > 0)
    {
        parent_rsrc_id = value;
        parent_rsrc_id_str = std::to_string(value);
    }
}
int Rsrc::getClndrId() { return clndr_id; }
void Rsrc::setClndrId(int value)
{
    if (value > 0)
    {
        clndr_id = value;
        clndr_id_str = std::to_string(value);
    }
}
int Rsrc::getRoleId() { return role_id; }
void Rsrc::setRoleId(int value)
{
    if (value > 0)
    {
        role_id = value;
        role_id_str = std::to_string(value);
    }
}
int Rsrc::getShiftId() { return shift_id; }
void Rsrc::setShiftId(int value)
{
    if (value > 0)
    {
        shift_id = value;
        shift_id_str = std::to_string(value);
    }
}
int Rsrc::getUserId() { return user_id; }
void Rsrc::setUserId(int value)
{
    if (value > 0)
    {
        user_id = value;
        user_id_str = std::to_string(value);
    }
}
int Rsrc::getPobsId() { return pobs_id; }
void Rsrc::setPobsId(int value)
{
    if (value > 0)
    {
        pobs_id = value;
        pobs_id_str = std::to_string(value);
    }
}
int Rsrc::getRsrcSeqNum() { return rsrc_seq_num; }
void Rsrc::setRsrcSeqNum(int value)
{
    if (value > 0)
    {
        rsrc_seq_num = value;
        rsrc_seq_num_str = std::to_string(value);
    }
}
int Rsrc::getCurrId() { return curr_id; }
void Rsrc::setCurrId(int value)
{
    if (value > 0)
    {
        curr_id = value;
        curr_id_str = std::to_string(value);
    }
}
int Rsrc::getUnitId() { return unit_id; }
void Rsrc::setUnitId(int value)
{
    if (value > 0)
    {
        unit_id = value;
        unit_id_str = std::to_string(value);
    }
}
int Rsrc::getLocationId() { return location_id; }
void Rsrc::setLocationId(int value)
{
    if (value > 0)
    {
        location_id = value;
        location_id_str = std::to_string(value);
    }
}
std::string Rsrc::getGuid() { return guid; }
void Rsrc::setGuid(std::string value)
{
    if (!value.empty())
    {
        guid = value;
    }
}
std::string Rsrc::getEmailAddr() { return email_addr; }
void Rsrc::setEmailAddr(std::string value)
{
    if (!value.empty())
    {
        email_addr = value;
    }
}
std::string Rsrc::getEmployeeCode() { return employee_code; }
void Rsrc::setEmployeeCode(std::string value)
{
    if (!value.empty())
    {
        employee_code = value;
    }
}
std::string Rsrc::getOfficePhone() { return office_phone; }
void Rsrc::setOfficePhone(std::string value)
{
    if (!value.empty())
    {
        office_phone = value;
    }
}
std::string Rsrc::getOtherPhone() { return other_phone; }
void Rsrc::setOtherPhone(std::string value)
{
    if (!value.empty())
    {
        other_phone = value;
    }
}
std::string Rsrc::getRsrcName() { return rsrc_name; }
void Rsrc::setRsrcName(std::string value)
{
    if (!value.empty())
    {
        rsrc_name = value;
    }
}
std::string Rsrc::getRsrcShortName() { return rsrc_short_name; }
void Rsrc::setRsrcShortName(std::string value)
{
    if (!value.empty())
    {
        rsrc_short_name = value;
    }
}
std::string Rsrc::getRsrcTitleName() { return rsrc_title_name; }
void Rsrc::setRsrcTitleName(std::string value)
{
    if (!value.empty())
    {
        rsrc_title_name = value;
    }
}
std::string Rsrc::getDefQtyPerHr() { return def_qty_per_hr; }
void Rsrc::setDefQtyPerHr(std::string value)
{
    if (!value.empty())
    {
        def_qty_per_hr = value;
    }
}
std::string Rsrc::getCostQtyType() { return cost_qty_type; }
void Rsrc::setCostQtyType(std::string value)
{
    if (!value.empty())
    {
        cost_qty_type = value;
    }
}
std::string Rsrc::getOtFactor() { return ot_factor; }
void Rsrc::setOtFactor(std::string value)
{
    if (!value.empty())
    {
        ot_factor = value;
    }
}
std::string Rsrc::getActiveFlag() { return active_flag; }
void Rsrc::setActiveFlag(std::string value)
{
    if (!value.empty())
    {
        active_flag = value;
    }
}
std::string Rsrc::getAutoComputeActFlag() { return auto_compute_act_flag; }
void Rsrc::setAutoComputeActFlag(std::string value)
{
    if (!value.empty())
    {
        auto_compute_act_flag = value;
    }
}
std::string Rsrc::getDefCostQtyLinkFlag() { return def_cost_qty_link_flag; }
void Rsrc::setDefCostQtyLinkFlag(std::string value)
{
    if (!value.empty())
    {
        def_cost_qty_link_flag = value;
    }
}
std::string Rsrc::getOtFlag() { return ot_flag; }
void Rsrc::setOtFlag(std::string value)
{
    if (!value.empty())
    {
        ot_flag = value;
    }
}
std::string Rsrc::getRsrcType() { return rsrc_type; }
void Rsrc::setRsrcType(std::string value)
{
    if (!value.empty())
    {
        rsrc_type = value;
    }
}
std::string Rsrc::getRsrcNotes() { return rsrc_notes; }
void Rsrc::setRsrcNotes(std::string value)
{
    if (!value.empty())
    {
        rsrc_notes = value;
    }
}
std::string Rsrc::getLoadTasksFlag() { return load_tasks_flag; }
void Rsrc::setLoadTasksFlag(std::string value)
{
    if (!value.empty())
    {
        load_tasks_flag = value;
    }
}
std::string Rsrc::getLevelFlag() { return level_flag; }
void Rsrc::setLevelFlag(std::string value)
{
    if (!value.empty())
    {
        level_flag = value;
    }
}
std::string Rsrc::getLastChecksum() { return last_checksum; }
void Rsrc::setLastChecksum(std::string value)
{
    if (!value.empty())
    {
        last_checksum = value;
    }
}
