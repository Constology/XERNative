#include "WBSs.h"

void WBSs::add(const WBS& wbs){
    wbss.emplace_back(wbs);
}

WBS WBSs::findById(int id){
    for(auto & wb: wbss){
        if(wb.wbs_id == id){
            return wb;
        }
    }
    printf("WBS not found");
    exit(EXIT_FAILURE);
}

WBS WBSs::getParent(int id){
    WBS cur_wbs = findById(id);
    int parent_id = cur_wbs.parent_wbs_id;
    return findById(parent_id);
}

std::vector<WBS> WBSs::getChilds(int id){
    std::vector<WBS> toReturn;
    for (auto &wb : wbss)
    {
        if(wb.parent_wbs_id == id){
            toReturn.push_back(wb);
        }
    }
    if (toReturn.size() == 0){
        printf("No Childs found");

    }
    return toReturn;
}

std::vector<WBS> WBSs::getByProject(int id){
    std::vector<WBS> toReturn;
    for (auto wbs : wbss)
    {
        if(wbs.proj_id == id){
            toReturn.push_back(wbs);
        }
    }
    return toReturn;
}

std::vector<WBS> WBSs::getAll(){
    return wbss;
}