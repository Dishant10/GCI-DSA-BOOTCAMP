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
    int countEven=0,countOdd=0;
    for(int ele:arr){
        if(ele%2==0){
            countEven++;
        }
        else if(ele%2!=0){
            countOdd++;
        }
    }
    cout<<"\n Number of even elements = "<<countEven;
    cout<<"\n Number of odd elements = "<<countOdd;

}