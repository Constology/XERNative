

#ifndef XERPARSER_NONWORK_H
#define XERPARSER_NONWORK_H

#include <iostream>
#include <vector>
class Reader;

class NonWork {
public:
    int getNonworkTypeId();
    void setNonworkTypeId(int value);
    int getSeqNum();
    void setSeqNum(int value);
    std::string getNonworkCode();
    void setNonworkCode(std::string value);
    std::string getNonworkType();
    void setNonworkType(std::string value);

    std::string get_tsv();
    NonWork( std::vector<std::string> header,
             std::vector<std::string> params,
            Reader *readerObj);

private:
    int nonwork_type_id;
    int seq_num;
    std::string nonwork_code;
    std::string nonwork_type;

    std::string tsv;
    void update_tsv();
    std::string nonwork_type_id_str;
    std::string seq_num_str;
    Reader *reader;
};

#endif // XERPARSER_NONWORK_H
