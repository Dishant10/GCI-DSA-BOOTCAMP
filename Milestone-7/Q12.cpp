#include<bits/stdc++.h>
using namespace std;
int average(int arr[],int size){
    int sum=0;
for(int i=0;i<size;++i){
    sum=sum+arr[i];
}
return sum/size;
}
int sum(int arr[],int size){
    int sum=0;
for(int i=0;i<size;++i){
    sum=sum+arr[i];
}
return sum;
}
int smallest(int arr[],int size){
    int smallest=INT_MAX;
    for(int i=0;i<size;++i){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }

    return smallest;

}
int largest(int arr[],int size){
int largest=INT_MIN;
    for(int i=0;i<size;++i){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }

    return largest;
}
int main(){
    int size;
    cout<<"Enter the size you want the array should be";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;++i){
        int number;
        cin>>number;
        arr[i]=number;
    }

int average1=average(arr,size);
int sum1=sum(arr,size);
int smallest1=smallest(arr,size);
int largest1=largest(arr,size);
    cout<<"Sum = "<<sum1<<"\n";
    cout<<"Average = "<<average1<<"\n";
    cout<<"Smallest = "<<smallest1<<"\n";
    cout<<"Largest = "<<largest1<<"\n";

}