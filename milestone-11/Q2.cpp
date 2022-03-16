#include<bits/stdc++.h>
using namespace std;
int main(){
   
   int arr[10];
   cout<<"Enter the numbers you want to be stored in an array.";
   for(int i=0;i<10;i++)
{ 
    int number;
    cin>>number;
    arr[i]=number;
}
int number;
int count=0;
cout<<"Enter the number you want to find";
cin>>number;
for(int i=0;i<10;i++)
{
    if(number==arr[i]){
       cout<<"Number found at  "<<i;
       count++;
       break;
    }
}
  if(count == 0){
      cout<<"Number you entered not found";
  }
}