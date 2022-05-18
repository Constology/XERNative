#ifndef XERPARSER_UDFType_H
#define XERPARSER_UDFType_H

#include <vector>
#include <string>
#include "../Udfs.h"

class Reader;

class UDFType
{
public:
    int getUdfTypeId();
    void setUdfTypeId(int value);
    std::string getTableName();
    void setTableName(std::string value);
    std::string getUdfTypeName();
    void setUdfTypeName(std::string value);
    std::string getUdfTypeLabel();
    void setUdfTypeLabel(std::string value);
    std::string getLogicalDataType();
    void setLogicalDataType(std::string value);
    std::string getSuperFlag();
    void setSuperFlag(std::string value);
    std::string getIndicatorExpression();
    void setIndicatorExpression(std::string value);
    std::string getSummaryIndicatorExpression();
    void setSummaryIndicatorExpression(std::string value);

    UDFType(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj);
    std::string get_tsv();
    std::vector<Udf> getUdfValues();

private:
    int udf_type_id;
    std::string table_name;
    std::string udf_type_name;
    std::string udf_type_label;
    std::string logical_data_type;
    std::string super_flag;
    std::string indicator_expression;
    std::string summary_indicator_expression;

    std::string tsv;
    Reader *reader;
    void update_tsv();
    std::string udf_type_id_str;
};

#endif // XERPARSER_UDFType_H