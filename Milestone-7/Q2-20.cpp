#include<bits/stdc++.h>
using namespace std;
int countEven=0;
int countOdd=0;
int checkMin(int arr[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;++i){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]%2==0){
            countEven++;
        }
        else if(arr[i]%2 != 0){
            countOdd++;
        }
    }
    return min;
}
int main(){
    int size;
    cout<<"\n Enter the size of the array \n";
    cin>>size;

int arr[size];
cout<<"enter elements in an array \n";
for(int i=0;i<size;++i){
    int number;
    cin>>number;
    arr[i]=number;
}
int minimumEle=checkMin(arr,size);
if(minimumEle % 2 == 0 || minimumEle == 0){
for(int i=0;i<size;++i){
    if(arr[i] % 2 == 0){
        arr[i]=arr[i]*-1;
    }
}
for(int i=0;i<size;++i){
    for(int j=0;j<size;++j){
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}

}
else if(minimumEle % 2 != 0){
    for(int i=0;i<size;++i){
        if(arr[i] % 2 != 0){
            arr[i]=arr[i]*-1;
        }
    }


    for(int i=0;i<size;++i){
    for(int j=0;j<size;++j){
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}

}

cout<<"Sorted array ";
for(int ele:arr){
    if(ele < 0){
        ele=ele*-1;
    }
    cout<<ele<<" ";
}
}