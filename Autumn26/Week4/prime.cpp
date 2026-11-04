#include <iostream>


int isprime(int n){
    for(int j=2; j<n; j++){
        if(n%j == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int s1, s2;

    std::cout << "Enter 2 numbers, 1st one bigger than the second: " << std::endl;
    std::cin >> s1 >> s2;

    for(int i=s1; i<=s2; i++){
        if(isprime(i)){
            std::cout << i << std::endl;
        }
    }
}