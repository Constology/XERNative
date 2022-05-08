#if !defined(XERPARSER_UDF_H)
#define XERPARSER_UDF_H
#include <string>
#include <vector>


class UDF{
    public:
        int udf_type_id;
        int fk_id;
        int proj_id;
        std::string udf_date;
        double udf_number;
        std::string udf_text;
        int udf_code_id;
        
        UDF(const std::string *header, const std::string *params);
        std::string get_tsv();
    private:
        std::string tsv;
};

#endif // XERPARSER_UDF_H
