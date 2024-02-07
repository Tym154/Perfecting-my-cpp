#include <iostream>
#include <cmath> 

int main() {
    double x = 3, y = 5;
    double z;

    z = std::min(x, y); //std::min picks smallest variable from the two
    z = std::max(x, y); //std::max picks biggest variable from the two
    z = pow(2, 3); //pow amplifies first number with the second
    z = sqrt(9); //sqrt root number in brackets
    z = abs(-9); //abs makes absolute value from the value in brackets
    z = round(9.4); //round rounds value in brackets
    z = ceil(9.1); //ceil round up with decimal portion of any size 9.1 -> 10
    z = floor(9.8); //floor cuts out the decimal value 9.9 -> 9
    

    
    return 0;
}