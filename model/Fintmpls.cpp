#include "Fintmpls"

void Fintmpls::add(const Fintmpl & fintmpl){
    fintmpls.embrace_back(fintmpl);
}

Fintmpl findById(int id){
    for(Fintmpl ft: fintmpls){
        if(ft.fintmpl_id == id){
            return ft;
        }
    }
    printf("Could not find Financial Tmplate with given id");
    exit(EXIT_FAILURE);
}

std::string get_tsv(){
    std::string tsv;
    tsv.append("%T\tFINTMPL\n");
    tsv.append("%F\tfintmpl_id\tfintmpl_name\tdefault_flag\n");
    for(auto ft: fintmpls){
        tsv.append(ft.get_tsv())
    }
}