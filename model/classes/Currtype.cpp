
#include "Currtype.h"

#include "../../Reader.h"

Currtype::Currtype(const std::vector<std::string> header,
                   const std::vector<std::string> params,
                   Reader *readerObj)
{
    reader = readerObj;
    for (int i = 0; i < header.size(); i++)
    {
        if (header.at(i).empty())
            break;
        if (header.at(i) == "curr_id")
        {
            if (!params.at(i).empty())
            {
                curr_id = stoi(params.at(i));
                curr_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "decimal_digit_cnt")
        {
            if (!params.at(i).empty())
            {
                decimal_digit_cnt = stoi(params.at(i));
                decimal_digit_cnt_str = params.at(i);
            }
        }
        else if (header.at(i) == "curr_symbol")
        {
            if (!params.at(i).empty())
            {
                curr_symbol = params.at(i);
            }
        }
        else if (header.at(i) == "decimal_symbol")
        {
            if (!params.at(i).empty())
            {
                decimal_symbol = params.at(i);
            }
        }
        else if (header.at(i) == "digit_group_symbol")
        {
            if (!params.at(i).empty())
            {
                digit_group_symbol = params.at(i);
            }
        }
        else if (header.at(i) == "pos_curr_fmt_type")
        {
            if (!params.at(i).empty())
            {
                pos_curr_fmt_type = params.at(i);
            }
        }
        else if (header.at(i) == "neg_curr_fmt_type")
        {
            if (!params.at(i).empty())
            {
                neg_curr_fmt_type = params.at(i);
            }
        }
        else if (header.at(i) == "curr_type")
        {
            if (!params.at(i).empty())
            {
                curr_type = params.at(i);
            }
        }
        else if (header.at(i) == "curr_short_name")
        {
            if (!params.at(i).empty())
            {
                curr_short_name = params.at(i);
            }
        }
        else if (header.at(i) == "group_digit_cnt")
        {
            if (!params.at(i).empty())
            {
                group_digit_cnt = stoi(params.at(i));
                group_digit_cnt_str = params.at(i);
            }
        }
        else if (header.at(i) == "base_exch_rate")
        {
            if (!params.at(i).empty())
            {
                base_exch_rate = stod(params.at(i));
                base_exch_rate_str = params.at(i);
            }
        }
    }
    update_tsv();
}

std::string Currtype::update_tsv()
{
    tsv = "%R\t";
    tsv.append(curr_id_str)
        .append("\t")
        .append(decimal_digit_cnt_str)
        .append("\t")
        .append(curr_symbol)
        .append("\t")
        .append(decimal_symbol)
        .append("\t")
        .append(digit_group_symbol)
        .append("\t")
        .append(pos_curr_fmt_type)
        .append("\t")
        .append(neg_curr_fmt_type)
        .append("\t")
        .append(curr_type)
        .append("\t")
        .append(curr_short_name)
        .append("\t")
        .append(group_digit_cnt_str)
        .append("\t")
        .append(base_exch_rate_str)
        .append("\n");

    return tsv;
}

std::string Currtype::get_tsv()
{
    update_tsv();
    return tsv;
}

int Currtype::getCurrId()
{
    return curr_id;
}

void Currtype::setCurrId(int value)
{
    if (value > 0)
    {
        curr_id = value;
        curr_id_str = std::to_string(value);
    }
}

int Currtype::getDecimalDigitCnt()
{
    return decimal_digit_cnt;
}

void Currtype::setDecimalDigitCnt(int value)
{
    if (value > 0)
    {
        decimal_digit_cnt = value;
        decimal_digit_cnt_str = std::to_string(value);
    }
}

float Currtype::getBaseExchRate()
{
    return base_exch_rate;
}

void Currtype::setBaseExchRate(float value)
{
    if (value > 0.0f)
    {
        base_exch_rate = value;
        base_exch_rate_str = std::to_string(value);
    }
}

std::string Currtype::getCurrShortName()
{
    return curr_short_name;
}

void Currtype::setCurrShortName(std::string value)
{
    if (!value.empty())
    {
        curr_short_name = value;
    }
}

std::string Currtype::getCurrSymbol()
{
    return curr_symbol;
}

void Currtype::setCurrSymbol(std::string value)
{
    if (!value.empty())
    {
        curr_symbol = value;
    }
}

std::string Currtype::getCurrType()
{
    return curr_type;
}

void Currtype::setCurrType(std::string value)
{
    if (!value.empty())
    {
        curr_type = value;
    }
}

std::string Currtype::getDecimalSymbol()
{
    return decimal_symbol;
}

void Currtype::setDecimalSymbol(std::string value)
{
    if (!value.empty())
    {
        decimal_symbol = value;
    }
}

std::string Currtype::getDigitGroupSymbol()
{
    return digit_group_symbol;
}

void Currtype::setDigitGroupSymbol(std::string value)
{
    if (!value.empty())
    {
        digit_group_symbol = value;
    }
}

int Currtype::getGroupDigitCnt()
{
    return group_digit_cnt;
}

void Currtype::setGroupDigitCnt(int value)
{
    if (value > 0)
    {
        group_digit_cnt = value;
    }
}

std::string Currtype::getNegFmtType()
{
    return neg_curr_fmt_type;
}

void Currtype::setNegFmtType(std::string value)
{
    if (!value.empty())
    {
        neg_curr_fmt_type = value;
    }
}
std::string Currtype::getPosCurrFmtType()
{
    return pos_curr_fmt_type;
}
void Currtype::setPosCurrFmtType(std::string value)
{
    if (!value.empty())
    {
        pos_curr_fmt_type = value;
    }
}