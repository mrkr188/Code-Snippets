#include <iostream>

using namespace std;

// https://stackoverflow.com/questions/8767166/passing-a-2d-array-to-a-c-function

int getVal(int (*A)[3], int i, int j){
    return A[i][j];
}

int main(){
    
    int A[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    
    cout << getVal(A,1,2) << endl;
}


