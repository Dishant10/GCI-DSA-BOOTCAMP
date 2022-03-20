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
    int sum=0;
    for(int ele:arr){
        
       sum=sum+ele;
    }
    cout<<"\n Total sum = "<<sum;
}