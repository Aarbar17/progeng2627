#include <iostream>

int main(){
    int max = 0, min = 0, current = 0;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> current;
    min = current;
    max = current;
    std::cout << "Current maximum and minimum is " << current << std::endl;

    while(current != 0){
        std::cout << "Enter a number: " << std::endl;
        std::cin >> current;

        if(current > max){
            max = current;
        }

        if(current < min){
            min = current;
        }

        std::cout << "Current maximum is: " << max << " and current minimum is: " << min << std::endl;
    }

}