#ifndef XER_FINTMPLS_H_
#define XER_FINTMPLS_H_

#include <string>
#include <vector>
#include "classes/Fintmpl.h"

class Fintmpls{

    public:
        void add(const Fintmpl fintmpl);
        Fintmpl findById(int id);
        std::string get_tsv();

    private:
        std::vector<Fintmpl> fintmpls;
};

#endif // !XER_FINTMPLS_H_#define XER_FINTMPLS_H_

