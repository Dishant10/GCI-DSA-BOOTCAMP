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
    int number;
    cout<<"enter the number you want to insert \n ";
    cin>>number;
    cout<<"enter the position you want to insert the number at \n";
    int position;
    cin>>position;
    int newArray[size+1];
    if(position>size){
        cout<<"Entered postion is greater than the size of the array so the number will be inserted at the last \n";
        size=size+1;
        arr[size-1]=number;
    }
    if(position<0){
        cout<<"Entered position is less than 0 so the number will be inserted at the front \n";
        size=size+1;
        newArray[0]=number;
        for(int i=0,j=1;j<size-1;i++,++j){
          newArray[i]=arr[j];
        }
    }

    else if(position>0 && position<size-1){
        
        for(int i=0;i<position-1;++i){
            newArray[i]=arr[i];
        }
        newArray[position-1]=number;
        
        for(int i=position;i<size;++i){
          newArray[i]=arr[i];
        }
        size=size+1;
    }
        cout<<"New array with inserted element is \n";
        for(int ele:newArray){
            cout<<ele;
        }
}