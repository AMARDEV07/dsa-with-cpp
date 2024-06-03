#include<iostream>
using namespace std;

int sum(int nums[][3],int n,int m){
    int sum=0;
    
   for(int i=0;i<n;i++){//for single row;
     sum+=nums[1][i];
    //  for(int j=0;j<m;j++){  // it for when u want sum of 
    //    sum+=nums[i][j];  // sum of all rows
        
    //particular row sum;

    }
//    }
    
    return sum;
}
  
 int main(){
    int nums[3][3]={{4,7,8},{8,8,7},{2,3,4}};
   
   cout<< sum(nums,3,3);
return 0;
}