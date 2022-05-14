//
// Created by Taraxtix on 06/05/2022.
//

#ifndef EXRPARSER_ACCOUNT_H
#define EXRPARSER_ACCOUNT_H

#include <iostream>
#include <vector>

class Account
{
public:
	int acct_id;
	int acct_seq_num;
	int parent_acct_id;
	std::string acct_name;
	std::string acct_descr;
	std::string acct_short_name;

	std::string tsv;

	Account(const std::vector<std::string> header, const std::vector<std::string> params);
};

#endif // EXRPARSER_ACCOUNT_H
