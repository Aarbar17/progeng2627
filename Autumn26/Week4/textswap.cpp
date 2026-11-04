#include <iostream>
#include <string>

void textswap(std::string& s1, std::string& s2){
    std::string s3 = s1;
    s1 = s2;
    s2 = s3;
}

int main(){
    std::string s1, s2;

    std::cout << "Enter a string: " << std::endl;
    std::cin >> s1;

    std::cout << "Enter another string: " << std::endl;
    std::cin >> s2;

    std::cout << "String 1: " << s1 << std::endl;
    std::cout << "String 2: " << s2 << std::endl;

    textswap(s1, s2);

    std::cout << "String 1: " << s1 << std::endl;
    std::cout << "String 2: " << s2 << std::endl;
}

