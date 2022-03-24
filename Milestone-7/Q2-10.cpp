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
    int newArray[size];
    cout<<"Enter the position you want to delete";
    int pos;
    cin>>pos;
    if(pos<=0){
        cout<<"enter a valid position";
        cout<<endl;
    }
     else if(pos>size){
        cout<<"Enter a valid position";
        cout<<endl;
    }
    else{
         
         for(int i=0;i<pos-1;++i){
             newArray[i]=arr[i];

         }
         for(int i=pos,j=pos-1;i<size;++i,++j){
              newArray[j]=arr[i];
         }


          cout<<"Array after deletion \n";
    for(int i=0;i<size-1;i++){
        cout<<newArray[i];
    }
    }

   
}
