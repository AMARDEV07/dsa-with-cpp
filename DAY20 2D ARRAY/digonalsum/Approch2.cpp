#include<iostream>
using namespace std;

int digonalsum(int matrix[][4],int n){
    int sum=0;
    //TIME COMPLEXITY O(N);
    for(int i=0;i<n;i++){  //rows
      
  
         sum+=matrix[i][i];  //primary digonal sum;

    
    //condition 2//
    if(i!=n-i-1){
        sum+=matrix[i][n-i-1];}
    //secondary digonal sum;
} return sum;

 }



 int main(){
    int matrix[4][4]={{1,2,3,4}
                       ,{5,6,7,8},
                       {9,10,11,13},
                       {12,14,15,16}};

                
  cout<< digonalsum(matrix,4);
  
 
 
return 0;
 }