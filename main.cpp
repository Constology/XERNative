#include <iostream>
#include "Reader.h"



using namespace std;

int main(){
    Reader reader;
    
    reader.parse("/home/hassan/programming/xerParser/sample.xer");

    for (Wbs wbs :reader.wbss.getByProject(368) )
    {
        cout<<wbs.wbs_id<< " Name " <<wbs.wbs_name<<std::endl;
    }
}