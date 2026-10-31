#include <iostream>

int bigger(int a, int b){
    if(a>b){
        return a;
    }

    if(a<b){
        return b;
    }

    else{
        return a;
    }
}

int main(){
    int x = 0, y = 0;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> x;

    std::cout << "Enter another number: " << std::endl;
    std::cin >> y;

    std::cout << "The larger number is: " << bigger(x,y);
}