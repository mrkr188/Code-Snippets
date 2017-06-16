#define NDEBUG
#include <assert.h>

#include <iostream>

using namespace std;

int main(){
    
    int a = 10;
    
    // assert is ignored if NDEBUG is present before #include <assert.h>
    assert(a!=10);
    cout << a;
    
    return 0;

}