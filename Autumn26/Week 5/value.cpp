#include <iostream>
#include <vector>

int occur(double a, std::vector<double> v1){
    for(int i=0; i<v1.size(); i++){
        if(v1[i] == a){
            return i;
        }
    }
    return -1;
}

int main(){
    double n;

    std::vector<double> v{1, 4.8, 9.0, 7.6, 4.8, 9.7};

    std::cout << "Enter the value n: " << std::endl;
    std::cin >> n;

    std::cout << "The first occurence of n is at index: " << occur(n,v);
}