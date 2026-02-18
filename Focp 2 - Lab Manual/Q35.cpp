#include<iostream>
using namespace std;
int main(){
 
    int matrix1[3][3];
    
    int i,j;
    cout<<"Enter matrix 1:\n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>matrix1[i][j];
        }
    }
        int result[3][3];
        
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){

                    result[j][i] = matrix1[i][j];
                
        }
    }
        cout<<"transpose matrix is:\n";
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                cout<<result[i][j]<<" ";
            }
            cout<<endl;
        }
        
    return 0;
}