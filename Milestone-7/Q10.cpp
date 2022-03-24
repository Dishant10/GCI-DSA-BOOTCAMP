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
    int maxSum=INT_MIN,minDiff=INT_MAX;
    pair<int,int> sumPair;
    pair<int,int> diffPair;
    for(int i=0;i<size;++i)
    {
        for(int j=i+1;j<size;++j)
        {
            int sum=arr[i]+arr[j];
            if(sum>maxSum){
            sumPair=make_pair(arr[i],arr[j]);
            maxSum=sum;
            }
            
            int difference=arr[i]-arr[j];
            if(difference<minDiff){
                diffPair=make_pair(arr[i],arr[j]);
                minDiff=difference;
            }
            
        }
    }

    cout<<"Sum-Pair"<<"\n"<<"("<<sumPair.first<<","<<diffPair.second<<")";
    cout<<"Difference-Pair"<<"\n"<<"("<<diffPair.first<<","<<diffPair.second<<")";

}