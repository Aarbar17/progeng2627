#include <iostream>
#include <vector>

int main(){
    int result;
    std::vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    result = v[0] * (v[1] + v[2]);

    std::cout << result;
}