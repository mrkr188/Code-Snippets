#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

// printing vector
// use iterators for looping
void printVector(vector<int>& v){
    for (vector<int>::const_iterator i = v.begin(); i != v.end(); ++i)
        cout << *i << ' ';
    cout<< endl;
}

int main()
{
    vector<int> v { 9, 7, 5, 3, 1 };  // c++ 11 onwards
    printVector(v);
    
    // insert at a position in vector - prefarably dont use, not efficient
    v.insert(v.begin()+2, 11); // inserts 11 at index 2
    printVector(v);
    
    // similarly erase
    v.erase(v.begin()+2);
    printVector(v);
    
    // accessing elements of array
    cout << v[2] << endl;     // no bounds checking
    cout << v.at(3) << endl;  // does bounds checking
    
    // push and pop from end of vector
    v.push_back(11);
    printVector(v);
    v.pop_back();
    printVector(v);
    
    // size
    cout << v.size() << endl;
    
    // capacity - max num of elements that can be inserted
    cout << v.capacity() << endl;
    
    // checks if vector is empty
    cout << boolalpha << v.empty() << endl;
    
    // resize
    // elemends added in the end takes default values, for int its 0
    v.resize(10); 
    printVector(v);
    // second argument specifies values of added elements
    v.resize(15,1);
    printVector(v);
    
    // another way to print a vector
    // prints an extra , in the end
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, ", "));
    
    // clear vector
    v.clear();
    printVector(v);
    

    
    //
    cout << "The End" << endl;

}