//
// Created by Taraxtix on 06/05/2022.
//

#include "Accounts.h"

void Accounts::add(const Account& account){ accounts.emplace_back(account); }

Account Accounts::findById(int id){
	for(auto & account : accounts){
		if(account.acct_id == id){
			return account;
		}
	}
	printf("Account not found");
	exit(EXIT_FAILURE);
}

std::vector<Account> Accounts::getAll(){
	return accounts;
}
