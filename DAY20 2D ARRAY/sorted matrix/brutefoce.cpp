#include<iostream>
using namespace std;
  int bruteforcesortedmatrix(int matrix[4][4],int n,int m,int key){
    if (n==0)
        return-1;
    
   //starting traverse througth entire matrix;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==key){//condition...
                cout<<"present";
                return true;
            }
            
        }
    }
        cout<<"nahi h";
        return false;
     
    

 }
 int main(){
    int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int key;
     cout<<"enter value of key"<<endl;
    cin>>key;
   
   
    
   cout<< bruteforcesortedmatrix(matrix,4,4,key);

return 0;
}