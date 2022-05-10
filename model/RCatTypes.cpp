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

std::string RCatTypes::get_tsv() const{
		std::string tsv;
		tsv.append("%T\tRCATTYPE\n");
		tsv.append("%F\trsrc_catg_short_len\trsrc_catg_type\trsrc_catg_type_id\tseq_num\tsuper_flag\n");
		for(auto rcattype : rCatTypes){
			tsv.append(rcattype.get_tsv());
		}
		return tsv;
}