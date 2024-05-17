#include<iostream>
using namespace std;
//  int main(){

//     //find max value in arr;
//     int arr[]={5,6,7,3,8};
//     int n=sizeof(arr)/sizeof(int);
//     int max=arr[0];
//     int min=arr[0];



//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//             cout<<arr[i]<<endl;

//         }
//     }
//     cout<<"max value is "<<max<<endl;

// for(int i=0;i<n;i++){
//         if(arr[i]<min){
//             min=arr[i];
//             cout<<arr[i];
//         }
// }
// cout<<"min value is"<<endl; 


int maxarr(int arr[],int n){
    int max=arr[0];
    for(int i=1 ;i<n;i++)
      if  (arr[i]>max)
        max=arr[i];
      
      return max;
    }

    int minArr(int arr[],int n){
        int min=arr[0];
        for (int i=0;i<n;i++){
            if(arr[i]<min){
                min=arr[i];
                cout<<arr[i];
            }
        }
        return min;
    }



int main(){
    int arr[]={3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);
   int max= maxarr(arr,n);
    cout<<max;
  
    int min=minArr(arr,n);
    cout<<min;

    return 0;
}





// return 0;
// }