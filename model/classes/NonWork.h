//
// Created by Taraxtix on 10/05/2022.
//

#ifndef XERPARSER_NONWORK_H
#define XERPARSER_NONWORK_H

#include <iostream>
#include <vector>

class NonWork {
public:
    int nonwork_type_id;
    int seq_num;
    std::string nonwork_code;
    std::string nonwork_type;

    std::string get_tsv() const;
    NonWork(const std::vector<std::string> header, const std::vector<std::string> params);

private:
    std::string tsv;
    void update_tsv();
    std::string nonwork_type_id_str;
    std::string seq_num_str;
};

#endif // XERPARSER_NONWORK_H
