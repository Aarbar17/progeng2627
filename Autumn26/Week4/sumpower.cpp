#include <iostream>
#include <cmath>

int main(){
    int x = 0, n = 0, sum = 0;

    std::cout << "Enter base: " << std::endl;
    std::cin >> x;

    std::cout << "Enter power: " << std::endl;
    std::cin >> n;

    for(int i = 1; i <= n; i++){
        sum = sum + std::pow(x, i);
    }

    std::cout << "The sum of powers: " << sum << std::endl;
}