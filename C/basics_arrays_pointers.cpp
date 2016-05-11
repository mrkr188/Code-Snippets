#include <iostream>

using namespace std;

int size(int (*a)[4]){  //passing "pointer to array - type int(*)[] preserves size of array after passing to function.
    return sizeof(*a);  //note that type int(*)[] is different from int(*)[4]
}                       //so we need to give int (*a)[4]) for size 2 to get size of "*arr"

int main()
{

    int a[4] = {1,2,3,4};
    int* ar[4];      // array of 4 pointers
    int (*arr)[4];   // arr is pointer to array of 4 ints. type of arr is int(*)[4]
    
    cout << sizeof(a) <<endl;
    cout << sizeof(&a) <<endl;
    
    cout << sizeof(ar) <<endl;
    cout << sizeof(*ar) <<endl;
    
    cout << sizeof(arr) <<endl;
    cout << sizeof(*arr) <<endl;   
    
    
    cout << size(arr) <<endl;

    
    return 0;
}

/*

Arrays decay when passed into functions. But arrays in structs and classes don’t decay.

Whenever you declare a function that takes an array parameter, the C standard requires 
the compiler to ignore you and change the parameter to a pointer. So these declarations 
all behave like the first one:

> void func(int *x)
> void func(int x[])
> void func(int x[5])
> typedef int array_plz[5];
> void func(array_plz x)

x will be a pointer to int in all four cases. If you pass an array to func, it will immediately decay 
into a pointer to its first element. (On a 64-bit system, a 64-bit pointer is twice as large as a 32-bit 
int, so your sizeof ratio returns 2.)

This only happens in the context of function parameters. In general, arrays are not the same thing as 
pointers. In contexts other than function parameters, such as variables, struct members, array elements, 
or pointer targets, int *, int[], int[5], and int[7] are all different types with distinguishable 
behaviors; for instance, they have different sizes. (“The first step to learning C is understanding 
that pointers and arrays are the same thing. The second step is understanding that pointers and arrays 
are different.”)

The only purpose of this rule is to maintain backwards compatibility with historical compilers that 
did not support passing aggregate values as function arguments.

This does not mean that it’s impossible to pass an array to a function. You can get around this 
wart by embedding the array into a struct (this is basically the purpose of C++11’s std::array):

struct array_rly {
    int x[5];
};
void func(struct array_rly x)
{
    printf("%zd\n", sizeof(x.x)/sizeof(x.x[0]));  // prints 5 
}

or by passing a pointer to the array:

void func(const int (*x)[5])
{
    printf("%zd\n", sizeof(*x)/sizeof((*x)[0]));  // prints 5 
}

In case the array size isn’t a compile-time constant, you can use the pointer-to-array technique 
with C99 variable-length arrays:

void func(int n, const int (*x)[n])
{
    printf("%zd\n", sizeof(*x)/sizeof((*x)[0]));  // prints n 
}

*/
