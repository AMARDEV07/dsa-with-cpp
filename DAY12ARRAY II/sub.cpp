//sub array it means contignous part of element. supose
// yout have(1,2,3,4)then is subarray is 1,12,123,1234,2,23,234,3,34,4


//how to find subarray?
// pesudo code - start=0 to n;
                //  end=stat to n;
                // i=start to n;

//    time complexity=o(n^3) 
#include<iostream>
using namespace std;


void printsubarray(int arr[],int n){
    //taking 1st value;
    for(int start=0;start<n;start++){
        //taking  last.
        for(int end=start; end<n;end++){
            // cout<<end<<start<<" ";
             for(int i=start;i<=end;i++){
            cout<<arr[i];
        }
       cout<<" ,";
        }
        cout<<endl;
    }
}
 int main(){
int arr[]={1,2,3,4,5};
int n=5;
printsubarray(arr,n);
return 0;
}