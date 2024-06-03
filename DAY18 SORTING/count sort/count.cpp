#include<iostream>
using namespace std;


void count( int *arr,int n){
    int fre[100000]={0};//ranges....
    
    int maxval=INT8_MIN,minval=INT8_MAX;// min and max value range...
    for(int i=0;i<n;i++){// rdnage find out loop.
     minval=min(minval,arr[i]);
    maxval=max(maxval,arr[i]);
 }

//step 1

    for(int i=0;i<n;i++){
      fre[arr[i]]++;// arri treat as andex or opyained all value.
    }
    //step 2;

//j represet array of index which goes with n-1;
    for(int i=minval, j=0; i<=maxval;i++){
        while(fre[i]>0){
          arr[j++]=i;
            fre[i]--;
        }


    }
    
 
   
    

}
   // print(arr,n);
void print(int *arr,int n){
  for(int i=0;i<n;i++){
    cout<<arr[i];
  }
}

 int main(){
    int arr[]={6,5,3,6,2};
    int n=5;
    count(arr,n);
    print(arr,n);

 
    
return 0;
} 