#if !defined(XERPARSER_RCATTYPE_H)
#    define XERPARSER_RCATTYPE_H
#    include <string>
#    include <vector>

class RCatType {
public:
    RCatType(const std::vector<std::string> header, const std::vector<std::string> params);
    int rsrc_catg_short_len;
    std::string rsrc_catg_type;
    int rsrc_catg_type_id;
    int seq_num;
    std::string super_flag;

    std::string get_tsv() const;

private:
    std::string tsv;
    std::string rsrc_catg_short_len_str;
    std::string rsrc_catg_type_id_str;
    std::string seq_num_str;
    void update_tsv();
};

#endif // XERPARSER_RCATTYPE_H
