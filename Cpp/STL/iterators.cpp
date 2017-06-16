#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;

    for ( int i = 1; i < 10; i += 1 ) {			// insert values
        v.push_back( i );
    } // for

    vector<int>::iterator iter1;
    for ( iter1 = v.begin(); iter1 != v.end(); iter1++ ) { // print values left to right (forward)
        cout << *iter1 << ' ';
    } // for
    cout << endl;

    vector<int>::reverse_iterator iter2;
    for ( iter2 = v.rbegin(); iter2 != v.rend(); iter2++ ) { // print values right to left (reverse)
        *iter2 -= 1;					// decrement vector value
        cout << *iter2 << ' ';
    } // for
    cout << endl;

    vector<int>::const_iterator iter3;			// print values left to right (forward)
    for ( iter3 = v.begin(); iter3 != v.end(); iter3++ ) {
        //*iter3 -= 1;					// CANNOT decrement vector values because iterator const
        cout << *iter3 << ' ';
    } // for
    cout << endl;
}