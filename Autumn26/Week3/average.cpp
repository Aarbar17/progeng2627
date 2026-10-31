#include <iostream>

int main(){
    double average = 0, sum = 0;
    int input = 0, counter = 0;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> input;
    while(input != 0){
        counter = counter + 1;
        sum = sum + input;
        average = sum / counter;
        std::cout << "The average is: " << average << std::endl;
        std::cout << "Enter a number: " << std::endl;
        std::cin >> input;
    }
}