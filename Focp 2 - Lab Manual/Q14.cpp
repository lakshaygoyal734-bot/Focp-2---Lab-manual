/*Develop a menu-driven calculator program in C++ to perform basic arithmetic operations.
The program should continue executing based on the user's choice and display the result of each operation.*/
#include <iostream>
using namespace std;
int main(){

    int choice;
    float b,c;
    do{
     cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit"<<endl;
     cout<<"Choose: ";
     cin>>choice;
     if(choice>=1 && choice<=4){
        cout<<"Enter 1st digit: ";
        cin>>b;
        cout<<"Enter 2nd digit: ";
        cin>>c;
     }
     switch(choice){
        case 1:
        cout<<"Answer: "<<b+c<<endl;
        break;
     
        case 2:
        cout<<"Answer: "<<b-c<<endl;
        break;
        
        case 3:
        cout<<"Answer: "<<b*c<<endl;
        break;

        case 4:
        if(c==0){
            cout<<"Not defined"<<endl;
        }
        else{
            cout<<"Answer: "<<b/c<<endl;
        }
        break;
        default:
        cout<<"Invalid Choice!"<<endl;

    }
}while(choice!=5);

    cout<<"Bye bye ;)";

    return 0;
}