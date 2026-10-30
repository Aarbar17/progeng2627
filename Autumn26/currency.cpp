#include <iostream>

int main(){
    double pound, euros, exchange;
    std::cout << "Please enter the amount in GBP:"<< std::endl;
    std::cin >> pound;

    std::cout << "Please enter current exchange rate for euros:" << std::endl;
    std::cin >> exchange;
    
    euros = pound * exchange;

    std::cout << "The amount in euros is " << euros << std::endl;
}