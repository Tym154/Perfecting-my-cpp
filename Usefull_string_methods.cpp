#include <iostream>

int main() {
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name); //getline reads everything until it "bumps into" \n than it saves everything before that into "name"

    name.erase(0, 3); //ereases everything between 2 defined positions in string

    name.find('0'); //writes down position of char in string

    name.insert(0, "$"); //inserts character onto the position that is defined first in the brackets

    name.at(0); //takes letter from position defined in brackets

    name.append("@gmail.com"); //adds something defined in brackets to the end of string

    name.clear(); //clears the whole string

    if(name.length() > 12){  //.lenght counts how many letters are in string
        std::cout << "Your name is too long: ";
    }
    else if(name.empty()){ //.empty checks if string is empty true or false (1 or 0)
        std::cout << "Your didnt enter anything!";
    }
    return 0;
}  