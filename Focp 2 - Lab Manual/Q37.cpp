#include<iostream>
using namespace std;
int main(){

    string username;
    cout<<"Enter username: ";
    getline(cin, username);
        bool hasSpecial = false;
        bool hasSpace = false;
    for(int i=0;i<username.length();i++){
        char ch = username[i];
        
        if(ch == ' '){

        hasSpace=true;   

        }
        if(ch>='A' && ch<='Z'){
            //do nothing
        }
        else if(ch>='a' && ch<='z'){
            //do nothing
        }
        else if(ch >= '0' && ch <= '9'){
            //do nothing
        }
        else{
            hasSpecial = true;
        }
    }
    if(hasSpecial || hasSpace){
        cout<<"Username not valid";
    }
    else{
        cout<<"Username ready";
    }

    return 0;
}