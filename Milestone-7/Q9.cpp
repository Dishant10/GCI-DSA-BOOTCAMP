#include<bits/stdc++.h>
using  namespace std;
int main(){

    int arr[10];
for(int k=0;k<10;++k){
    int number;
    cin>>number;
    arr[k]=number;
}
cout<<"Array stored.";
int frontArray[5];
int rearArray[5];
for(int j=0;j<5;++j)
{ 
    frontArray[j]=arr[j];
}
int i=0,j=5;
while(i<5 && j<10){
rearArray[i]=arr[j];
}
cout<<"Front part of the array \n";
for(int ele:frontArray){
    cout<<ele<<" ";
}
cout<<"Rear part of the array\n";
for(int ele:rearArray){
    cout<<ele<<" ";
}

}
