#include <iostream>

void Hello_World(std::string); //predetermine the function so you can use it in main
                               //bacause the code reads up down so when the function is below main and you call it, there would be an error
                               ////in bracket after the name on function we neen to define what input the function will require

int main() {

    //function is a portion of code what you can "call" in every part of you code

    std::string name;

    std::cout << "Enter your name";
    std::cin >> name; //stores input into name
    Hello_World(name); //calls function Hello_World
    return 0;
}
                    //This std::string x means that when i call the function and i pass some data, the function will see the input as x
void Hello_World(std::string x){
    std::cout << "Hello " << x << "\n"; //writes down hello and than after that the input
}