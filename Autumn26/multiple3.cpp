#include <iostream>

int main(){
    int num, result;

    std::cout << "Enter the number: " << std::endl;
    std::cin >> num;

    result = num % 3;

    if(result == 0){
        std::cout << num << " is a multiple of 3." << std::endl;
    }

    else{
        std::cout << num << " is not a multiple of 3." << std::endl;
    }
}