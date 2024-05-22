#include<iostream>
using namespace std;


 int binarySearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
     
   

    while(start<=end){
         int mid=(start+end)/2;
       
        if(arr[mid]==key){ //key found; 
            return mid;
        }
        else if(arr[mid]<key){//2nd
            start=mid+1;
        }
        else{
            end=mid-1;//ist half
        }
    }
    return -1;

 }
 int main(){
    int arr[]={2,4,6,8,9};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cout<<"enter value of key"<<endl;
    cin>>key;
   cout<< binarySearch(arr,n,key);
return 0;
}