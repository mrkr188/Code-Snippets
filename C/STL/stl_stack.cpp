#include <algorithm>
#include <iostream>
#include <stack>

// Stack is first in last out

using namespace std;
 
int main()
{
    stack<int> s;
 
    s.push(25);
    s.push(13);
    s.push(11);
    s.push(15);
    
    cout << "size  " << s.size() << endl;


    while(!s.empty()){
        // top - returns element on top
        cout << s.top() << endl;
        // pops element on top
        s.pop();
    }

}