#include <iostream>

using namespace std;

int main(){
    
    // if we initialize array like this, all elements will be assigned to 0
    int* arr = new int[10]();
    
    cout << arr[4] << endl;
}
