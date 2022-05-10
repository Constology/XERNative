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

std::string RCatValues::get_tsv() const{
	std::string tsv;
	tsv.append("%T\tRCATVAL\n");
	tsv.append("%F\trsrc_catg_id\trsrc_catg_type_id\trsrc_catg_short_name\trsrc_catg_name\t"
						 "parent_rsrc_catg_id\tseq_num\n");
	for(auto rCatValue : rCatValues){
		tsv.append(rCatValue.get_tsv());
	}
	return tsv;
}