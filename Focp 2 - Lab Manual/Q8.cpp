#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter event ID: ";
cin>>a;
if(a%3==0 && a%5 ==0){
    cout<<"Buzz Fuzz";
}
else if(a%3 == 0){
    cout<<"Buzz";
}
else if(a%5 == 0){
    cout<<"Fuzz";
}

    return 0;
}