

#ifndef XERPARSER_NONWORK_H
#define XERPARSER_NONWORK_H

#include <iostream>
#include <vector>
class Reader;

class NonWork {
public:
    int nonwork_type_id;
    int seq_num;
    std::string nonwork_code;
    std::string nonwork_type;

    std::string get_tsv() const;
    NonWork(const std::vector<std::string> header,
            const std::vector<std::string> params,
            Reader *readerObj);

private:
    std::string tsv;
    void update_tsv();
    std::string nonwork_type_id_str;
    std::string seq_num_str;
    Reader *reader;
};

#endif // XERPARSER_NONWORK_H
