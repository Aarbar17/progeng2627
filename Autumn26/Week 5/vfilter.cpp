#include <iostream>
#include <vector>

void vfilter(int n, std::vector<double> v, std::vector<double>& v1){
    for(int i=0; i<v.size(); i++){
        if(v[i] < n){
            v1.push_back(v[i]);
        }
    }
}
int main(){
    int t=0;

    std::vector<double> v{-3.5, 8.6, 99, 0, 84.6, 44, 43};
    std::vector<double> v1;

    std::cout << "Enter a value: " << std::endl;
    std::cin >> t;

    vfilter(t, v, v1);

    for(int j=0; j<v1.size(); j++){
        std::cout << v1[j] << " ";   
    }
}
