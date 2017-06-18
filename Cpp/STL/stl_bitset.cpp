#include <iostream>
#include <string>
#include <bitset>

int main ()
{
    
    // initialize bitset using stl string
    std::bitset<4> foo (std::string("0001"));
    
    // flip takes an int. the index at that int flips. 
    // if no argument is given, then all elements get flipped.
    std::cout << foo.flip(2) << '\n';     // 0101
    std::cout << foo.flip() << '\n';      // 1010
    
    return 0;
}
