#include<iostream>
using namespace std;
int main(){

    int stock[5];
    cout<<"Enter stock price: ";
    for (int i=0; i<5; i++){
        cin>>stock[i];
    }
    int maxValue = stock[0];
    int temp = -2147483648;
    for(int i=1; i<5; i++){
        if(stock[i]>maxValue){
            temp=maxValue;
            maxValue = stock[i];
        }
        else if(stock[i]>temp && stock[i]<maxValue){
            temp = stock [i];
        }
    }
    cout<<"Maximum stock price: "<<maxValue<<endl;
    if(temp==-2147483648){
        cout<<"No second max value";
    }
    else{
    cout<<"Second maximum stock price: "<<temp;
    }
    return 0;
}