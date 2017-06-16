#include <iostream>
#include <string>

using namespace std;


int main()
{
    string s = "krishna";
    
    s.append(" is god");
    cout << s << endl;
    
    cout << s.length() << endl;
    cout << s.size() << endl;
    
    // substring operation
    //              index, length
    cout << s.substr(3,6) << endl;
    
    
    // different types of insert
    string s1 = "king";
    string s2 = "abc";
    char c = 'c';
    //      index, number of times, a char
    s1.insert(2, 2, c);
    cout << s1 << endl;
    //       index, c string
    s1.insert(2, "a");
    cout << s1 << endl;
    //       index, c++ string
    s1.insert(2, s2);
    cout << s1 << endl;

    // erase
    //      index, number of char to erase
    s1.erase(2, 6);
    cout << s1 << endl;


}
