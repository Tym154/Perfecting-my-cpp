#include <iostream>

int main() {
    
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age; //stores input into age

    if(age >= 18){ // checks if condition age is more than or equal to 18 (if not, checks the else if under it)
        std::cout << "you are old enought!";
    }
    else if(age < 0){ //checks if age is less than zero
        std::cout << "you were not born yet!";
    }
    else{ //if none of the if or else if above didnt met their condition code in else brackets will be executed
        std::cout << "you are not old enought!";
    }
    
    return 0;
}