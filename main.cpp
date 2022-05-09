#include <iostream>
#include "Reader.h"

using namespace std;

int main(){
    Reader reader;
    
    reader.parse("/home/hassan/programming/xerParser/sample.xer");

    for (Udf udf :reader.udfs.getByProject(368) )
    {
        cout<<udf.get_tsv() <<std::endl;
    }

    cout << "*********** TEST WBS **********************" << endl;
    for (Wbs wbs : reader.wbss.getAll())
    {
        cout << wbs.get_tsv() << endl;
    }
    cout << "**************** CALENDAR *************************" << endl;
    for(Calendar cal: reader.calendars.getAll()){
        cout << cal.get_tsv()<<endl;
    }

    cout << "***************** CURRENCIES **********************" << endl;
    for(Currtype curr: reader.currencies.getAll()){
        cout << "Currencies "<<curr.get_tsv() << endl;
    }
}