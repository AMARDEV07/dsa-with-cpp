/*  OPTMISED CODE OF MAX SUM OF SUBARRAY
     T.C=O(N^2)     
         IN THIS code we just remove 3rd loop becouse 
            we asumed that mid =start and then we chek all value repated satrt all time like 
            2--2
            2+3---5
            2+3+4---9
            
             so in code we remve 3rd loop or 
             inslised currentsum code start loops start
             then we new value come currentsum =0
            ---or last when we find end then it sum with first one...*/

        

            #include<iostream>
            using namespace std;
               void  optmiseMaxsumOFsubarray(int arr[],int n){
            int maxsum=INT8_MIN;
            int minsum=INT8_MAX;


            for(int start=0;start<n;start++){//start value point
            int currentsum=0;//it store all curent value then it inisled with zero.
            for(int end=start; end<n;end++){//when ever end value chaange it add whit first value;//then it compare with max
                currentsum+=arr[end];
                maxsum=max(currentsum,maxsum);
                minsum=min(currentsum,minsum);

            }
            cout<<endl;
            }
            cout<<"max value is "<<maxsum;
            cout<<"min value is"<<minsum;
            }
             int main(){
                int arr[]={2,-3,6,-5,4,2};
                int n=sizeof(arr)/sizeof(int);
                optmiseMaxsumOFsubarray(arr,n);
            return 0;
            }