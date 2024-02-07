#include <iostream>

int main() {

    //memory adress is a location where defined data is stored
    //you can acces this location using & (adress-off operator)

    std::string name = "John";
    int x = 5;
    bool passed = true;

    std::cout << &name << "\n";
    std::cout << &x << "\n";
    std::cout << &passed << "\n";

    return 0;
}