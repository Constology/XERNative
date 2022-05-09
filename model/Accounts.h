//
// Created by Taraxtix on 06/05/2022.
//

#ifndef EXRPARSER_ACCOUNTS_H
#define EXRPARSER_ACCOUNTS_H

#include <vector>

#include "classes/Account.h"

class Accounts{
public:
		void add(const Account& account);

		Account findById(int id);
		std::vector<Account> getAll();


		std::string get_tsv() const;


private:
	std::vector<Account> accounts;
};


#endif //EXRPARSER_ACCOUNTS_H
