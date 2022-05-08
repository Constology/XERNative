#include "UDFs.h"

void UDFs::add(const UDF& udf){
    udfs.emplace_back(udf);
}

UDF UDFs::findById(int id){
    for(auto & udf: udfs){
        if(udf.udf_code_id == id){
            return udf;
        }
    }
    printf("UDF not found");
    exit(EXIT_FAILURE);
}

std::vector<UDF> UDFs::getByProject(int projId){
    std::vector<UDF> toReturn;
    for (auto &udf : udfs)
    {
        if(udf.proj_id == projId){
            toReturn.push_back(udf);
        }
    }
    return toReturn;
}