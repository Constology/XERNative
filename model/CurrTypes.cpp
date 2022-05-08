#include "CurrTypes.h"
#include <iostream>
using namespace std;


void CurrTypes::add(const CurrType &currency){
    currencies.emplace_back(currency);
}

CurrType CurrTypes::findById(int id){
    for(auto curr: currencies){
        if(curr.curr_id == id){
            return curr;
        }
    }
}

std::vector<CurrType> CurrTypes::getAll(){
    return currencies;
}