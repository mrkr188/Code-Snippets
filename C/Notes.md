# C++ Notes  
  
## Basics
  
### Scope
  
* C++ uses lexical scope or static scope. 
  
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
  
## IO Streams
  
C++ provides both the formatted and unformatted IO functions. In formatted or high-level IO, bytes are grouped and converted to types such as int, double, string or user-defined types. In unformatted or low-level IO, bytes are treated as raw bytes and unconverted. 
Formatted IO operations are supported via overloading the stream insertion (<<) and stream extraction (>>) operators, which presents a consistent public IO interface. 
Examples: 
* cin >> str  -  formatted operation
* cin.get()    -  unformatted operation
  
## Collections
  
### String
  

  
### Vector
  