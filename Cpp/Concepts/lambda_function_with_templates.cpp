#include<bits/stdc++.h>
using namespace std;

// template with lambda function
template<typename func>
void square(func f, const vector<int>& v){
    for(auto i : v){
        cout << f(i) << " " ;
    }
    cout << endl;
}

int main()
{
    // lambda function
    auto f = [](int x){return x*x;};
    
    vector<int> v{1,2,3,4,5,6,7,8,9};
    
    square(f,v);
    
    return 0;
}
