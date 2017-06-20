# C++ Notes  
  
## Basics
  
### Pointers
  
 In case of complex variable declarations with pointers, following these steps would help in identifying the variable type. 
 
 Start at the variable, then go right, and left, and right...and so on. More at [this.](https://stackoverflow.com/questions/859634/c-pointer-to-array-array-of-pointers-disambiguation/859676#859676)
 
```cpp
int* arr1[8];
// arr1 is an array of 8 pointers to integers.

int (*arr2)[8];
// arr2 is a pointer (the parenthesis block the right-left) to an array of 8 integers.

int *(arr3[8]);
// arr3 is an array of 8 pointers to integers.
```

  
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

While passing 2D arrays into function, you should at least specify the size of second dimension. To pass a 2D array as argument, you have to use the following types as shown below  

```cpp
// creating 2D array
int array[][5] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8, 9 }, { 10, 11, 12, 13 } };

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
  
