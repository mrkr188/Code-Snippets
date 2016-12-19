# C++ Notes  
  
## Basics
  
### Scope
  
C++ uses lexical scope or static scope. 
  
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
  
### Dynamic allocation  
  
```cpp
int *pnValue = new int;   // dynamically allocate an integer
*pnValue = 3;
delete pnvalue;  // unallocate memory assigned to pnValue
pnVAlue = 0; 
```
Note that the delete operator does not delete the pointer,  it deletes the memory that the pointer points to. Hence pnVAlue = 0. has to be done to remove the address from pnVAlue.

Dynamically allocating arrays  
```cpp
int nSize = 12;
int *pnArray = new int[nSize];
```
  
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
* `cin >> str`  -  formatted operation
* `cin.get()`    -  unformatted operation
  
## Collections
  
### String
  

  
### Vector
  