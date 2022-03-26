#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[10];
cout<<"enter elements in an array of size 10 \n";
for(int i=0;i<10;++i){
    int number;
    cin>>number;
    arr[i]=number;

}
int evenArray[10],oddArray[10],i=0,j=0;
for(int ele:arr){
if(ele%2 == 0){
    evenArray[i]=ele;
    ++i;
}
else if(ele%2 != 0 ){
    oddArray[j]=ele;
    ++j;
}

}
cout<<"\n Odd Array \n ";
for(int ele:oddArray){
    cout<<ele;

}
cout<<"\n Even Aray \n";
for(int ele:evenArray){
    cout<<ele;
}
}