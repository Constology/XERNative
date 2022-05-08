#ifndef XERPARSER_UDFType_H
#define XERPARSER_UDFType_H

#include <vector>
#include<string>


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

    UDFType(const std::string *header, const std::string *params);
    std::string get_tsv();

private:
    std::string tsv;
};

#endif //XERPARSER_UDFType_H