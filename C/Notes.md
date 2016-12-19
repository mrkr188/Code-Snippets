# C++ Notes  
  
## Basics
  
### Scope
  
* C++ uses lexical scoping or static scope. 
  
```cpp
#include<iostream>

using namespace std;

int x = 5;

int f(){
    return x;
}

int g(){
    int x = 10;
    return f();  
    //x in f() is always bound to the variable when its declared. Lexical scoping              
    //method gets its definition in the environment it is declared, not in the one is called.
}


int main()
{
    int z;

    z = f();
    cout<<z<<endl;

    z = g();
    cout<<z<<endl;

}
```
  
### Pointers
  
 * 
  
### References
  
* 
  
### Arrays  

* 
  
### C String  
  
* 
  
## Collections
  
### String
  

  
### Vector
  