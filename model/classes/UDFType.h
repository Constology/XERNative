#ifndef XERPARSER_UDFType_H
#define XERPARSER_UDFType_H

#include <vector>
#include <string>
#include "../Udfs.h"

class Reader;

class UDFType
{
public:
    int udf_type_id;
    std::string table_name;
    std::string udf_type_name;
    std::string udf_type_label;
    std::string logical_data_type;
    std::string super_flag;
    std::string indicator_expression;
    std::string summary_indicator_expression;

    UDFType(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj);
    std::string get_tsv();
    std::vector<Udf> getUdfValues();

private:
    std::string tsv;
    Reader *reader;
};

#endif // XERPARSER_UDFType_H