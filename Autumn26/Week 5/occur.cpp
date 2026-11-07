#include <iostream>
#include <vector>

int main(){
    int n=0, count=0, s=0;
    std::vector<int> v;
    std::vector<int> a;

    std::cout << "Please enter n: " << std::endl;
    std::cin >> n;

    for(int i=0; i<n; i++){
        int temp;
        std::cout << "Please enter a number: " << std::endl;
        std::cin >> temp;
        v.push_back(temp);
    }

    std::cout << "Enter s: " << std::endl;
    std::cin >> s;

    for(int j=0; j<v.size(); j++){
        if(v[j] == s){
            a.push_back(j);
            count++;
        }
    }

    std::cout << "There are " << count << " occurences of the number " << s << " at indices:" << std::endl;
    for(int z=0; z<a.size(); z++){
        std::cout << a[z] << std::endl;
    }
}