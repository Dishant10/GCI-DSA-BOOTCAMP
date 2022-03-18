#include<bits/stdc++.h>
using namespace std;
int main(){
     int size;
   cout<<"Enter size of the array";
    cin>>size;

    int arr[size];

    for(int i=0;i<size;++i){
        int number;
        cin>>number;
        arr[i]=number;
    }
    if(size<3 || size<8)
    {
        cout<<"The array is not long enough to perform the neccessary actions.";   
    }
    else {
        cout<<endl;
        for(int i=2;i<8;++i)
        {
            cout<<" "<<arr[i];
        }
    }
}