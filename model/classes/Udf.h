#ifndef XERPARSER_UDF_H
#define XERPARSER_UDF_H
#include <string>
#include <vector>

class Reader;
class Udf
{
public:
    int udf_type_id;
    int fk_id;
    int proj_id;
    std::string udf_date;
    double udf_number;
    std::string udf_text;
    int udf_code_id;

    Udf(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj);
    std::string get_tsv();

private:
    Reader *reader;
    std::string tsv;
    void update_tsv();
    std::string udf_type_id_str;
    std::string fk_id_str;
    std::string proj_id_str;
    std::string udf_code_id_str;

    std::string udf_number_str;
};

#endif // XERPARSER_UDFVALUE_H
