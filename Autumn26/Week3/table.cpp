#include <iostream>

int main(){
    int n = 0, count = 0;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;

    for(int i = 1; i <= n; i++){
        count = count + 1;
        std::cout << i << "\t";

        for(int j = i + count; j <= n * count; j = j + count){
            std::cout << j << "\t";
        }
        std::cout << "\n";
    }
}