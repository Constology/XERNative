#include "UDFValues.h"

void UDFValues::add(const UDFValue& udf){
    udfs.emplace_back(udf);
}

UDFValue UDFValues::findById(int id){
    for(auto & udf: udfs){
        if(udf.udf_code_id == id){
            return udf;
        }
    }
    printf("UDF not found");
    exit(EXIT_FAILURE);
}

std::vector<UDFValue> UDFValues::getByProject(int projId){
    std::vector<UDFValue> toReturn;
    for (auto &udf : udfs)
    {
        if(udf.proj_id == projId){
            toReturn.push_back(udf);
        }
    }
    return toReturn;
}

std::vector<UDFValue> UDFValues::getAll(){
    return udfs;
}