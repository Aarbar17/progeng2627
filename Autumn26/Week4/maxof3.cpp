#include <iostream>

int bigger(int a, int b, int c){
    if((a>b) && (a>c)){
        return a;
    }

    if((b>a) && (b>c)){
        return b;
    }

    else{
        return c;
    }
}

int main(){
    int x = 0, y = 0, z = 0;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> x;

    std::cout << "Enter another number: " << std::endl;
    std::cin >> y;

    std::cout << "Enter another number: " << std::endl;
    std::cin >> z;

    std::cout << "The larger number is: " << bigger(x,y,z);
}