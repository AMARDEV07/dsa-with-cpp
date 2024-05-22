#include<iostream>
using namespace std;
void kandlaalgo(int arr[],int n){
        int currentsum=0;
    int maxsum=INT8_MIN;


    for(int i=0;i<n;i++){
        currentsum+=arr[i];
        maxsum=max(currentsum,maxsum);
    
    if(currentsum<0){
        currentsum=0;
    }

  

}
  cout<<"max sum"<<maxsum;
}
  
        int main(){
                int arr[]={2,-3,6,-5,4,2};
                int n=sizeof(arr)/sizeof(int);
                kandlaalgo(arr,n);
            return 0;
        }
            