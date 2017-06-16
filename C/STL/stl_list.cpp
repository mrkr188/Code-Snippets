#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

// list is implementd as doubly linked lists. insertion, removal are constant time
// list iterators are of type bidirectional iterator 
 
int main()
{
    list<int> l = { 7, 5, 16, 8 };
 
    // Add an integer to the front of the list
    l.push_front(25);
    // Add an integer to the back of the list
    l.push_back(13);
 
    // Insert an integer before 16 by searching
    auto it = find(l.begin(), l.end(), 16);
    if (it != l.end()) {
        l.insert(it, 42);
    }
 
    // Iterate and print values of the list
    for (int n : l) {
        std::cout << n << '\n';
    }
}