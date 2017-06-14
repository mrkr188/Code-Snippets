# C++ Notes  
  
## Basics
  
### Pointers
  
 * 
  
### Dynamic allocation  
  
Dynamically allocating single variables  
```cpp
int *pnValue = new int; // dynamically allocate an integer
*pnValue = 3;
delete pnvalue;  		// unallocate memory assigned to pnValue
pnVAlue = 0; 			// assign pointer to 0
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

* Passing 2D arrays into function  
You should at least specify the size of your second dimension.

```cpp
int array[][5] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8, 9 }, { 10, 11, 12, 13 } };
```

There is also an error which is often repeated. To pass a 2D array as argument, you have to use the following types:

```cpp
void myFuntion(int (*array)[SIZE2]);
// or
void myFuntion(int array[SIZE1][SIZE2]);
```
  
### C String  
  
* 
  
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
  
## IO Streams
  
C++ provides both the formatted and unformatted IO functions. In formatted or high-level IO, bytes are grouped and converted to types such as int, double, string or user-defined types. In unformatted or low-level IO, bytes are treated as raw bytes and unconverted.  
  
Formatted IO operations are supported via overloading the stream insertion (<<) and stream extraction (>>) operators, which presents a consistent public IO interface.  
  
Examples:
* `cin >> str`  -  formatted operation
* `cin.get()`    -  unformatted operation
  
## Collections
  
### String
  

  
### Vector
  
