#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter value of a: ";
    cin>>a;

    cout<<"Enter value of b: ";
    cin>>b;

    int c;
    c=b;
    b=a;
    a=c;

    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
}