#include <iostream>

std::string concatName(std::string First, std::string Second); //we need 2 string inputs

int main(){

    std::string First_name = "John", Second_name = "Brown"; //we define the value of our strings

    std::cout << concatName(First_name, Second_name); //we pass the strings to the function

    return 0;
}

std::string concatName(std::string First, std::string Second){
    return First + " " + Second; //returns concat name (in this case it is John Brown)
}
