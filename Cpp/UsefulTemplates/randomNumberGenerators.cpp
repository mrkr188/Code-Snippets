#include <iostream>
#include <random>

using namespace std;

// creates a random number in the range of 0 to max-1
int randInRange(int max){
    return (int)floor(((double)rand() / (double)RAND_MAX)*max);
}

int main(){
    for(int i=0; i<100; ++i){
        cout << randInRange(21) << " ";
    }
}