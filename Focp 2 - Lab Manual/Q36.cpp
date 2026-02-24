#include<iostream>
using namespace std;

int main(){

    int m,n,p,q,i,j;
    
    cout<<"Enter rows of matrix 1: ";
    cin>>m;
    cout<<"Columns: ";
    cin>>n;
    int mat1[m][n];
    cout<<"Enter matrix: ";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
          cin>>mat1[i][j];
        }
    }

    cout<<"Enter rows of matrix 2: ";
    cin>>p;
    cout<<"Columns: ";
    cin>>q;
    int mat2[p][q];
    cout<<"Enter matrix: ";
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
          cin>>mat2[i][j];
        }
    }
    if(p!=n){
        cout<<"Multiplication not possible";
    }

   else if(p==n){
 
    int result[m][q];
    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            for(int k=0;k<n;k++){
            result[i][j]=mat1[i][k]*mat2[k][j];
            }
        }
    }
    cout<<"Multiplication matrix is:\n";
    for(i=0;i<q;i++){
        for(j=0;j<q;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
   }
    return 0;
}