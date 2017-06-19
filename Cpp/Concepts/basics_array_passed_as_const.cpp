#include <iostream>

using namespace std;

void foo(const int a[]){
    // cant modify array as it is passed as constant
    a[2] = 5;
}

int main()
{
    int a[] = {1,2,3,4,5,6,7};
    
    foo(a); // gives error
}
