#include <iostream>

//class is a usefull "data type" that can store multiple variables and functions

class Player
{
    private:  //anything you write down into the private "section" will be only accesible by the class
        int m_Name; //when you have a varible in private we write "m_" befere the name of the variable. So we know it is in private

    public: //and what you write into the public "section" will be accesible outside of the class
    int x, y;

    void Move(int xa, int ya){ //when you write a function in class you dont need to pass the variables from the class
        x += xa;
        y += ya;
    }
}; //be carefull, you need to have ";" after the class

int main() {

    Player player; //than we create a variable with the class data type

    player.x = 5; //than you can rewrite it like this

    player.Move(1, 2); //calling the function like this

    std::cout << player.x; //or output it like this

    return 0;
}

//classes are really usefull and powerfull. try to build a habit using them instead of writing down x variables and functions
//it makes readable and maintanable code