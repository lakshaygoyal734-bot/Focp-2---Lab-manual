#include<iostream>
using namespace std;
int main(){
 
    int matrix1[3][3];
    cout<<"Enter matrix 1:\n";
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
        cin>>matrix1[i][j];
    }
}
 int matrix2[3][3];
    cout<<"Enter matrix 2:\n";
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
        cin>>matrix2[i][j];
    }
}
int result[3][3];
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        result[i][j]=matrix1[i][j] + matrix2[i][j];
    }
}
cout<<"Sum is:\n";
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<result[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}