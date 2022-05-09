#if !defined(XERPARSER_UDFVALUE_H)
#define XERPARSER_UDFVALUE_H
#include <string>
#include <vector>


class UDFValue{
    public:
        int udf_type_id;
        int fk_id;
        int proj_id;
        std::string udf_date;
        double udf_number;
        std::string udf_text;
        int udf_code_id;
        
        UDFValue(const std::string *header, const std::string *params);
        std::string get_tsv();
    private:
        std::string tsv;
};

#endif // XERPARSER_UDFVALUE_H
