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
    int arr2[size];
    for(int i=0;i<size;++i){
        arr2[i]=arr[i];
    }
    cout<<endl;
    cout<<"Copied array = ";
    for(int ele:arr2){
        cout<<ele;
    }
}