#include <iostream>

void Bakepizza();
void Bakepizza(std::string topping1);
void Bakepizza(std::string topping1, std::string topping2);

int main() {

    //more function can have same name, there is something called function signature
    //that means they are allocated by the inputs they require

    std::string topping1 = "peperoni", topping2 = "mushroom";

    Bakepizza(topping1, topping2);

    return 0;
}

void Bakepizza(){
    std::cout << "here is your pizza \n";
}

void Bakepizza(std::string topping1){
    std::cout << "here is your " << topping1 <<" pizza \n";
}

void Bakepizza(std::string topping1, std::string topping2){
        std::cout << "here is your " << topping1 << " and " << topping2 << " pizza \n";

}
