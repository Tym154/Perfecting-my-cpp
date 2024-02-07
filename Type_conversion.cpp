#include <iostream>

int main() {
    //type conversion -> changing the data type of some value
    
    double x = (int) 5.11; //here im saving int 5.11 into double 
                           //the integer cuts off the decimal portion and than the 5 is converted into doble

    //implicit = automatic (if i would save 100 to char the char would equal to d by ascii chart)
    //explicit = that is what i showed you on line 5
    std::cout << x;
}