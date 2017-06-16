#include <iostream>
#include <string>
#include <set>

using namespace std;

// set is implementd as red black trees. insertion, removal, search are log(n)
// set iterators are of type bidirectional iterator 

// print set
void printSet(set<int> &s){
    for(set<int>::iterator itr = s.begin(); itr != s.end(); ++itr){
	    cout<< *itr << endl;
	}
}

int main()
{
    
    set<int> s;
    
    s.insert(10);
    s.insert(12);
    s.insert(3);
    s.insert(13);
    s.insert(5);
    
    // another form of map initialization
	set<int> s2(s.lower_bound(2), s.upper_bound(10));
	cout << "set s2" << endl;
	printSet(s2);
	
	// find returns an iterater
	// erase erases element
	s.erase(s.find(3));
	s.erase(5);
	cout << "set s after erasing 3 and 5" << endl;
	printSet(s);
	
	

}
