#include <iostream> 

using namespace std;


// passed pointer to int as function parameter
void foo11(int* p){
    *p = 11;
}

// passed reference to (pointer to int) as function parameter
void foo12(int* &p){
    *p = 12;
}


int main (){
    
    int x =10;
    int *p1 = &x;
    
 
 // both functions will change change the value which is hold by pointer. 
 // so basically reference to pointer to something isnt really all that useful
 
    foo11(p1);
    cout << *p1 << endl;
    
    
    foo12(p1);
    cout << *p1 << endl;

    
}
