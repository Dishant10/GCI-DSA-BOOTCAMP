 
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

    int size2;
    cout<<"Enter the size of the second array";
    cin>>size2;
    int arr2[size2];
    for(int i=0;i<size2;i++){
        int number;
        cin>>number;
        arr2[i]=number;
    }

    int mergeArray[size+size2];
    for(int i=0;i<size;++i){
        mergeArray[i]=arr[i];
    }
    for(int i=0,j=size;i<size2;++i,++j){
        mergeArray[j]=arr2[i];
    }

    cout<<"Array after merging \n";
    for(int ele:mergeArray){
        cout<<ele;
    }

}