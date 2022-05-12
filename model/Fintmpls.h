//
// Created by Taraxtix on 11/05/2022.
//

#ifndef XERPARSER_FINTMPLS_H
#define XERPARSER_FINTMPLS_H

#include <vector>

#include "classes/Fintmpl.h"

class Fintmpls{
public:
		void add(const Fintmpl& fintmpl);

		Fintmpl findById(int id);
		std::vector<Fintmpl> getAll();


		std::string get_tsv() const;


private:
		std::vector<Fintmpl> fintmpls;

};


#endif //XERPARSER_FINTMPLS_H
