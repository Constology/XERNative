//
// Created by sorat on 10/05/2022.
//

#ifndef XERPARSER_OBS_H
#define XERPARSER_OBS_H

#include <iostream>
#include <vector>

class Reader;

class Obs {
public:
    int obs_id;
    std::string guid;
    std::string obs_name;
    std::string obs_descr;
    int parent_obs_id;
    int seq_num;

    std::string get_tsv() const;
    Obs(const std::vector<std::string> header,
        const std::vector<std::string> params,
        Reader *readerObj);

private:
    std::string tsv;
    void update_tsv();
    std::string obs_id_str;
    std::string parent_obs_id_str;
    std::string seq_num_str;
    Reader *reader;
};

#endif // XERPARSER_OBS_H
