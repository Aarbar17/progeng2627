#include <iostream>
#include <vector>

void vappend(std::vector<double> &v, std::vector<double> v1){
    for(int i=0; i<v1.size(); i++){
        v.push_back(v1[i]);
    }
}

int main(){
    std::vector<double> v{1.1, 2.3, 5, 8.7};
    std::vector<double> v1{2.3, 5, 6.4, 8, 9.0};
    vappend(v, v1);

    for(int j=0; j<v.size(); j++){
        std::cout << v[j] << " ";
    }
}