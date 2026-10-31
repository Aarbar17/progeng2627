#include <iostream>

int main(){
    int counter = 0, input = 0, divisor =  0;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> input;
    std::cout << "Enter divisor: " << std::endl;
    std::cin >> divisor;

    while(input > divisor){
        counter = counter + 1;
        input = input - divisor;
    }
    std::cout << "The quotient is " << counter << " and the remainder is " << input;
}