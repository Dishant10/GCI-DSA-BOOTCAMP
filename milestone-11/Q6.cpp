#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;++j)
        {
            int number;
            cin>>number;
            arr[i][j]=number;
        }
    }


for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;++j)
        {
            
            cout<<arr[i][j]<<" ";
        }
cout<<"\n";
}
}