#include "UDFTypes.h"

void UDFTypes::add(const UDFType & udfType){
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
