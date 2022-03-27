#include<bits/stdc++.h>
using namespace std;
void printSpiral(vector<vector<int>> &mat,vector<int> &ans,int m,int n){
    cout<<"yes1\n";
   int sc=0,sr=0,ec=n-1,er=m-1;
   int dir=0;
   while(sc<=ec && sr<=er){
       cout<<"\nyes2";
       if(dir==0){
           for(int i=sc;i<ec;++i){
               cout<<mat[sr][i];
               ans.push_back(mat[sr][i]);
           }
           sr++;
       }
       else if(dir==1){
           for(int i=sr;i<er;++i){
               ans.push_back(mat[i][ec]);
           }
           ec--;
       }
       else if(dir==2){
           for(int i=er;i>=sr;++i){
               ans.push_back(mat[i][sc]);
           }
           sc--; 
       }
       else if(dir==3){
           for(int i=sc;i<ec;++i){
               ans.push_back(mat[sr][i]);
           }
       }
       sr++;
   }
   dir=(dir+1)%4;

}
int main(){
    cout<<"Enter rows and columns of the matrix \n";
    cout<<"Rows = ";
    int m;
    cin>>m;
    cout<<"Rows = ";
    int n;
    cin>>n;
     vector<vector<int>> mat(m);
     cout<<"Enter the matrix \n";
     for(int i=0;i<m;++i){
         vector<int> v1;
         for(int j=0;j<n;++j){
            int number;
            cin>>number;
            v1.push_back(number);
         }
         mat.push_back(v1);
     }
     cout<<"\n Entered matrix \n";
     for(int i=0;i<mat.size();++i){
         for(int j=0;j<mat[i].size();++j){
             cout<<mat[i][j]<<" ";
         }
         cout<<endl;
     }
     vector<int> ans;
     printSpiral(mat,ans,m,n);
     cout<<endl;
     for(int ele:ans){
         cout<<"yes3";
         cout<<ele<<" ";
     }
  
}