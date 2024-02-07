#include <iostream>

int main() {

    std::string Foods[200]; //creates array with 201 element spaces

    fill(Foods, Foods + 200, "Pizza"); //Fills an array with 200 strings "Pizza" (if there would be + 50 it would just fill 50 spaces)

    for(std::string food : Foods){
        std::cout << food << "\n"; //writes out whole array
    }

    return 0;
}