
#include "Pcattype.h"

#include "../../Reader.h"
#include "Pcatval.h"

Pcattype::Pcattype(std::vector<std::string> header,
                   std::vector<std::string> params,
                   Reader *readerObj) {
    tsv = "";
    for (int i = 0; i < params.size(); i++) {
        if (header.at(i) == "proj_catg_type_id") {
            if (!params.at(i).empty()) {
                proj_catg_type_id = stoi(params.at(i));
                proj_catg_type_id_str = params.at(i);
            }
        } else if (header.at(i) == "seq_num") {
            if (!params.at(i).empty()) {
                seq_num = stoi(params.at(i));
                seq_num_str = params.at(i);
            }
        } else if (header.at(i) == "proj_catg_short_len") {
            if (!params.at(i).empty()) {
                proj_catg_short_len = stoi(params.at(i));
                proj_catg_short_len_str = params.at(i);
            }
        } else if (header.at(i) == "proj_catg_type") {
            proj_catg_type = params.at(i);
        } else if (header.at(i) == "export_flag") {
            export_flag = params.at(i);
        }
    }
    reader = readerObj;
    update_tsv();
}

std::vector<Pcatval> Pcattype::getProjectCodeValues() {
    return reader->pcatvals.getByTypeId(proj_catg_type_id);
}

void Pcattype::update_tsv() {
    tsv = "%R\t";
    tsv.append(proj_catg_type_id_str)
        .append("\t")
        .append(seq_num_str)
        .append("\t")
        .append(proj_catg_short_len_str)
        .append("\t")
        .append(proj_catg_type)
        .append("\t")
        .append(export_flag)
        .append("\n");
}

std::string Pcattype::get_tsv() {
    update_tsv();
    return tsv;
}

int Pcattype::getProjCatgTypeId() { return proj_catg_type_id; }

void Pcattype::setProjCatgTypeId(int value) {
    if (value > 0) {
        proj_catg_type_id = value;
        proj_catg_type_id_str = std::to_string(value);
    }
}

int Pcattype::getSeqNum() { return seq_num; }

void Pcattype::setSeqNum(int value) {
    if (value > 0) {
        seq_num = value;
        seq_num_str = std::to_string(value);
    }
}

std::string Pcattype::getProjCatgType() { return proj_catg_type; }

void Pcattype::setProjCatgType(std::string value) {
    if (!value.empty()) {
        proj_catg_type = value;
    }
}

std::string Pcattype::getExportFlag() { return export_flag; }

void Pcattype::setExportFlag(std::string value) {
    if (!value.empty()) {
        export_flag = value;
    }
}
