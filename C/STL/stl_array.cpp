#include <iostream>
#include <array>
#include <iterator>

using namespace std;

// printing array
template <class T, std::size_t N>
ostream& operator<<(ostream& o, const array<T, N>& arr)
{
    copy(arr.cbegin(), arr.cend(), ostream_iterator<T>(o, " "));
    return o;
}

int main(){
    
    array<int, 3> a{1,2,3};  // c++ 11 onwards
    cout << a << endl;
    
    
}
