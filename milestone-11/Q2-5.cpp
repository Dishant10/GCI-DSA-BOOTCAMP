#include<bits/stdc++.h>
using namespace std;
int main(){
     int size;
    cout<<"Enter the size of the array \n";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        int number;
        cin>>number;
        arr[i]=number;
    }
    int max=INT_MIN;
    for(int ele:arr){
        if(ele>max){
            max=ele;
        }
    }
    int secMax=INT_MIN;
    for(int ele:arr){
    if(ele>secMax && ele != max)
    {
        secMax=ele;
    }
    }
    cout<<endl;
    cout<<"Second maximum element = "<<secMax;
}   