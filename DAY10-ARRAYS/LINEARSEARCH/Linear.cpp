#include<iostream>
using namespace std;

    bool linearSearch(int arr[],int n,int key){
        for(int i=0;i<n;i++) 
            if(arr[i]==key)
                return 1;
                return 0;

        
    }
     int main(){

    int arr[]={2,3,46,7,8};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cout<<"enter key"<<endl;
    cin>>key;
    bool result=linearSearch(arr,n,key);
    if(result){
        cout<<"present"<<endl;


    }
    else{
        cout<<"absebt";
    }
return 0;
}