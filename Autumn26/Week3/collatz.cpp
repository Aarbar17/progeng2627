#include <iostream>

int main(){

    int n = 0, count = 0, max = 0;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;
    max = n;

    while(n!=1){
        if(n%2 == 0){
            n = n / 2;
        }
        else{
            n = (3*n) + 1;
        }
        if(n>max){
            max = n;
        }
        std::cout << n << std::endl;
        count = count + 1;
    }
    std::cout << "Number of steps: " << count << std::endl;
    std::cout << "Max number: " << max << std::endl;
}