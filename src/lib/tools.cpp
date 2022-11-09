#include <iostream>


void printArguments( int argc, char** argv){
    std::cout << "Input Args are : \n";
    for( std::size_t i=1; i<argc; i++){
        std::cout << argv[i] << " "; 
    }
    std::cout << std::endl; 

}