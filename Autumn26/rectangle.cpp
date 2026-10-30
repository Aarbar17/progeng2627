#include <iostream>

int main(){
    int l1, l2, area, perimeter;
    std::cout << "Please enter length of rectangle:" << std::endl;
    std::cin >> l1;

    std::cout << "Please enter the width of rectangle:" << std::endl;
    std::cin >> l2;

    area = l1 * l2;
    perimeter = (l1*2) +(l2*2);

    std::cout << "The area of the rectangle is " << area << " and the perimeter is " << perimeter << std::endl;
}
