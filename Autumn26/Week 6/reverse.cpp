#include <iostream>
#include <vector>
#include <cstdlib>
#include<fstream>

int main(){
    std::string temp;

    std::ifstream infile;
    infile.open("input.txt");

    std::vector<std::string> v;
    std::vector<std::string> v1;

    if(infile.is_open()){
        while(infile >> temp){
            v.push_back(temp);
        }

        for(int i=v.size() - 1; i >= 0; i = i - 1){
            v1.push_back(v[i]);
        }

        for(int j=0; j<v1.size(); j++){
            std::cout << v1[j] << std::endl;
        }
        infile.close();
    }
}