#include <iostream>

double search(double x[], double find, int size); //our search function that will return double is defined here

int main(){

    double Numbers[] = {1, 2, 3, 4, 5}; //some random values in array 
    int size = sizeof(Numbers)/sizeof(int); //calculate the size of an array
    double find, index = -1; //need to define index -1 so we can then check if the search found something

    std::cout << "What number are you looking for? ";
    std::cin >> find; //cin the element we want to look for

    index = search(Numbers, find, size); //calling the function search

    if(index != -1){
        std::cout << "The closest index with you number is at index: " << index << "\n";
    }
    else{
        std::cout << "Your number isnt in the arr \n";
    }

    return 0;
}

double search(double x[], double find, int size){
    for(int i = 0; i < size; i++){ //forloop that goes trought every element
        if(x[i] == find){ //if element equals to the element we want to find (return position)
            return i; 
        }
    }
}