#include<iostream>
using namespace std;
int sum(int, int);
float sum(float, float);
double sum(double, double);
int main(){

    cout<<sum(5,10)<<endl;
    cout<<sum(5.28f,10.28f)<<endl;
    cout<<sum(5.2859,10.2859)<<endl;

    return 0;
}
int sum(int a, int b){
    cout<<"Integer\n";
    return a+b;
}
float sum (float a, float b){
    cout<<"Float\n";
    return a+b;
}
double sum(double a, double b){
    cout<<"Double\n";
    return a+b;
}