#include <iostream>

namespace first{  //with help of namespace we can have more values on one variable (we just need to wtrite the variable like: namespace::variable)
    int x = 1;
}

namespace second{
    int x = 0;
}

int main() {
    using namespace second;  //This command automaticaly uses the namespace first for all variables in these brackets
    
    using std::cout; //This command automaticaly uses the namespace std for cout in these brackets
    
    cout << x;

    return 0;
}