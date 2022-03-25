#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l;
    cout<<"Enter rows and column for the first matrix \n ";
    cout<<"Rows = ";
    cin>>n;
    cout<<"Columns = ";
    cin>>l;
    int matrix1[n][l];
    for(int i=0;i<n;++i){
        for(int j=0;j<l;++j){
          int number; 
        cin>>number;
        matrix1[i][j]=number; 
        }
       
    }
    cout<<"\n Enter rows and columns for the secod matrix (Number of Row of this matrix should be equal to the number of column of first matrix )\n ";
    int m;
    
    cout<<"Columns = ";
    cin>>m;


int matrix2[l][m];
    for(int i=0;i<l;++i){
        for(int j=0;j<m;++j){
          int number; 
        cin>>number;
        matrix2[i][j]=number; 
        }
    }

    cout<<"\n Entered matrices \n";
    cout<<"\n Matrix 1  \n";
    for(int i=0;i<n;++i){
     for(int j=0;j<l;++j){
         cout<<matrix1[i][j]<<" ";
         }
         cout<<endl;
    }


cout<<"\n Matrix 2  \n";
    for(int i=0;i<l;++i){
     for(int j=0;j<m;++j){
         cout<<matrix2[i][j]<<" ";
         }
         cout<<endl;
    }

int multiplyMatrix[n][m];
for(int i=0;i<n;++i){
    for(int j=0;j<m;++j){
        multiplyMatrix[i][j]=0;
    }
}
for(int i=0;i<n;++i){
    for(int j=0;j<m;++j)
    {
        for(int k=0;k<l;++k){
            multiplyMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
        }
    }
}

cout<<"\n Matrix after multiplication \n ";
for(int i=0;i<l;i++){
    for(int j=0;j<l;++j){
        cout<<multiplyMatrix[i][j]<<" ";
    }
    cout<<endl;
}

}