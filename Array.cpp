#include <iostream>

int main() {

    //array is like data type but it can hold more values at the same time

    std::string food[] = {"Jam", "Marmelade", "Pizza"};

    std::cout << food; //if i would csout an array like this the adress where the array is stored will be printed

    std::cout << food[0]; //i have to write [] after the array to write desired element (you write the position in the brackets)

    return 0;
}