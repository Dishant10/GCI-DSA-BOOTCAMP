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
    unordered_map<int,int> map;
    for(int ele:arr){
        map[ele]++;
    }cout<<"\n";
    for(int ele:arr){
        if(map[ele]==1){
            cout<<ele<<"\n";
        }
    }
}