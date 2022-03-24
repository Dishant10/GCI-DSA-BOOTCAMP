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
    int reversedArray[size];
    int i=size-1,j=0;
    while(i>=0 && j<size){
    reversedArray[j]=arr[i];
    i--;
    j++;
    }
    cout<<"Reversed array \n";
    for(int ele:reversedArray){
        cout<<ele;
    }
}