#include <iostream>

double square(double lenght);
double cube(double lenght);

int main() {

    //return returns defined value to the location where it was called from
    //instead of using "void" we need to define the data tzpe the function will return

    double x = 5;
    double area = square(x), volume = cube(x);

    std::cout << "area equals to: " << area << "\n";
    std::cout << "volume equals to: " << volume;
    
    return 0;
}

double square(double lenght){
    return lenght * lenght;
}

double cube(double lenght){
    return lenght * lenght * lenght;
}

