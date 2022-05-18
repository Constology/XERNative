#ifndef XERPARSER_UDF_H
#define XERPARSER_UDF_H
#include <string>
#include <vector>

class Reader;
class Udf
{
public:
    int getUdfTypeId();
    void setUdfTypeId(int value);
    int getFkId();
    void setFkId(int value);
    int getProjId();
    void setProjId(int value);
    std::string getUdfDate();
    void setUdfDate(std::string value);
    double getUdfNumber();
    void setUdfNumber(double value);
    std::string getUdfText();
    void setUdfText(std::string value);
    int getUdfCodeId();
    void setUdfCodeId(int value);

    Udf(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj);
    std::string get_tsv();

private:
    int udf_type_id;
    int fk_id;
    int proj_id;
    std::string udf_date;
    double udf_number;
    std::string udf_text;
    int udf_code_id;

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
