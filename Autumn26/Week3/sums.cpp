#include <iostream>

int main(){
    int n = 1, sum = 0;
    while(n != 0){
        std::cout << "Enter a number: " << std::endl;
        std::cin >> n;

        sum = sum + n;
        std::cout << "Sum so far is: " << sum << std::endl;   
    }
}