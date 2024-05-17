



// case 1; no extra space use; optmise;
#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
     void printarr(int arr[],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i];
        
    
      
    }

     }

   
    

 int main(){
    int arr[]={2,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);
reverse(arr,n);
printarr(arr,n);


   
return 0;
}