#include "UDFTypes.h"

void UDFTypes::add( UDFType & udfType){
    udftypes.emplace_back(udfType);
}

UDFType UDFTypes::findById(int id){
    for(auto udft: udftypes){
        if(udft.udf_type_id==id){
            return udft;
        }
    }
    printf("Could not find UDFType");
    exit(EXIT_FAILURE);
}


std::vector<UDFType> UDFTypes::getAll(){
    return udftypes;
}

std::string UDFTypes::get_tsv() {
	std::string tsv;
	tsv.append("%T\tUDFTYPE\n");
	tsv.append("%F\tudf_type_id\ttable_name\tudf_type_name\tudf_type_label\tlogical_data_type\t"
						 "super_flag\tindicator_expression\tsummary_indicator_expression\n");
	for(auto udftype : udftypes){
		tsv.append(udftype.get_tsv());
	}
	return tsv;
}