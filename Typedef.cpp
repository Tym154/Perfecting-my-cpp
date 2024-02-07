#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t; 

//instead of me typing this:
//std::vector<std::pair<std::string, int>>
//we can shorten it to something easy and readable like: pairlist_t
//at the end of the name we choose we type "_t" so when someone rewies your code he knows it is typedef

//typedef std::vector<std::pair<std::string, int>> pairlist_t; 

//but in my opinion (using) is better because it is more compatible with templates:

using pairlist_t = std::vector<std::pair<std::string, int>>; 

int main() {

    //then it looks like this:
    pairlist_t x; 

    //instead of like this:
    //std::vector<std::pair<std::string x;

    return 0;
}