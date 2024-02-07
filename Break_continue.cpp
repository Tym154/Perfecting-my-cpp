#include <iostream>

int main() { 

    //break stops the loop
    //continue just skips one part of the loop
    for(int i = 1; i <= 10; i++){
        if(i == 5){
            //continue; //if i would write continue in the if statement, the output would be: (1, 2, 3, 4, 6, 7, 8, 9)
            break; // if i would switch it for break the output would look like this: (1, 2, 3, 4)
        }
        std::cout << i << "\n";
    }


    return 0;
}