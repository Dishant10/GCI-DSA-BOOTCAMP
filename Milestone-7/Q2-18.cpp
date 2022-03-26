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
int searchNumber;
cout<<"Enter the element you want to search";
cin>>searchNumber;
bool flag=false;
for(int ele:arr){
    if(ele==searchNumber){
        cout<<"Number found within the array";
        flag=true;
        break;
    }
    
}
if(flag==false){
    cout<<"The number you're searching for is not present in the array";
}

}