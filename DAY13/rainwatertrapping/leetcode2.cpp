#include<iostream>
using namespace std;


int trap(int *heights,int n){
    int leftmax[20000],rightmax[20000];//inisilied to array;
     leftmax[0]=heights[0];
    rightmax[n-1]=heights[n-1];


    for(int i=1;i<n;i++){
        //comapre
        leftmax[i]=max(leftmax[i-1],heights[i-1]);


    }
    for(int i=n-2;i>=0;i--){
        rightmax[i]=max(rightmax[i+1],heights[i+1]);
        
    }

    int watertrapped=0;

    for(int i=0;i<n;i++){
        int currentwater=min(leftmax[i],rightmax[i]-heights[i]);
    if(currentwater>0){
        watertrapped+=currentwater;
    }

        
    }
    return watertrapped;
}
 int main(){
    int heights[7]={7,6,5,4,3,5};
    int n=sizeof(heights)/sizeof(int);
    int ans=trap(heights,n);
    cout<<ans;
return 0;
}