#include "Wbss.h"

void Wbss::add(const Wbs& wbs){
    wbss.emplace_back(wbs);
}

Wbs Wbss::findById(int id){
    for(auto & wb: wbss){
        if(wb.wbs_id == id){
            return wb;
        }
    }
    printf("Wbs not found");
    exit(EXIT_FAILURE);
}

Wbs Wbss::getParent(int id){
    Wbs cur_wbs = findById(id);
    int parent_id = cur_wbs.parent_wbs_id;
    return findById(parent_id);
}


std::vector<Wbs> Wbss::getChildren(int id){
    std::vector<Wbs> toReturn;
    for (auto &wb : wbss)
    {
        if(wb.parent_wbs_id == id){
            toReturn.push_back(wb);
        }
    }
    if (toReturn.empty()){
        printf("No Children found");

    }
    return toReturn;
}

std::vector<Wbs> Wbss::getByProject(int id){
    std::vector<Wbs> toReturn;
    for (auto & wbs : wbss)
    {
        if(wbs.proj_id == id){
            toReturn.push_back(wbs);
        }
    }
    return toReturn;
}


std::vector<Wbs> Wbss::getAll(){
    return wbss;
}