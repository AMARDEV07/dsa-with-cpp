//int this code we leant 3 concept
/* 1) how to find subarray 
     2) sum of all sub array using brute force
     3) find min/or max sum in all sub array
       or we also leant about micro*/



       #include<iostream>
       using namespace std;



       void maxsumofsubarray(int arr[],int n){
        //inislide max and min value for finding max and min sum;
         int maxsum= INT8_MIN;

        int minsum=INT8_MAX;

        // finding subarray

        for( int start=0;start<n;start++){
            for(int end =start;end<n;end++){

                //start sum of subarray
                int currentsum=0;
                for(int i=start;i<=end;i++){
                    currentsum+=arr[i];

                    
                }
                cout<<currentsum<<" ,";
                maxsum=max(currentsum,maxsum);
                minsum=min(currentsum,minsum);

            }
            cout<<endl;
           

        }
         cout<<"max sum is"<<maxsum;
            cout<<"min sum is"<<minsum;

       }
        int main(){
            int arr[6]={2,-3,6,-5,4,2};
            int n=sizeof(arr)/sizeof(int);
           maxsumofsubarray(arr,n);
       return 0;
       }