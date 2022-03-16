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
cout<<"Numbers that are stored in the array \n";
for(int i=0;i<10;i++)
{
    cout<<arr[i];
}

}