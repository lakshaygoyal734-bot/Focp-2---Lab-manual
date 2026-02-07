/*A shopkeeper wants to calculate the total bill amount after applying a 20% discount on the purchase.
Implement a solution to accept item no., quantity, and unit price. Compute the amount and apply 20% discount.*/
#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter item number: ";
cin>>a;
cout<<"Enter quantity: ";
cin>>b;
cout<<"Enter amount: ";
cin>>c;
int amount=b*c;
float disc= amount - (20*amount)/100;
cout<<"Discounted price: "<<disc;

    return 0;
}