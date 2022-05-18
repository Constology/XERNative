
#ifndef XERPARSER_OBS_H
#define XERPARSER_OBS_H

#include <iostream>
#include <vector>

class Reader;

class Obs
{
public:
    int getObsId();
    void setObsId(int value);
    std::string getGuid();
    void setGuid(std::string value);
    std::string getObsName();
    void setObsName(std::string value);
    std::string getObsDescr();
    void setObsDescr(std::string value);
    int getParentObsId();
    void setParentObsId(int value);
    int getSeqNum();
    void setSeqNum(int value);

    std::string get_tsv();
    Obs(std::vector<std::string> header,
        std::vector<std::string> params,
        Reader *readerObj);

private:
    int obs_id;
    std::string guid;
    std::string obs_name;
    std::string obs_descr;
    int parent_obs_id;
    int seq_num;

    std::string tsv;
    void update_tsv();
    std::string obs_id_str;
    std::string parent_obs_id_str;
    std::string seq_num_str;
    Reader *reader;
};

#endif // XERPARSER_OBS_H
