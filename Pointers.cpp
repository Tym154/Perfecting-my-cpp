#include <iostream>

int main() {

    //pointer is a variable that stores a memory adress of another variable
    //in a lot of cases its easier to work with an adress

    //& adress-off operator
    //* dereference operator

    std::string shroom = "shroom";
    std::string shrooms[4] = {"shroom1", "shroom2", "shroom3", "shroom4"};
    int x = 5;

    std::string *pShroom = &shroom;
    std::string *pShrooms = shrooms; //you dont have to use & when pointing to and array, because the name of the array is alredy just memory adress
    int *px = &x;

    std::cout << *pShroom << "\n";
    std::cout << *pShrooms << "\n"; //when you write a pointer without the dereference operator it just writes down the memory adress
    std::cout << *px << "\n";

    return 0;
}