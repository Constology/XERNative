#if !defined(XERPARSER_RCATVALUE_H)
#define XERPARSER_RCATVALUE_H
#include <string>
#include <vector>


#include <string>
#include <vector>


class RCatValue {
    public:
        RCatValue(const std::string header[], const std::string params[]);
        int parent_rsrc_catg_id;
        int rsrc_catg_id;

        std::string rsrc_catg_name;
        std::string rsrc_catg_short_name;
        int rsrc_catg_type_id;
        int seq_num;
        
        std::string get_tsv();

    private:
        std::string tsv;
};

#endif // XERPARSER_RCATVALUE_H
