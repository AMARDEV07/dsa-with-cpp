#include<iostream>
using namespace std;
bool binarysearch(int matrix[],int n,int key){
    // binary search.......//row wise...
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(matrix[mid]==key){
            return true;
        }
        else if( matrix[mid]>key){
           e=mid-1;
        }
        else{ s=mid+1;}
    }
   return false;
}


bool matrixsort(int mat[][4],int n,int m,int key){
    //all matrix search...
     int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
    //------------------------------------

    //condition 
        if(key>=mat[mid][0] && key<=mat[mid][n-1] ){
            //key greater then mid 0.
            //or less the mid n-1;
            return binarysearch(mat[mid],n,key);
            //return bs mat[mid],n,key  
        }
        if(key<mat[mid][0])
         e=mid-1;
         else
            s=mid+1;
         

}
         return false;
}
  int main(){
    int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,152,16}};
    int key;
     cout<<"enter value of key"<<endl;
    cin>>key;
   
   
    
   cout<<matrixsort(matrix,4,4,key);

return 0;
}