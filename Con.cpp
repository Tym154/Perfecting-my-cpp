#include <iostream>

int main() {
    const double PI = 3.14159;  //const before the data type makes sure that the value of variable doesnt get changed (the value is fixed)
                                //for readable code use upper case for the variable if its const
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";

    return 0;
}
