#include "ETL/ETL.h"
#include <iostream>
#include <string>
#include <eigen3/Eigen/Dense>
#include <boost/algorithm/string.hpp>
#include <vector>

int main(int argc, char *argv[]){
    ETL etl(argv[1],argv2[2], argv3[3]);
    std::vector<std::vector<std::string>>dataset = etl.readCSV();
    return EXIT_SUCCESS;
}
//Compile linear regression
// g++ -std=c++11 LinearRegression/LinearRegression.cpp ETL/ETL.cpp main/LinearRegression.cpp -o linregr
//run and test
// ./linregr datasets/winedata.csv ","

