#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){
    
    // construct string stream (buffer) 
    stringstream sstr;
    
    string str = "hello world";
    
    // Write into string buffer
    sstr << str;
    // Get contents
    cout << sstr.str();
    
    
    // construct output string stream (buffer) 
    ostringstream sout;  
    
    // Write into string buffer
    sout << "apple" << endl;
    sout << "orange" << endl;
    sout << "banana" << endl;
    // Get contents
    cout << sout.str() << endl;
    
    
    // construct input string stream (buffer)
    istringstream sin("123 12.34 hello");
     
    // Read from buffer
    int i;
    double d;
    string s;
    sin >> i >> d >> s;
    cout << i << "," << d << "," << s << endl;
    
}