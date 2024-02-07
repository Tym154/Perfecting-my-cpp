#include <iostream>

int main() {
    int grade = 75;

    int hungry = true;

    //with ternary operator i can switch this:

    //if(grade >= 60){
    //    std::cout << "You pass!";
    //}
    //else if{
    //    std::cout << "You didnt pass!";
    //}

    //for this:

    //condition       if true                            if false
    grade >= 60 ? std::cout << "You pass!" : std::cout << "You didnt pass";\

    //or use bool
    //condition with bool     if true                       if false
    hungry ? std::cout << "You are hungry!" : std::cout << "You are not hungry!";
    
    //or instead of writing std::cout two times you can write it like this:
    std::cout << (hungry ? "You are hungry!" : "You are not hungry!");

    return 0;
}