#include <iostream>

using namespace std;

template<typename T, size_t N>
size_t arraysize(T (&array)[N]) {
    return N;
}

int size_10(int (&a)[10]){
  return sizeof(a)/sizeof(a[0]);
}

template<typename T, int N>
int arraysize1(T (*x)[N])
{
    return N;  
}

int main()
{

  int a[10] = {1,2,1,1,1,1,1,1,1,1};
  
  int *p = new int[10];
  p = a;
  
  cout << arraysize(a) <<endl;
  
  cout << size_10(a) << endl;
  
  // remember here we need to give &a, that is the address of first element in array
  cout << arraysize1(&a) <<endl;
  
  // http://www.geeksforgeeks.org/whats-difference-between-array-and-array-for-int-array5/
  
}
