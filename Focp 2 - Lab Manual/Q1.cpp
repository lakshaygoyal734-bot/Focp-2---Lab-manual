/*A teacher wants to calculate the average marks of three students to determine the class performance.
Implement a solution to accept three numbers and compute their average.*/

#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter marks of first student: ";
cin>>a;
cout<<"Enter marks of second student: ";
cin>>b;
cout<<"Enter marks of third student: ";
cin>>c;
int d = (a+b+c)/3;
cout<<"Average is " <<d;
    return 0;
}