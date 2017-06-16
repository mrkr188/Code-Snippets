#include <algorithm>
#include <iostream>
#include <queue>

// Queue is first in first out

using namespace std;
 
int main()
{
    queue<int> q;
 
    q.push(25);
    q.push(13);
    q.push(11);
    q.push(15);
    
    cout << "front " << q.front() << endl;
    cout << "back  " << q.back() << endl;
    cout << "size  " << q.size() << endl;

    while(!q.empty()){
        // top - returns element on top
        cout << q.front() << endl;
        // pops element on top
        q.pop();
    }

}