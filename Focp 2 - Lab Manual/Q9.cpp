#include<iostream>
using namespace std;
int main(){
char ch;
cin>>ch;
if(ch>= '0' && ch<= '9'){
cout<<"Number";
}
else if(ch>= 'a' || ch<= 'z' ){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch=='u' ){
        cout<<"Vowel";
    }
    else {
        cout<<"Consonant";
    }
}
else {
    cout<<"Special Character";
}

    return 0;
}