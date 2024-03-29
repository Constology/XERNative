#include "UDFType.h"
#include "../../Reader.h"

UDFType::UDFType(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj)
{
    for (int i = 0; i < header.size(); i++)
    {
        if (header.at(i).empty())
            break;
        if (header.at(i) == "udf_type_id")
        {
            if (!params.at(i).empty())
            {
                udf_type_id = stoi(params.at(i));
                udf_type_id_str = params.at(i);
            }
        }
        else if (header.at(i) == "table_name")
        {
            table_name = params.at(i);
        }
        else if (header.at(i) == "udf_type_name")
        {
            udf_type_name = params.at(i);
        }
        else if (header.at(i) == "udf_type_label")
        {
            udf_type_label = params.at(i);
        }
        else if (header.at(i) == "logical_data_type")
        {
            logical_data_type = params.at(i);
        }
        else if (header.at(i) == "super_flag")
        {
            super_flag = params.at(i);
        }
        else if (header.at(i) == "indicator_expression")
        {
            indicator_expression = params.at(i);
        }
        else if (header.at(i) == "summary_indicator_expression")
        {
            summary_indicator_expression = params.at(i);
        }
    }
    reader = readerObj;
}

void UDFType::update_tsv()
{
    tsv = "%R\t";
    tsv
        .append(std::to_string(udf_type_id))
        .append("\t")
        .append(table_name)
        .append("\t")
        .append(udf_type_name)
        .append("\t")
        .append(udf_type_label)
        .append("\t")
        .append(logical_data_type)
        .append("\t")
        .append(super_flag)
        .append("\t")
        .append(indicator_expression)
        .append("\t")
        .append(summary_indicator_expression)
        .append("\n");
}
std::string UDFType::get_tsv()
{
    update_tsv();
    return tsv;
}

std::vector<Udf> UDFType::getUdfValues()
{
    std::vector<Udf> toReturn;
    toReturn = reader->udfs.getByTypeId(udf_type_id);
    return toReturn;
}

int UDFType::getUdfTypeId() { return udf_type_id; }
void UDFType::setUdfTypeId(int value)
{
    if (value > 0)
    {
        udf_type_id = value;
        udf_type_id_str = std::to_string(value);
    }
}
std::string UDFType::getTableName() { return table_name; }
void UDFType::setTableName(std::string value)
{
    if (!value.empty())
    {
        table_name = value;
    }
}
std::string UDFType::getUdfTypeName() { return udf_type_name; }
void UDFType::setUdfTypeName(std::string value)
{
    if (!value.empty())
    {
        udf_type_name = value;
    }
}
std::string UDFType::getUdfTypeLabel() { return udf_type_label; }
void UDFType::setUdfTypeLabel(std::string value)
{
    if (!value.empty())
    {
        udf_type_label = value;
    }
}
std::string UDFType::getLogicalDataType() { return logical_data_type; }
void UDFType::setLogicalDataType(std::string value)
{
    if (!value.empty())
    {
        logical_data_type = value;
    }
}
std::string UDFType::getSuperFlag() { return super_flag; }
void UDFType::setSuperFlag(std::string value)
{
    if (!value.empty())
    {
        super_flag = value;
    }
}
std::string UDFType::getIndicatorExpression() { return indicator_expression; }
void UDFType::setIndicatorExpression(std::string value)
{
    if (!value.empty())
    {
        indicator_expression = value;
    }
}
std::string UDFType::getSummaryIndicatorExpression() { return summary_indicator_expression; }
void UDFType::setSummaryIndicatorExpression(std::string value)
{
    if (!value.empty())
    {
        summary_indicator_expression = value;
    }
}