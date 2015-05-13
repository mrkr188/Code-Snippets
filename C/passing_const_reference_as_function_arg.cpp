#include<iostream>

using namespace std;

//int fun(int &n) //compiler will give error if we pass const reference.
                  //Cant pass const reference unless argument is const int &n..
int fun(const int  &n){
    return n;
}


int main()
{

    int const i = 10;

    cout<<fun(i);  //passing const int as reference.

    return 0;
}
