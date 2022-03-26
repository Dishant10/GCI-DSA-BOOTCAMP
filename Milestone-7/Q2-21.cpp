#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"\n Enter the size of the array \n";
    cin>>size;

int arr[size];
cout<<"enter elements in an array \n";
for(int i=0;i<size;++i){
    int number;
    cin>>number;
    arr[i]=number;
}
cout<<"Enter the number of times you want to rotate the array to left";
int leftRotate;
cin>>leftRotate;
while(leftRotate>0){
    int first=arr[0];
    for(int i=0;i<size-1;++i){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    arr[size-1]=first;
    --leftRotate;
}
cout<<"\n";

for(int ele:arr){
    cout<<ele;
}
}