#include <iostream>

void intdiv(int a, int b, int& div, int& rem){
    div = a / b;
    rem = a % b;
}
int main(){
    int a, b, div, rem;

    std::cout << "Enter 2 numbers: " << std::endl;
    std::cin >> a >> b;
    intdiv(a,b,div,rem);

    std::cout << "The integer division is: " << div << std::endl;
    std::cout << "The remainder is: " << rem << std::endl;
}