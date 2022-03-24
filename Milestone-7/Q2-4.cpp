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
    int max=INT_MIN,min=INT_MAX;
    for(int ele:arr){
        if(ele>max){
            max=ele;
        }
        if(ele<min){
            min=ele;
        }
    }
    cout<<"Maximum element = "max<<"\n";
    cout<<"Minimum element = "<<min;
}