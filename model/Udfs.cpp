#include "Udfs.h"

void Udfs::add(const Udf& udf){
    udfs.emplace_back(udf);
}

Udf Udfs::findById(int id){
    for(auto & udf: udfs){
        if(udf.udf_code_id == id){
            return udf;
        }
    }
    printf("Udf not found");
    exit(EXIT_FAILURE);
}

std::vector<Udf> Udfs::getByProject(int projId){
    std::vector<Udf> toReturn;
    for (auto &udf : udfs)
    {
        if(udf.proj_id == projId){
            toReturn.push_back(udf);
        }
    }
    return toReturn;
}

std::vector<Udf> Udfs::getAll(){
    return udfs;
}