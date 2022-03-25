#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter row and column for a square matrix(only odd rows and columns) \n";
    cout<<"Rows and Columns = ";
    cin>>n;
    int matrix[n][n];
    cout<<"Enter matrix  \n";
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            int number;
            cin>>number;
            matrix[i][j]=number;
        }
    }
cout<<endl;

cout<<"The entered matrix ";
cout<<"\n";

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<"\n";

cout<<"Elements of middle row = ";
int row=n/2;
for(int i=0;i<n;i++){
cout<<matrix[row][i]<<" ";
} 
int column=n/2;
cout<<"\n Elements of middle column = ";
for(int i=0;i<n;i++){
cout<<matrix[i][column]<<" ";
} 
}