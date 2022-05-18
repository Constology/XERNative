#include "Account.h"

#include "../../Reader.h"

Account::Account(std::vector<std::string> header,
                 std::vector<std::string> params,
                 Reader *readerObj)
{

    tsv = "";
    reader = readerObj;
    for (int i = 0; i < header.size(); i++)
    {
        if (header.at(i).empty())
            break;

        if (header.at(i) == "acct_id")
        {
            if (!params.at(i).empty())
            {
                acct_id = stoi(params.at(i));
                acct_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "actv_code_type_id")
        {
            if (!params.at(i).empty())
            {
                acct_seq_num = stoi(params.at(i));
                acct_seq_num_str = params.at(i);
            }
        }
        else if (header.at(i) == "parent_acct_id")
        {
            if (!params.at(i).empty())
            {
                parent_acct_id = stoi(params.at(i));
                parent_acct_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "acct_name")
        {
            acct_name = params.at(i);
        }
        else if (header.at(i) == "acct_descr")
        {
            acct_descr = params.at(i);
        }
        else if (header.at(i) == "acct_short_name")
        {
            acct_short_name = params.at(i);
        }
    }
    update_tsv();
}

std::string Account::update_tsv()
{
    tsv = "%R\t";
    tsv.append(acct_id_str)
        .append("\t")
        .append(acct_seq_num_str)
        .append("\t")
        .append(parent_acct_id_str)
        .append("\t")
        .append(acct_name)
        .append("\t")
        .append(acct_descr)
        .append("\t")
        .append(acct_short_name)
        .append("\n");
    return tsv;
}

std::string Account::get_tsv()
{
    update_tsv();
    return tsv;
}

int Account::getAcctId() { return acct_id; }
void Account::setAcctId(int value)
{
    if (value > 0)
    {
        acct_id = value;
        acct_id_str = std::to_string(value);
    }
}
int Account::getAcctSeqNum() { return acct_seq_num; }
void Account::setAcctSeqNum(int value)
{
    if (value > 0)
    {
        acct_seq_num = value;
        acct_seq_num_str = std::to_string(value);
    }
}

int Account::getParentAcctId() { return parent_acct_id; }
void Account::setParentAcctId(int value)
{
    if (value > 0)
    {
        parent_acct_id = value;
        parent_acct_id_str = std::to_string(value);
    }
}

std::string Account::getAcctName() { return acct_name; }
void Account::setAcctName(std::string value)
{
    if (!value.empty())
    {
        acct_name = value;
    }
}

std::string Account::getAcctDescr() { return acct_descr; }
void Account::setAcctDescr(std::string value)
{
    if (!value.empty())
    {
        acct_descr = value;
    }
}

std::string Account::getAcctShortName() { return acct_short_name; }
void Account::setAcctShortName(std::string value)
{
    if (!value.empty())
    {
        acct_short_name = value;
    }
}