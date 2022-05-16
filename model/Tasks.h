

#ifndef XERPARSER_TASKS_H
#define XERPARSER_TASKS_H

#include "classes/Rsrc.h"
#include "classes/Task.h"

#include <vector>

class Reader;

class Tasks {
public:
    void add(Task &task);

    Task findById(int id);
    std::vector<Task> getAll();
    std::vector<Task> getByWbs(int id);
    std::vector<Task> getByRsrc(int id);
    std::vector<Task> getByRsrc(Rsrc rsrc);
    std::string get_tsv();

private:
    std::vector<Task> tasks;
    Reader *reader;
};

#endif // XERPARSER_TASKS_H
