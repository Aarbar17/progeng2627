#include <iostream>

int main(){
    int n = 0;
    double input = 0, sum = 1;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> input;

    std::cout << "Enter the power: " << std::endl;
    std::cin >> n;

    for(int i = 0; i < n; i = i + 1){
        sum = sum * input;
    }

    std::cout << input << " to the power " << n << " = " << sum;
}