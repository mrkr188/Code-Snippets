#include <iostream>
#include <string>
#include <map>

using namespace std;

// map is implementd as red black trees. insertion, removal, search are log(n)
// map iterators are of type bidirectional iterator 

// print map
void printMap(map<int, string> &m){
    for(map<int, string>::iterator itr = m.begin(); itr != m.end(); ++itr){
	    cout<< itr->first << " " << itr->second << endl;
	}
}

int main()
{
    
    map<int, string> a;
    
    a[1] = "one";
    a[2] = "two";
    a[3] = "three";
    a[4] = "four";
    // add elements to map using insert
    // 
    a.insert(make_pair(6, "six"));
    a.insert(make_pair(5, "five"));
    
    printMap(a);
    cout << endl;
    
    // this doesnt change the value of key 5 to 'fivoooooo'
    // if the key we are trying to insert is already present in the map, insert
    // will not update the value of that key
    a.insert(make_pair(5, "fivoooooo"));
    
    cout << a[5] << endl;
    cout << endl;
    
    // square brakets does the update unlike insert
    a[5] = "fiveoooooo";
    
    cout << a[5] << endl;
    cout << endl;
    
    
    // another form of map initialization
	map<int, string> m(a.lower_bound(2), a.upper_bound(3));
	
	printMap(m);
	cout << endl;
	
	

}
