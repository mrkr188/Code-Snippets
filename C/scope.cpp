#include<iostream>
#include <string>

using namespace std;

int x = 5;
void change1(){
    int x;
    x = 100;
}
void change2(){
    x = 4;
}
void test(){
    change1();
    change2();
    {
        int x;
        x = 14;
    }
    {
        x = 25;
    }
    x = 32;
}


int main()
{
    cout<<x<<endl;

    change1();
    cout<<x<<endl;
    change2();
    cout<<x<<endl;
    {
        cout<<x<<endl;
        int x;
        x = 14;
        cout<<x<<endl;
    }
    {
        cout<<x<<endl;
        x = 25;
        cout<<x<<endl;
    }
    cout<<x<<endl;

    x = 32;

    cout<<x<<endl;

}
