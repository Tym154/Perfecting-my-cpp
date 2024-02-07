#include <iostream>

int main() {

    std::string foods[] = {"Bread", "Ice cream", "Mushrooms", "Pizza"}; //creates array with predetermined values

    for(std::string food : foods){ //goes trought every element of the array (less flexible but if there is just some easy task
                                   //like writing out it is usefull)

        std::cout << food << "\n"; //writes out every element of array (i named the elements food, you can name it whatever)
    }

    return 0;
}