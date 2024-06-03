#include<iostream>
using namespace std;
int stairecase(int mat[4][4],int n,int m,int key){
    int i=0,j=m-1;//row to col...
     
    while(i<n &&j>=0){
        // mat[i][j]=cell; of colum..
          // condition 1 
          if(mat[i][j]==key){
            cout<<"value found "<<i<<" "<<j<<endl;//print coodinates..
            return true;

          }
          //condition 2//
          else if(mat[i][j]>key){
            //col go left
            j--;
          }
          else{
            i++;//rows doew
          }




    }
    cout<<"value not found"<<endl;
    return false;
}
 int main(){
    int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int key;
     cout<<"enter value of key"<<endl;
    cin>>key;
   
   
    
   cout<<stairecase(matrix,4,4,key);

return 0;
}
 