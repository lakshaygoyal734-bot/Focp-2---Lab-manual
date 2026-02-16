#include<iostream>
using namespace std;
int main(){

    int marks1[5];
    int marks2[5];
    int marks3[5];
    cout<<"Enter marks of student 1: ";
    for(int i=0;i<5;i++){
        cin>>marks1[i];
    }
    cout<<"Enter marks of student 2: ";
    for(int i=0;i<5;i++){
        cin>>marks2[i];
    } 
    cout<<"Enter marks of student 3: ";
    for(int i=0;i<5;i++){
        cin>>marks3[i];
    }
cout<<"marks in 2nd subject of first student: "<<marks1[1]<<endl;
cout<<"marks in 5th subject of third student: "<<marks3[4];

    return 0;
}