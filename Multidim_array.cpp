#include <iostream>

int main(){

    double arr[][3] = {{1, 2, 5,},
                       {4, 5, 9},
                       {10, 45, 78,}}; //creates 2D array (arrays in array)
                       
    int rows = sizeof(arr)/sizeof(arr[0]); //calculates number of rows in 2D array
    int colums = sizeof(arr[0])/sizeof(arr[0][0]); //calcolates number of rows in array

    for(int i = 0; i < rows; i++){ 
        for(int j = 0; j < colums; j++){
            std::cout << arr[i][j] << "\n"; //this if how you would write down all the elements from 2D array
        }
    }
    
    
    return 0;
}