#include <iostream>

void periarea(double a, double b, double& area, double& perimeter){
    perimeter = (2*a) + (2*b);
    area = a * b;

}

int main(){
    double w, l, area, perimeter;
    std::cout << "Enter the width followed by the length of the rectangle: " << std::endl;
    std::cin >> w >> l;
    periarea(w,l,area,perimeter);
    std::cout << "The perimeter is: " << perimeter << std::endl;
    std::cout << "The area is: " << area << std::endl;
}