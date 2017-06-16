#include <iostream>

using namespace std;

int main() {
    
    // basically const references are used when we dont want the variable passed as 
    // reference changed. suppose by passing a const reference parameter to a function we wont
    // be able to chance the parameter. 
    
    int b = 6;
    int &non_const_ref = b;    //created reference non_const_ref and assigned b to it
    const int &const_ref = b;  //created const reference const_ref and assigned b to it
    b = 9;                     //we can change value of b as its not const int
    non_const_ref = 7;         //we can also change value of b trough non_const_ref
    //const_ref = 3;           //however we cant change value of a, as its declared as const reference
    cout<< const_ref;
    
}
