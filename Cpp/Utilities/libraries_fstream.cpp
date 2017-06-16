// need test.txt file in same folder as this file

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    
    ifstream input("test.txt");
    
    if(!input.is_open()){
        cerr << "Couldn't open the file myfile.txt" << endl;
        return -1;
    }
        
    const int NUM_COLUMNS = 3;
    const int COLUMN_WIDTH = 20;
    
    int intValue;
    double doubleValue;
    
    int k = 0;
    
    // stream operators can be used wherever boolian operation is expected
    while(input >> intValue >> doubleValue) {
        ++k;
        cout << setw(COLUMN_WIDTH) << (k) << " | ";
        cout << setw(COLUMN_WIDTH) << intValue << " | ";
        cout << setw(COLUMN_WIDTH) << doubleValue << endl;
    }
    

    
}