#include <iostream>
int main(){
    double n1, n2;
    std::cin >> n1 >> n2;
    n1 = n1 + n1;
    n2 = 1 + n1;
    n1 = n2 - n1;
    n2 = n2 + 2;
    n1 = n1 * n1 - n2;
    n1 = n2 - 3;
    std::cout << n2 << std::endl;
}