#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>
#include <sstream>


using namespace std;

string GetLine() {
    string result;
    getline(cin, result);
    return result;
}

int GetInteger() {
    while(true) { 
        // Read input until user enters valid data
        stringstream converter;
        converter << GetLine();
        /* Try reading an int, continue if we succeeded. */
        int result;
            if(converter >> result) {
                string remaining;
                if(converter >> remaining) // Something's left, input is invalid
                    cout << "Unexpected character: " << remaining << endl;
                else
                    return result;
            } 
            else
                cout << "Please enter an integer." << endl;
        cout << "Retry: ";
    }
}



int main()
{
	int x;
	
	x = GetInteger();
	
	cout << "x = " << x;
}
