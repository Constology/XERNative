#include <iostream>
#include "Reader.h"



using namespace std;

int main(){
    Reader reader;
    
    reader.parse("/home/hassan/programming/xerParser/sample.xer");

    for (UDF udf :reader.udfs.getByProject(368) )
    {
        cout<<udf.udf_text<< " FK " <<udf.fk_id<<std::endl;
    }
}