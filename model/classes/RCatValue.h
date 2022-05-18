#if !defined(XERPARSER_RCATVALUE_H)
#define XERPARSER_RCATVALUE_H
#include <string>
#include <vector>

class Reader;

class RCatValue
{
public:
    RCatValue(std::vector<std::string> header, std::vector<std::string> params, Reader *readerObj);

    int getParentRsrcCatgId();
    void setParentRsrcCatgId(int value);
    int getRsrcCatgId();
    void setRsrcCatgId(int value);
    std::string getRsrcCatgName();
    void setRsrcCatgName(std::string value);
    std::string getRsrcCatgShortName();
    void setRsrcCatgShortName(std::string value);
    int getRsrcCatgTypeId();
    void setRsrcCatgTypeId(int value);
    int getSeqNum();
    void setSeqNum(int value);

    std::string get_tsv();

private:
    int parent_rsrc_catg_id;
    int rsrc_catg_id;

    std::string rsrc_catg_name;
    std::string rsrc_catg_short_name;
    int rsrc_catg_type_id;
    int seq_num;

    std::string tsv;
    std::string parent_rsrc_catg_id_str;
    std::string rsrc_catg_id_str;
    std::string rsrc_catg_type_id_str;
    std::string seq_num_str;
    void update_tsv();
    Reader *reader;
};

#endif // XERPARSER_RCATVALUE_H
