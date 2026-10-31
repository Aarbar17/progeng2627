#include <iostream>

int main(){
    int sum = 1, n = 0;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;

    for(int count = n; count > 0; count = count - 1){
        sum = sum * count;
    }

    std::cout << "The factorial of " << n << " is " << sum << std::endl;
}