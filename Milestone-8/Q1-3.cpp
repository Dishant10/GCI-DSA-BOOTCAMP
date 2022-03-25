#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter row and column \n";
    cout<<"Row =  ";
    cin>>m;
    cout<<"Enter Column = ";
    cin>>n;
    int matrix[m][n];
    cout<<"Enter matrix  \n";
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            int number;
            cin>>number;
            matrix[i][j]=number;
        }
    }
cout<<endl;

cout<<"The entered matrix ";
cout<<"\n";

    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<"\n";

cout<<"\n Row Multiplicatoin \n";
int rowMultiply=1;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            rowMultiply=rowMultiply*matrix[i][j];
        }
        cout<<"Row "<<i+1<<" Multiply = "<<rowMultiply<<endl;
        rowMultiply=1;
    }


    
}