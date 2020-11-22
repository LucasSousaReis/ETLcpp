
#ifndef ETL_h
#define ETL_h
#include <iostream>
//Eigen linear algebra template
#include <eigen3/Eigen/Dense>

_Called_from_function_class_ ETL{
    std:string dataset;
    std:string delimitter;
    //header flag indicating whether the file has a header or not
    bool header;
    public://Constructor arguments

        ETL(std::string data,std::string separator, bool head): dataset(data),delimitter(separator), header(head)
        ()
};
 
#endif
