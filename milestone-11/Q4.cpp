#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10];
      for(int i=0;i<10;i++)
{ 
    int number;
    cin>>number;
    arr[i]=number;
}

int newArray[10];
int i=9,j=0;
while(i>=0 && j<10)
{
    newArray[j]=arr[i];
    i--;
    j++;
}

cout<<endl;
for(int i=0;i<10;++i)
{
    cout<<newArray[i]<<" ";
}
}