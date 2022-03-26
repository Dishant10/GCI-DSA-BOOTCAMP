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

if(minimumEle % 2 == 0){
    cout<<"Even";
for(int i=0;i<size;++i){
    if(arr[i] % 2 == 0){
    for(int j=i+1;j<size;++j){
        
            cout<<"Even";
            // if(arr[i]>arr[j]){
            //     int temp=arr[i];
            //     arr[i]=arr[j];
            //     arr[j]=temp;
            // }
        }
    }
}
// for(int i=countEven-1;i<size;++i){
//     for(int j=i+1;j<size;++j){
//          if(arr[i]>arr[j]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//     }
// }
}
else if(minimumEle % 2 != 0){
    cout<<"Odd";
for(int i=0;i<size;++i){
    if(arr[i]%2 != 0){
    for(int j=i+1;j<size;++j){
        
            cout<<"Odd";
            // if(arr[i]>arr[j]){
            //     int temp=arr[i];
            //     arr[i]=arr[j];
            //     arr[j]=temp;
            // }
        }
    }
    
}
// for(int i=countOdd-1;i<size;++i){
//     for(int j=i+1;j<size;++j){
//          if(arr[i]>arr[j]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//     }
// }
}
cout<<"Sorted array ";
for(int ele:arr){
    cout<<ele;
}
}