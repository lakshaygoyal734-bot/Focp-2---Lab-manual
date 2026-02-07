#include <iostream>
using namespace std;
int main(){

    int a,b,c;
    cout<<"Enter sides: ";
    cin>>a>>b>>c;
    if (a == 0 || b==0 || c==0){
        cout<<"Not a triangle";
    }
    else if (a+b<= c || b+c<= a || a+c<= b){
       
        cout<<"Not a triangle";
    }
    else if(a==b && b==c && c==a){

        cout<<"Equilateral";
    }
    else if (a==b || b==c || c==a){

        cout<<"Isosceles";
    }
    else {
        cout<<"scalene";
    }

    return 0;
}