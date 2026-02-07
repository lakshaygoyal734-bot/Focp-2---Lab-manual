#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter value of a and b:\n";
    cin>>a>>b;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"a is: "<<a<<endl;
    cout<<"b is: "<<b;
    return 0;
}