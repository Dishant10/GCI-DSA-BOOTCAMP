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
cout<<"Enter another matrix of same size \n ";
int matrix2[m][n];
    cout<<"Enter matrix  \n";
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            int number;
            cin>>number;
            matrix2[i][j]=number;
        }
    }

    cout<<"The entered matrix 1 ";
cout<<"\n";

    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<"\n";

  cout<<"The entered matrix 2 ";
cout<<"\n";

    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<"\n";

int sum=0;
   for(int i=0;i<m;++i){
       for(int j=0;j<n;++j){
            sum=sum+matrix[i][j]+matrix2[i][j];
       }
   }

   cout<<"Sum of the entered matrix is = "<<sum;


}