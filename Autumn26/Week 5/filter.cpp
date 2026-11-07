#include <iostream>
#include <vector>

int main(){
    int n, n1;

    std::vector<int> v;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;

    std::cout << "Enter " << n << " numbers: " << std::endl;

    for(int i=0; i<n; i++){
        int temp;

        std::cin >> temp;
        v.push_back(temp);
    }

    std::cout << "Enter another number: " << std::endl;
    std::cin >> n1;

    for(int j=0; j<v.size();j++){
        if(v[j] < n1){
            std::cout << v[j] << std::endl;
        }
    }
}