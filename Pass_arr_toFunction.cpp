#include <iostream>

double getSum(double x[], int size); //firstly you need to define in function the required input is array using []

int main() {
    double Prizes[] = {5, 4.99, 3, 4};
    int size = sizeof(Prizes)/sizeof(double);
    double total = getSum(Prizes, size); //but when you call the function you just pass the adress without brackets

    std::cout << size << "\n";

    std::cout << total;

    return 0;
}

double getSum(double x[], int size){
    double total = 0;

    for(int i = 0; i < size; i++){
        total += x[i];
    }

    return total;
}