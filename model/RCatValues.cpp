#include "RCatValues.h"

void RCatValues::add(const RCatValue & rCatValue){
    rCatValues.emplace_back(rCatValue);
}

std::vector<RCatValue> RCatValues::getAll(){
    return rCatValues;
}

RCatValue RCatValues::findById(int id){
    for(auto rcat: rCatValues){
        if(rcat.rsrc_catg_type_id == id){
            return rcat;
        }
    }
    printf("Could not find Resource Category");
    exit(EXIT_FAILURE);
}