#include <iostream>
#include <vector>


double minval(std::vector<double> v2){
    if(v2.size() == 0){
        return -1;
    }

    else{
        double temp;
        for(int i=0; i<v2.size(); i++){
            if(v2[i] < temp){
                temp = v2[i];
            }
        }
    return temp;
    }
}

int main(){
    std::vector<double> v{3, 1.1, -3.7, 4.4};
    std::vector<double> v1;

    std::cout << "The smallest value in v is: " << minval(v) << std::endl;
    std::cout << "The smallest value in v1 is: " << minval(v1) << std::endl;
}