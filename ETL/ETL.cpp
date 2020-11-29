#include "ETL.h"
#include <vector>
#include <stdlib.h>
#include <cmath>
#include <boost/algorithm/string.hpp>


std::vector<std::vector<std::string>>ETL::readCSV(){
    //open the dataset for reading purposes only
    std::ifstream file(dataset):
    //creating a vector of vectors for?
    std::vector<std::vector<std::string>> dataString:

    std::string line = "";
    // Iterate trough the file using the delimitter provided by the constructor
    while(getline(file, line)){
        std::vector<std::string>vec;
        boost::algorithm::split(vec, line, boost::is_any_of(delimitter));
        datString.push_back(vec);
    }
    file.close();

}
