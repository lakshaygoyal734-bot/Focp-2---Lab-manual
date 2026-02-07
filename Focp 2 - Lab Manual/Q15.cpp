#include<iostream>
using namespace std;
int main(){
    int n,i,value, maxsales;
    cout<<"Enter number of entries: ";
    cin>>n;
    if(n<0){
        cout<<"Enter valid input"<<endl;
        return 0;
    }
    cout<<"Enter sales figures: ";
    cin>>maxsales;
    for(i=1; i<n;i++){
        cin>>value;
        if(value>maxsales){
            maxsales=value;
        }
        
    }
    cout<<"Maximum value: "<<maxsales;

    return 0;
}