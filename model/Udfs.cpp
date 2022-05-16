#include "Udfs.h"

void Udfs::add( Udf &udf) { udfs.emplace_back(udf); }

Udf Udfs::findById(int id) {
    for (auto &udf : udfs) {
        if (udf.udf_code_id == id) {
            return udf;
        }
    }
    printf("Udf not found");
    exit(EXIT_FAILURE);
}

std::vector<Udf> Udfs::getByProject(int projId) {
    std::vector<Udf> toReturn;
    for (auto &udf : udfs) {
        if (udf.proj_id == projId) {
            toReturn.push_back(udf);
        }
    }
    return toReturn;
}

std::vector<Udf> Udfs::getAll() { return udfs; }

std::string Udfs::get_tsv()  {
    std::string tsv;
    tsv.append("%T\tUDFVALUE\n");
    tsv.append("%F\tudf_code_id\tfk_id\tproj_id\tudf_date\tudf_number\tudf_text\tudf_code_id\n");
    for (auto udf : udfs) {
        tsv.append(udf.get_tsv());
    }
    return tsv;
}

std::vector<Udf> Udfs::getByTypeId(int id) {
    std::vector<Udf> toReturn;
    for (Udf udf : udfs) {
        if (udf.udf_type_id == id) {
            toReturn.emplace_back(udf);
        }
    }
    return toReturn;
}

std::vector<Udf> Udfs::getByTaskId(int id) {
    std::vector<Udf> toReturn;
    for (Udf udf : udfs) {
        if (udf.fk_id == id) {
            toReturn.emplace_back(udf);
        }
    }
    return toReturn;
}

std::vector<Udf> Udfs::getByProjectId(int id) {
    std::vector<Udf> toReturn;
    for (Udf udf : udfs) {
        if (udf.proj_id == id) {
            toReturn.emplace_back(udf);
        }
    }
    return toReturn;
}