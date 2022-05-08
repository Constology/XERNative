#include "RCatTypes.h"

void RCatTypes::add(const RCatType & rCatType){
    rCatTypes.emplace_back(rCatType);
}

std::vector<RCatType> RCatTypes::getAll(){
    return rCatTypes;
}

RCatType RCatTypes::findById(int id){
    for(auto rcat: rCatTypes){
        if(rcat.rsrc_catg_type_id == id){
            return rcat;
        }
    }
    printf("Could not find Resource Category");
    exit(EXIT_FAILURE);
}