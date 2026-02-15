#include<iostream>
using namespace std;
int main(){

   string password;
   cout<<"Enter a password: ";
   cin>>password;

   bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;

   if(password.length()<8)
   {
    cout<<"Password should have minimum 8 characters";
   }
   else{
   for(int i=0; i<password.length();i++)
   {
    char ch = password [i];
    
    if(ch>= 'A' && ch<= 'Z' ){
        hasUpper = true;
    }
    else if(ch>= 'a' && ch<= 'z'){
        hasLower = true;
    }
    else if(ch>= '0' && ch<= '9'){
        hasDigit = true;
    }
    else {
        hasSpecial = true;
    }
   }
   if (hasUpper && hasLower && hasDigit && hasSpecial ){
    cout<<"Password created";
   }
   
   else{
    cout<<"Password must contain an uppercase, lowercase, digit, special character";
   }
}

    return 0;
}
