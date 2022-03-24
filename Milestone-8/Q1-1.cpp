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

cout<<"\n Element sum of the entered matrix";
int sum=0;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            sum=sum+matrix[i][j];
        }
        
    }

cout<<"\n"<<sum<<"\n";

cout<<"\n Row Sum \n";
int rowSum=0;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            rowSum=rowSum+matrix[i][j];
        }
        cout<<"Row "<<i+1<<" Sum = "<<rowSum<<endl;
        rowSum=0;
    }

    cout<<"\n Column Sum \n";
int columnSum=0;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            columnSum=columnSum+matrix[j][i];
        }
        cout<<"Column "<<i+1<<" Sum = "<<columnSum<<endl;
        columnSum=0;
    }
    

    cout<<"\n Transpose of a matrix";
    int transposeMatrix[n][m];
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            transposeMatrix[j][i]=matrix[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
           cout<<transposeMatrix[i][j]<<" ";
        }
        cout<<endl;
    }

}