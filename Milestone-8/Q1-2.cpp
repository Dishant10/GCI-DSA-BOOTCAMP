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
    
    int leftSum=0;
 for(int i=0;i<m;i++){
     for(int j=0;j<n;++j){
         if(i==j){
             leftSum=leftSum+matrix[i][j];
         }
     }
 }

 cout<<"Left Diagonal Sum = "<<leftSum<<endl;

 cout<<"\n";
    
    int rightSum=0;
    int j=n-1;
 for(int i=0;i<m;i++){    
    rightSum=rightSum+matrix[i][j];
    j=j-1;
 }

 cout<<"Right Diagonal Sum = "<<rightSum<<endl;

}