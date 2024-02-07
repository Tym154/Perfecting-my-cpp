#include <iostream>

void sort(double arr[], int size); //defining our sort function

int main() {

    double arr[] = {2, 3, 4, 8, 9, 10, 7, 6, 1, 5}; //some values in the array
    int size = sizeof(arr)/sizeof(arr[0]); //calculating the size of array

    sort(arr, size); //entering the data

    for(int element : arr){
        std::cout << element << "\n"; //this just shows us the sorted array
    }

    return 0;
}

void sort(double arr[], int size){ //linear sort (not the best, like really, dont use it) >but it is the easiest to show this on
    double temp; //we need to create some temporary storage
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){ //those for loops go trought the array
            if(arr[j] < arr[j+1]){ //if element before the another is smaller. we:
                temp = arr[j]; //store the first element to temp
                arr[j] = arr[j + 1]; //the bigger second element moves to the first position
                arr[j + 1] = temp; //and than the second now empty storage gets filled with the temp
            }
        }
    }
}