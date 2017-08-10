#include<bits/stdc++.h>
using namespace std;

// The Rule of Three: If a class has any of the following three member functions:
//  • Destructor
//  • Copy Constructor
//  • Assignment Operator
// Then that class should have all three of those functions.

class Vec{
public:
    int* arr;
    int cap;
    int size;

public:
    // Vec constructor
    Vec(int cap=0, int size=0): cap(cap), size(size) {
        arr = new int[cap];
        generate(arr, arr+size, rand);
    }

    // utility function for copy constructor
    void copyOtther(const Vec& other){
        size = other.size;
        cap = other.cap;
        arr = new int[cap];
        copy(other.arr, other.arr + other.size, arr);
    }

    // copy constructor
    Vec(const Vec& other){
        copyOtther(other);
    }

    // utility function for cleaning
    void clear(){
        delete [] arr;
        arr = nullptr;
        size = cap = 0;
    }

    // destructor
    ~Vec(){
        clear();
    }

    // assignment operator
    Vec operator = (const Vec& other){
        if(this != &other){
            clear();
            copyOtther(other);
        }
        return *this;
    }


};

int main()
{

    Vec v(3);

    // assignment operator
    Vec v1 = v;

    // copy constructor
    Vec v2(v1);

    cout << v.arr[0] << endl;
    cout << v.arr[1] << endl;
    cout << v.arr[2] << endl;
    cout << v1.arr[0] << endl;
    cout << v1.arr[1] << endl;
    cout << v1.arr[2] << endl;
    cout << v2.arr[0] << endl;
    cout << v2.arr[1] << endl;
    cout << v2.arr[2] << endl;


}
