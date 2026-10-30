#include <iostream>

int main(){
    double celc, fahr;
    std::cout << "Enter temperature in celcius:" << std::endl;
    std::cin >> celc;

    fahr = (celc * 1.8) + 32;

    std::cout << "Temperature in fahrenheit is " << fahr;
}

