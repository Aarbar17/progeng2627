#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>

int main(){
    std::string temp;
    std::vector<std::string> v;
    std::vector<std::string> v1;
    std::ifstream infile;
    std::ifstream infile1;
    std::ofstream infile2;
    std::ofstream infile3;

    infile.open("warehouse1.txt");
    infile1.open("warehouse2.txt");
    infile2.open("intersection.txt");
    infile3.open("union.txt");

    if(infile.is_open()){
        while(infile >> temp){
            v.push_back(temp);
        }

        while(infile1 >> temp){
            v1.push_back(temp);
        }

        for(int i=0; i<v.size(); i++){
            infile2 << v[i] << std::endl;
        }

        for(int j=0; j<v1.size(); j++){
            infile2 << v1[j] << std::endl;
        }

        for(int i = 0; i<v.size(); i++){
            for(int j = 0; j < v1.size(); j++){
                if(v[i] == v1[j]){
                    infile3 << v[i] << std::endl;
                }
            }
        }

        infile.close();
        infile1.close();
        infile2.close();
        infile3.close();
    }

}