//
// Created by Taraxtix on 06/05/2022.
//

#ifndef EXRPARSER_ACCOUNT_H
#define EXRPARSER_ACCOUNT_H

#include <iostream>

class Account{
public:
		int acct_id;
		int acct_seq_num;
		int parent_acct_id;
		std::string acct_name;
		std::string acct_descr;
		std::string acct_short_name;

		Account(const std::string *header, const std::string *params);

		std::string get_tsv();

private:
		std::string tsv;
};


#endif //EXRPARSER_ACCOUNT_H
