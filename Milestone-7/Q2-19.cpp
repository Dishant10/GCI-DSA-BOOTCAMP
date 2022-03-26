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

cout<<"Sorted in ascending order";
for(int i=0;i<size;++i){
    for(int j=i+1;j<size;++j){
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
cout<<"\n";

for(int ele:arr){
    cout<<ele;
}

cout<<"\n";
cout<<"\n Sorted in descending order \n";

for(int i=0;i<size;++i){
    for(int j=i+1;j<size;++j){
        if(arr[i]<arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
for(int ele:arr){
    cout<<ele;
}
}