#include<bits/stdc++.h>
using namespace std;

// template with lambda function
template<typename func>

void filter(func f, const vector<int>& v){
    for(auto i : v){
        if(f(i))
            cout << i << " " ;
    }
    cout << endl;
}

int main()
{
    
    vector<int> v{1,2,3,4,5,6,7,8,9};
    
    // prints only even numbers
    filter([](int x){return x%2 == 0;}, v);
    
    // local variables can be used in lambda functions also
    // & tells the compiler we need to capture variables
    // if we dont use & we get an error saying as shown below
    // error: 'y' is not captured
    
    int y=4;
    filter([&](int x){return x>y;}, v);
    
    return 0;
}


