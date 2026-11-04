#include <iostream>

int smallestfactor(int n){
    int factor = 0;
    for(int i=2; i<n; i++){
        if(n % i == 0){
            return i;
        }
    }
    return 0;
}


int main(){
    int n;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;

    std::cout << "Smallest factor is: " << smallestfactor(n) << std::endl;
}