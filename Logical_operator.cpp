#include <iostream>

int main() {
    // && checks if both conditions are true
    // || checks if at least one condition is true
    // ! negates the value of the expression that follows it (bool)
    
    int temp = 25;
    bool sunny = true;

    if(temp < 30 && temp > 0){
        std::cout << "The temperature is good! \n";
    }
    else{
        std::cout << "The temperature is bad! \n";
    }

    if(temp <30 || temp > 0){
        std::cout << "The temperature is good! \n"; //this code is just to show how to write it in the if or else if
    }
    else{
        std::cout << "The temperature is bad! \n";
    }

    if(!sunny){
        std::cout << "Its cloudy outside!";
    }
    else{
        std::cout << "Its sunny outside!";
    }


    return 0;
}