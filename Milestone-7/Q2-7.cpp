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
    int countNeg=0;
    for(int ele:arr){
        if(ele<0){
            countNeg++;
        }
    }
    cout<<"Total number of negative elements = "<<countNeg;
    
}