#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[10];
for(int i;i<6;i++)
{
    int number;
    cin>>number;
    arr[i]=number;
}
int reversedArray[6];
int i=5,j=0;
while(i>=0 && j<6)
{
    reversedArray[j]=arr[i];
    i--;
    j++;
}
int count=0;
for(int i=0;i<6;i++)
{
    if(reversedArray[i] != arr[i])
    {
        count=1;
        break;
    }
}
if(count==0)
{
    cout<<"The string reads the same from front and back.";
    cout<<endl;
}
else {
    cout<<"The string does not read the same content from front and back.";
}
}
