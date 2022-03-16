#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10];
      for(int i=0;i<5;i++)
{ 
    int number;
    cin>>number;
    arr[i]=number;
}
int multiplyConstant=1,sumConstant=0;
for(int i=0;i<5;++i)
{
   multiplyConstant=multiplyConstant*arr[i];
   sumConstant=sumConstant+arr[i];
}
cout<<multiplyConstant<<endl;
cout<<sumConstant<<endl;
}