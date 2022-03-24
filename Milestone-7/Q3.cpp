#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[20];
    int countEven=0,countOdd=0,countPos=0,countNeg=0;
    for(int i=0;i<20;i++)
    {
        int number;
        cin>>number;
        if(number%2 == 0){
            countEven++;
        }
        if(number%2 != 0){
            countOdd++;
        }
        if(number>0){
            countPos++;

        }
        if(number<0){
            countNeg++;
        }
    }

    cout<<"No of Even numbers = "<<countEven;
    cout<<endl;
     cout<<"No of Odd numbers = "<<countOdd;
     cout<<endl;
      cout<<"No of Positive numbers = "<<countPos;
      cout<<endl;
       cout<<"No of Negative numbers = "<<countNeg;
       cout<<endl;

}