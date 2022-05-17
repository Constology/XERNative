#if !defined(XERPARSER_RCATVALUE_H)
#define XERPARSER_RCATVALUE_H
#include <string>
#include <vector>

class Reader;

class RCatValue
{
public:
    RCatValue(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj);

    int parent_rsrc_catg_id;
    int rsrc_catg_id;

    std::string rsrc_catg_name;
    std::string rsrc_catg_short_name;
    int rsrc_catg_type_id;
    int seq_num;

    std::string get_tsv() const;

private:
    std::string tsv;
    std::string parent_rsrc_catg_id_str;
    std::string rsrc_catg_id_str;
    std::string rsrc_catg_type_id_str;
    std::string seq_num_str;
    void update_tsv();
    Reader *reader;
};

#endif // XERPARSER_RCATVALUE_H
