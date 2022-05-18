#if !defined(XERPARSER_RCATTYPE_H)
#define XERPARSER_RCATTYPE_H
#include <string>
#include <vector>

class Reader;

class RCatType
{
public:
    int getRsrcCatgShortLen();
    void setRsrcCatgShortLen(int value);
    std::string getRsrcCatgType();
    void setRsrcCatgType(std::string value);
    int getRsrcCatgTypeId();
    void setRsrcCatgTypeId(int value);
    int getSeqNum();
    void setSeqNum(int value);
    std::string getSuperFlag();
    void setSuperFlag(std::string value);

    RCatType(std::vector<std::string> header, std::vector<std::string> params, Reader *readerObj);
    

    std::string get_tsv();

private:
    int rsrc_catg_short_len;
    std::string rsrc_catg_type;
    int rsrc_catg_type_id;
    int seq_num;
    std::string super_flag;

    std::string tsv;
    std::string rsrc_catg_short_len_str;
    std::string rsrc_catg_type_id_str;
    std::string seq_num_str;
    void update_tsv();
    Reader *reader;
};

#endif // XERPARSER_RCATTYPE_H
