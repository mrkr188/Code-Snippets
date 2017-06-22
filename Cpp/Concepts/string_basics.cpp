#include <string>
#include <cstring>
#include <iostream>

using namespace std;

// http://www.geeksforgeeks.org/storage-for-strings-in-c/

 
int main()
{
    string s = "king";
    
    char c[] = "cat";
    
    int *p(0); //null pointer p
    
    cout << sizeof(p) << endl;
    
    cout << sizeof(s) << endl;     //gives length of a pointer  
    cout << s.length() << endl;    //gives length without including null terminator
    cout << s[3] << endl;
    
    //std::string does not contain null terminator in th end. 
    //but if you convert this into c string null pointer will be added. 
    
    const char *t = s.c_str();  //here we must use const char* t, as s.c_str() returns const char*
    cout << t << endl;
    cout << t[3] << endl;

    
    cout << sizeof(c) << endl;    //gives length including null terminator
    cout << strlen(c) << endl;    //gives length without including null terminator, just like s.length()
    cout << static_cast<int>(c[3]) << endl;  //null terminator has 0 ascii value
    
    // cout << length(s);  no length in C
 
    return 0;
}
