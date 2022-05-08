#include <iostream>
#include "Reader.h"

using namespace std;

int main(){
    Reader reader;
    
    reader.parse("/home/hassan/programming/xerParser/sample.xer");

    for (UDFValue udf :reader.udfs.getByProject(368) )
    {
        cout<<udf.get_tsv() <<std::endl;
    }

    cout << "*********** TEST WBS **********************" << endl;
    for (WBS wbs : reader.wbss.getByProject(368))
    {
        cout << wbs.get_tsv() << endl;
    }
    cout << "**************** CALENDAR *************************" << endl;
    for(Calendar cal: reader.calendars.calendars){
        cout << cal.get_tsv()<<endl;
    }
}